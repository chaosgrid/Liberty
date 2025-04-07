#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47d10);

#define public_6f47d28 _public_6f47d28
#define public_6f47d37 _public_6f47d37
#define public_6f47d3d _public_6f47d3d
#define public_6f47d47 _public_6f47d47
#define public_6f47d56 _public_6f47d56
#define public_6f47d58 _public_6f47d58

PROC_DECLARE(0x6f47d10, internal_6f47d10, public_6f47d10);
extern "C" NAKED register_t __cdecl internal_6f47d10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x21]
        test al, al
        mov edx, dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ds : [ecx+0x2C]
        push esi
        je public_6f47d3d
        cmp edx, ecx
        mov al, 1
        je public_6f47d58
        mov esi, dword ptr ss : [esp+8]
        public_6f47d28 : nop
        cmp dword ptr ds : [edx], esi
        je public_6f47d37
        add edx, 4
        cmp edx, ecx
        jne public_6f47d28
        pop esi
        ret 4
        public_6f47d37 : nop
        xor al, al
        pop esi
        ret 4
        public_6f47d3d : nop
        xor al, al
        cmp edx, ecx
        je public_6f47d58
        mov esi, dword ptr ss : [esp+8]
        public_6f47d47 : nop
        cmp dword ptr ds : [edx], esi
        je public_6f47d56
        add edx, 4
        cmp edx, ecx
        jne public_6f47d47
        pop esi
        ret 4
        public_6f47d56 : nop
        mov al, 1
        public_6f47d58 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f47d10)
    }
}

#undef public_6f47d28
#undef public_6f47d37
#undef public_6f47d3d
#undef public_6f47d47
#undef public_6f47d56
#undef public_6f47d58
