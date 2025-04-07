#include "Common-PCH.h"


#define public_6294b94 _public_6294b94

PROC_DECLARE(0x6294b80, internal_6294b80, public_6294b80);
extern "C" NAKED register_t __cdecl internal_6294b80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        je public_6294b94
        fld dword ptr ds : [public_6399408]
        pop esi
        ret 
        public_6294b94 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+0x7C]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6294b80)
    }
}

#undef public_6294b94
