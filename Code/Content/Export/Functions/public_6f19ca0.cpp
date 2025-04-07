#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19ca0);

#define public_6f19cb5 _public_6f19cb5
#define public_6f19cc4 _public_6f19cc4
#define public_6f19cc6 _public_6f19cc6

PROC_DECLARE(0x6f19ca0, internal_6f19ca0, public_6f19ca0);
extern "C" NAKED register_t __cdecl internal_6f19ca0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ds : [edx]
        push esi
        xor al, al
        cmp ecx, edx
        je public_6f19cc6
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f19cb5 : nop
        cmp dword ptr ds : [ecx+8], esi
        je public_6f19cc4
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f19cb5
        pop esi
        ret 4
        public_6f19cc4 : nop
        mov al, 1
        public_6f19cc6 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f19ca0)
    }
}

#undef public_6f19cb5
#undef public_6f19cc4
#undef public_6f19cc6
