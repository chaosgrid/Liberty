#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62209e0);

#define public_62209f3 _public_62209f3

PROC_DECLARE(0x62209e0, internal_62209e0, public_62209e0);
extern "C" NAKED register_t __cdecl internal_62209e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_62209f3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_62209f3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62209e0)
    }
}

#undef public_62209f3
