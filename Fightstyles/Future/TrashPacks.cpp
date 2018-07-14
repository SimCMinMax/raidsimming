  else if (util::str_compare_ci(value, "TrashPacks") || util::str_compare_ci(value, "Trash_Packs"))
  {
	  sim->fight_style = "TrashPacks";
	  sim->raid_events_str += "/invulnerable,cooldown=600,duration=600";
	  sim->raid_events_str += "/adds,count=4,first=0,cooldown=60,duration=45,last=600";
  }

  // Could add in a priority for the adds and then get rid of invul so it can be run without fixed time or keep as is with fixed time