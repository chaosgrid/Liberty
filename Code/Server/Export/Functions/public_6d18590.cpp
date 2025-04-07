#include "Server-PCH.h"


#define public_6d185ac _public_6d185ac

PROC_DECLARE(0x6d18590, internal_6d18590, public_6d18590);
extern "C" NAKED register_t __cdecl internal_6d18590()
{
    __asm
    {
        push ecx
        mov dword ptr ss : [esp], 0x3F800000
        call dword ptr ds : [public_6d647e8]
        test al, al
        jne public_6d185ac
        add esp, 4
        jmp dword ptr ds : [public_6d647e4]
        public_6d185ac : nop
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d18590)
    }
}

#undef public_6d185ac
