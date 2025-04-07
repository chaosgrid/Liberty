#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62086e0);

#define public_62086f7 _public_62086f7

PROC_DECLARE(0x62086e0, internal_62086e0, public_62086e0);
extern "C" NAKED register_t __cdecl internal_62086e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62086f7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_62086f7 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62086e0)
    }
}

#undef public_62086f7
