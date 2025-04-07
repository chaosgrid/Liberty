#include "Common-PCH.h"


#define public_6270240 _public_6270240

PROC_DECLARE(0x6270230, internal_6270230, public_6270230);
extern "C" NAKED register_t __cdecl internal_6270230()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x84]
        mov dl, byte ptr ds : [ecx]
        xor al, al
        test dl, dl
        je public_6270240
        mov al, 1
        public_6270240 : nop
        ret 
        UNREACHABLE_TRAP(0x6270230)
    }
}

#undef public_6270240
