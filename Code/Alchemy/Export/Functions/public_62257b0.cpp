#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62257b0);

#define public_62257c3 _public_62257c3

PROC_DECLARE(0x62257b0, internal_62257b0, public_62257b0);
extern "C" NAKED register_t __cdecl internal_62257b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_62257c3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_62257c3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62257b0)
    }
}

#undef public_62257c3
