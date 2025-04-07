#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fdf0);

#define public_6c2fe05 _public_6c2fe05

PROC_DECLARE(0x6c2fdf0, internal_6c2fdf0, public_6c2fdf0);
extern "C" NAKED register_t __cdecl internal_6c2fdf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        je public_6c2fe05
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6c2fe05 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c2fdf0)
    }
}

#undef public_6c2fe05
