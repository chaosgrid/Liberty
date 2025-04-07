#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f210);

#define public_6d0f220 _public_6d0f220
#define public_6d0f22b _public_6d0f22b
#define public_6d0f22d _public_6d0f22d

PROC_DECLARE(0x6d0f210, internal_6d0f210, public_6d0f210);
extern "C" NAKED register_t __cdecl internal_6d0f210()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6d0f22b
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6d0f220 : nop
        cmp dword ptr ds : [eax], edx
        je public_6d0f22d
        add eax, 4
        cmp eax, ecx
        jne public_6d0f220
        public_6d0f22b : nop
        mov eax, ecx
        public_6d0f22d : nop
        ret 4
        UNREACHABLE_TRAP(0x6d0f210)
    }
}

#undef public_6d0f220
#undef public_6d0f22b
#undef public_6d0f22d
