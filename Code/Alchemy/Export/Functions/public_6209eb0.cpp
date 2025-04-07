#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209eb0);

#define public_6209ec5 _public_6209ec5

PROC_DECLARE(0x6209eb0, internal_6209eb0, public_6209eb0);
extern "C" NAKED register_t __cdecl internal_6209eb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6209ec5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6209ec5 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6209eb0)
    }
}

#undef public_6209ec5
