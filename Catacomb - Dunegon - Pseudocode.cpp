// Catacomb - Dunegon - Pseudocode
//
// Created by Justin Richard 03-17-2021

// Story
	// Short dungeon crawler-like game where you have merchants before venturing into a dungeon to kill a necromancer.
	// The catacombs have been overrun by the undead, and you're going to stop it.
	// By defeating the necromancers you will gain more powerful weapons and armor in order to venture deeper
	// The world will not be safe until the terrible Necromancer Necron is defeated. (base code for now will only include 1 boss, if I continue would probably have around 7)

// TO-DO
	// Starting Remarks
		// Short and simple explaining the dungeon setting
			// customization options for name/class/sex
				// Have main menu here for access to NPCs and to start dungeon (Ophelia/Mort)
	// Player Starting Inventory
		// Midas Sword
		// Iron Armor
		// Health potions
		// Starting Gold amount
			// need to be able to equip/unequip/use items
	// Merchant System (Ophielia)
		// items (undead Bow, Super Cleaver, Wise Dragon Armor, Health potion)
			// Merchant system already made in another program, simple rework
	// Start Dungeon (Mort)
		// explains the dangers of the catacombs
			// opens menu to select floor (only 1 option unless I continue to make more)
	// Dungeon
		// Different rooms, and movement between them
			// Simple switch choice on selection for where to go
		// Trap Room
			// not flushed out yet, but probably RNG chance of either lots of damage or amazing reward
		// 3 Weirdos Puzzle
			// given a riddle of 3 people each with a chest, player must pick the correct chest for a reward (coins + buff)
		// Tic-Tac-Toe puzzle
			// Probably copy code from tic-tac-toe example
		// Mini-Boss Room
			// normal combat with simple attacks, should not be too hard to kill
		// Blood Room (simply asks "Are you ready to fight the boss?")
			// simple yes or no question, if no, move back to previous room
		// Boss Room
			// Bonzo Boss fight
			// Normal attack
			// Second phase after killed
				// Slightly stronger attacks (maybe 1.5x, possibly less if that's too high)
	// COMBAT SYSTEM
		// switch menu for combat system
			// options: attack/use item/view stats/view enemy stats
		// if you win combat, gain a buff
		// if you lose combat, die, send back to main dungeon entrance
		// if you win combat against Boss, give a rewarding statement
			// have selection of new item to help in future runs
				// send back to main catacomb entrance

// EXTRA STUFF (If there is time)
	// Malik the Blacksmith (Advanced Shop)
		// Much better weapons at a much higher cost
		// Silent Death, Giant Sword, Adaptive Armor
	// Health/Buff potions
	// 2nd Floor to the Catacombs (Scarf boss fight)
		// New items from scarf boss
		// new puzzle room (maybe a maze like room)
	// Skills
		// have a small section where you can "train" skills
			// answering trivis/math questions or just repeating commands to train
			// increases stats
