#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48c60);

#define public_6f48c80 _public_6f48c80
#define public_6f48c89 _public_6f48c89
#define public_6f48c90 _public_6f48c90
#define public_6f48c9b _public_6f48c9b

PROC_DECLARE(0x6f48c60, internal_6f48c60, public_6f48c60);
extern "C" NAKED register_t __cdecl internal_6f48c60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [ecx+0xF0]
        cmp eax, edx
        push esi
        je public_6f48c90
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+8]
        lea esp, ss:[esp]
        public_6f48c80 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f48c89
        cmp dword ptr ds : [eax+4], ecx
        je public_6f48c90
        public_6f48c89 : nop
        add eax, 0x10
        cmp eax, edx
        jne public_6f48c80
        public_6f48c90 : nop
        cmp eax, edx
        pop esi
        je public_6f48c9b
        mov eax, dword ptr ds : [eax+8]
        ret 8
        public_6f48c9b : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f48c60)
    }
}

#undef public_6f48c80
#undef public_6f48c89
#undef public_6f48c90
#undef public_6f48c9b
