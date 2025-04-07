#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ecbb3f _public_6ecbb3f
#define public_6ecbb65 _public_6ecbb65
#define public_6ecbb68 _public_6ecbb68

PROC_DECLARE(0x6ecbb30, internal_6ecbb30, public_6ecbb30);
extern "C" NAKED register_t __cdecl internal_6ecbb30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ecbb3f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ecbb3f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ecbb68
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6ecbb65
        mov ecx, esi
        call public_6ec84c0
        push esi
        call public_6ed0c50
        add esp, 4
        public_6ecbb65 : nop
        xor eax, eax
        pop esi
        public_6ecbb68 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ecbb30)
    }
}

#undef public_6ecbb3f
#undef public_6ecbb65
#undef public_6ecbb68
