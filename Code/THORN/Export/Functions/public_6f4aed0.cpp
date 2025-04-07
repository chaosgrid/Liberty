#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aed0);

#define public_6f4aee4 _public_6f4aee4
#define public_6f4aeee _public_6f4aeee
#define public_6f4aef2 _public_6f4aef2
#define public_6f4aef7 _public_6f4aef7

PROC_DECLARE(0x6f4aed0, internal_6f4aed0, public_6f4aed0);
extern "C" NAKED register_t __cdecl internal_6f4aed0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f4aef7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6f4aee4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_6f4aeee
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f4aef2
        public_6f4aeee : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6f4aef2 : nop
        cmp eax, ecx
        jne public_6f4aee4
        pop esi
        public_6f4aef7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6f4aed0)
    }
}

#undef public_6f4aee4
#undef public_6f4aeee
#undef public_6f4aef2
#undef public_6f4aef7
