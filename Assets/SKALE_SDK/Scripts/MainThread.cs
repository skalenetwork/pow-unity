using System;
using System.Collections.Generic;
using UnityEngine;

internal class MainThread : MonoBehaviour
{
    internal static MainThread wkr;
    Queue<Action> jobs = new Queue<Action>();

    void Awake()
    {
        wkr = this;
    }

    void Update()
    {
        while (jobs.Count > 0)
            jobs.Dequeue().Invoke();
    }

    internal void AddJob(Action newJob)
    {
        jobs.Enqueue(newJob);
    }
}
