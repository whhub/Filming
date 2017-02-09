﻿using System;

namespace UIH.Mcsf.Filming.ControlTests.Interfaces
{
    public class NullPage : IPage
    {
        #region Implementation of IPage

        public bool IsVisible
        {
            get { return false; }
            set { }
        }

        public event EventHandler VisibleChanged;

        public int PageNO { get; set; }

        public event EventHandler PageNOChanged;

        public int PageCount { get; set; }

        public event EventHandler PageCountChanged;

        public ITitleSubject Title { get {return new NullTitleSubject();}}

        #endregion
    }
}