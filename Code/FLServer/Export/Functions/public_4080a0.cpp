#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4080a0);

#define public_4080b4 _public_4080b4
#define public_4080be _public_4080be
#define public_4080c2 _public_4080c2
#define public_4080c7 _public_4080c7

PROC_DECLARE(0x4080a0, internal_4080a0, public_4080a0);
extern "C" NAKED register_t __cdecl internal_4080a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_4080c7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_4080b4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_4080be
        mov eax, dword ptr ds : [eax+8]
        jmp public_4080c2
        public_4080be : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_4080c2 : nop
        cmp eax, ecx
        jne public_4080b4
        pop esi
        public_4080c7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x4080a0)
    }
}

#undef public_4080b4
#undef public_4080be
#undef public_4080c2
#undef public_4080c7
