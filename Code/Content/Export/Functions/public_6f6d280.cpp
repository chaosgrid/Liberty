#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6d280);

#define public_6f6d295 _public_6f6d295
#define public_6f6d2a0 _public_6f6d2a0
#define public_6f6d2a2 _public_6f6d2a2

PROC_DECLARE(0x6f6d280, internal_6f6d280, public_6f6d280);
extern "C" NAKED register_t __cdecl internal_6f6d280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd1cc0]
        mov ecx, dword ptr ds : [public_6fd1cc4]
        cmp eax, ecx
        je public_6f6d2a0
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6f6d295 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d2a2
        add eax, 4
        cmp eax, ecx
        jne public_6f6d295
        public_6f6d2a0 : nop
        mov eax, ecx
        public_6f6d2a2 : nop
        xor edx, edx
        cmp eax, ecx
        setne dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x6f6d280)
    }
}

#undef public_6f6d295
#undef public_6f6d2a0
#undef public_6f6d2a2
