#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec75b0);

#define public_6ec75c5 _public_6ec75c5

PROC_DECLARE(0x6ec75b0, internal_6ec75b0, public_6ec75b0);
extern "C" NAKED register_t __cdecl internal_6ec75b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        je public_6ec75c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec75c5 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec75b0)
    }
}

#undef public_6ec75c5
