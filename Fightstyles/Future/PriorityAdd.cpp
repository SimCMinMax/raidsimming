  else if (util::str_compare_ci(value, "PriorityAdd") || util::str_compare_ci(value, "Priority_Add"))
  {
	  sim->fight_style = "PriorityAdd";
	  sim->raid_events_str += "/adds,cooldown=60,duration=20,first_pct=95,count=1";
  }

  // Need to add an actual priority for the actor to focus the add before continueing this event