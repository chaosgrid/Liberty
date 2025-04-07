#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);

#define public_6eb5f40 _public_6eb5f40
#define public_6eb5f4b _public_6eb5f4b
#define public_6eb5f4d _public_6eb5f4d

PROC_DECLARE(0x6eb5f30, internal_6eb5f30, public_6eb5f30);
extern "C" NAKED register_t __cdecl internal_6eb5f30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6eb5f4b
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6eb5f40 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eb5f4d
        add eax, 4
        cmp eax, ecx
        jne public_6eb5f40
        public_6eb5f4b : nop
        mov eax, ecx
        public_6eb5f4d : nop
        ret 4
        UNREACHABLE_TRAP(0x6eb5f30)
    }
}

#undef public_6eb5f40
#undef public_6eb5f4b
#undef public_6eb5f4d
