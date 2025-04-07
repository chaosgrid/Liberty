#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38120);

#define public_6f38130 _public_6f38130
#define public_6f3813b _public_6f3813b
#define public_6f3813d _public_6f3813d

PROC_DECLARE(0x6f38120, internal_6f38120, public_6f38120);
extern "C" NAKED register_t __cdecl internal_6f38120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f3813b
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6f38130 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f3813d
        add eax, 0x14
        cmp eax, ecx
        jne public_6f38130
        public_6f3813b : nop
        mov eax, ecx
        public_6f3813d : nop
        ret 4
        UNREACHABLE_TRAP(0x6f38120)
    }
}

#undef public_6f38130
#undef public_6f3813b
#undef public_6f3813d
