#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6d1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f6d1d6 _public_6f6d1d6
#define public_6f6d1e1 _public_6f6d1e1
#define public_6f6d1e3 _public_6f6d1e3
#define public_6f6d206 _public_6f6d206
#define public_6f6d211 _public_6f6d211

PROC_DECLARE(0x6f6d1c0, internal_6f6d1c0, public_6f6d1c0);
extern "C" NAKED register_t __cdecl internal_6f6d1c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd1cc0]
        mov ecx, dword ptr ds : [public_6fd1cc4]
        cmp eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        je public_6f6d1e1
        mov edx, dword ptr ds : [esi]
        public_6f6d1d6 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d1e3
        add eax, 4
        cmp eax, ecx
        jne public_6f6d1d6
        public_6f6d1e1 : nop
        mov eax, ecx
        public_6f6d1e3 : nop
        cmp eax, ecx
        jne public_6f6d211
        push esi
        push 1
        push ecx
        mov ecx, offset public_6fd1cbc
        call public_6f937c0
        mov eax, dword ptr ds : [public_6fd1cc0]
        mov ecx, dword ptr ds : [public_6fd1cc4]
        cmp eax, ecx
        je public_6f6d211
        mov edx, dword ptr ds : [esi]
        public_6f6d206 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d211
        add eax, 4
        cmp eax, ecx
        jne public_6f6d206
        public_6f6d211 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f6d1c0)
    }
}

#undef public_6f6d1d6
#undef public_6f6d1e1
#undef public_6f6d1e3
#undef public_6f6d206
#undef public_6f6d211
