#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52f40);

#define public_6f52f50 _public_6f52f50
#define public_6f52f5b _public_6f52f5b
#define public_6f52f5d _public_6f52f5d

PROC_DECLARE(0x6f52f40, internal_6f52f40, public_6f52f40);
extern "C" NAKED register_t __cdecl internal_6f52f40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f52f5b
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6f52f50 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f52f5d
        add eax, 8
        cmp eax, ecx
        jne public_6f52f50
        public_6f52f5b : nop
        mov eax, ecx
        public_6f52f5d : nop
        ret 4
        UNREACHABLE_TRAP(0x6f52f40)
    }
}

#undef public_6f52f50
#undef public_6f52f5b
#undef public_6f52f5d
