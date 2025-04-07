#include "Server-PCH.h"


#define public_6d05099 _public_6d05099

PROC_DECLARE(0x6d05070, internal_6d05070, public_6d05070);
extern "C" NAKED register_t __cdecl internal_6d05070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6d64018]
        add esp, 4
        test eax, eax
        je public_6d05099
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d05099
        dec dword ptr ds : [esi+8]
        public_6d05099 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d05070)
    }
}

#undef public_6d05099
