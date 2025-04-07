#include "Common-PCH.h"


#define public_6294bb4 _public_6294bb4

PROC_DECLARE(0x6294ba0, internal_6294ba0, public_6294ba0);
extern "C" NAKED register_t __cdecl internal_6294ba0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        je public_6294bb4
        fld dword ptr ds : [public_6399408]
        pop esi
        ret 
        public_6294bb4 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+0x78]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6294ba0)
    }
}

#undef public_6294bb4
