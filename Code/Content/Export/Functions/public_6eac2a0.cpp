#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac2a0);

#define public_6eac2b0 _public_6eac2b0
#define public_6eac2b6 _public_6eac2b6
#define public_6eac2bd _public_6eac2bd

PROC_DECLARE(0x6eac2a0, internal_6eac2a0, public_6eac2a0);
extern "C" NAKED register_t __cdecl internal_6eac2a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        cmp ecx, edx
        je public_6eac2bd
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_6eac2b0 : nop
        cmp dword ptr ds : [ecx+0x48], esi
        jne public_6eac2b6
        inc eax
        public_6eac2b6 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6eac2b0
        pop esi
        public_6eac2bd : nop
        ret 4
        UNREACHABLE_TRAP(0x6eac2a0)
    }
}

#undef public_6eac2b0
#undef public_6eac2b6
#undef public_6eac2bd
