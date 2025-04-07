#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac190);

#define public_6eac1a2 _public_6eac1a2
#define public_6eac1ac _public_6eac1ac
#define public_6eac1b2 _public_6eac1b2
#define public_6eac1b8 _public_6eac1b8

PROC_DECLARE(0x6eac190, internal_6eac190, public_6eac190);
extern "C" NAKED register_t __cdecl internal_6eac190()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        je public_6eac1b2
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+8]
        public_6eac1a2 : nop
        cmp dword ptr ds : [eax+0x48], esi
        jne public_6eac1ac
        cmp dword ptr ds : [eax+0x20], edx
        je public_6eac1b8
        public_6eac1ac : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6eac1a2
        public_6eac1b2 : nop
        xor al, al
        pop esi
        ret 8
        public_6eac1b8 : nop
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6eac190)
    }
}

#undef public_6eac1a2
#undef public_6eac1ac
#undef public_6eac1b2
#undef public_6eac1b8
