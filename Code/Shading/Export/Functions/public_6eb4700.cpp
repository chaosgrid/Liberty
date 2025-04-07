#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3e50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6eb470f _public_6eb470f
#define public_6eb4735 _public_6eb4735
#define public_6eb4738 _public_6eb4738

PROC_DECLARE(0x6eb4700, internal_6eb4700, public_6eb4700);
extern "C" NAKED register_t __cdecl internal_6eb4700()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6eb470f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6eb470f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6eb4738
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6eb4735
        mov ecx, esi
        call public_6eb3e50
        push esi
        call public_6ed0c50
        add esp, 4
        public_6eb4735 : nop
        xor eax, eax
        pop esi
        public_6eb4738 : nop
        ret 4
        UNREACHABLE_TRAP(0x6eb4700)
    }
}

#undef public_6eb470f
#undef public_6eb4735
#undef public_6eb4738
