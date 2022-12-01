/* Derivate of elmo's firmware >>kb-elmo<mail@elmo.space>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// defining layer_names 
#define _BL 0
#define _FL 1
#define _FFL 2

// --- /
// -- / definition of  encoder map
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}, 
};
#endif
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Buran
   *  ┌────┬────┬────┬────┬────┐┌────┐┌────┬────┬────┬────┬────┐
   *  │ Q  │ W  │  E  │ R  │ T ││    ││ Y  │ U  │ I  │ O  │ P  │
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ A  │ S  │ D  │ F  │ G  ││    ││ H  │L(2J│ K  │ L  │ ;  │
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ Z  │ X  │ C  │ V  │ B  ││    ││ N  │ M  │ ,  │ .  │ /  │  
   *  └────┴────┴────┴────┴────┘└────┘└────┴────┴────┴────┴────┘
   *  ┌────┬────┬─────┐┌──────┐ ┌────┐ ┌──────┐┌─────┬────┬────┐
   *  │ctrl│MO1 │ GUI ││LT1Spc│ │MCR │ │ Bksp ││Ralt │Mo1 │ctrl│                                 
   *  └────┴────┴─────┘└──────┘ └────┘ └──────┘└─────┴────┴────┘
   */
   [_BL] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		                   	____,    	____,    	____,    	____,    	____,   ____,            
        ____,    	____,    	____,    	____,    	____,  		    	            ____,    	____,    	____,    	____,    	____,   ____,    
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,    	____,   ____,    
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,    	____,   ____
    ),
    [_FL] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		                   	____,    	____,    	____,    	____,    	____,   ____,            
        ____,    	____,    	____,    	____,    	____,  		    	            ____,    	____,    	____,    	____,    	____,   ____,    
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,    	____,   ____,    
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,    	____,   ____
    ),
    [_FFL] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		                   	____,    	____,    	____,    	____,    	____,   ____,            
        ____,    	____,    	____,    	____,    	____,  		    	            ____,    	____,    	____,    	____,    	____,   ____,    
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,    	____,   ____,    
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,    	____,   ____
    )
};


