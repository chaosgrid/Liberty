#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec10d0);

#define public_6ec10e3 _public_6ec10e3
#define public_6ec10fb _public_6ec10fb

PROC_DECLARE(0x6ec10d0, internal_6ec10d0, public_6ec10d0);
extern "C" NAKED register_t __cdecl internal_6ec10d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ec10e3
        push eax
        call dword ptr ds : [public_6ed1054]
        add esp, 4
        public_6ec10e3 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6ec10fb
        push eax
        call dword ptr ds : [public_6ed108c]
        add esp, 4
        mov dword ptr ds : [esi], eax
        pop esi
        ret 4
        public_6ec10fb : nop
        mov dword ptr ds : [esi], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec10d0)
    }
}

#undef public_6ec10e3
#undef public_6ec10fb
