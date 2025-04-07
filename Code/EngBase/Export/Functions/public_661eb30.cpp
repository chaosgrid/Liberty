#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eb30);

#define public_661eb41 _public_661eb41
#define public_661eb4d _public_661eb4d
#define public_661eb4f _public_661eb4f

PROC_DECLARE(0x661eb30, internal_661eb30, public_661eb30);
extern "C" NAKED register_t __cdecl internal_661eb30()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        je public_661eb4d
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        public_661eb41 : nop
        cmp dword ptr ds : [eax+0x40], ecx
        je public_661eb4f
        add eax, 0x48
        cmp eax, edx
        jne public_661eb41
        public_661eb4d : nop
        xor eax, eax
        public_661eb4f : nop
        ret 4
        UNREACHABLE_TRAP(0x661eb30)
    }
}

#undef public_661eb41
#undef public_661eb4d
#undef public_661eb4f
