#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab770);

#define public_6eab780 _public_6eab780
#define public_6eab78b _public_6eab78b
#define public_6eab78d _public_6eab78d

PROC_DECLARE(0x6eab770, internal_6eab770, public_6eab770);
extern "C" NAKED register_t __cdecl internal_6eab770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x5C]
        mov ecx, dword ptr ds : [ecx+0x60]
        cmp eax, ecx
        je public_6eab78b
        mov edx, dword ptr ss : [esp+4]
        mov edi, edi
        public_6eab780 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eab78d
        add eax, 0x28
        cmp eax, ecx
        jne public_6eab780
        public_6eab78b : nop
        xor eax, eax
        public_6eab78d : nop
        ret 4
        UNREACHABLE_TRAP(0x6eab770)
    }
}

#undef public_6eab780
#undef public_6eab78b
#undef public_6eab78d
