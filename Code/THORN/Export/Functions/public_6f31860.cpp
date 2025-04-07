#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31860);

#define public_6f31874 _public_6f31874
#define public_6f3187e _public_6f3187e
#define public_6f31882 _public_6f31882
#define public_6f31887 _public_6f31887

PROC_DECLARE(0x6f31860, internal_6f31860, public_6f31860);
extern "C" NAKED register_t __cdecl internal_6f31860()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f31887
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6f31874 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_6f3187e
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f31882
        public_6f3187e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6f31882 : nop
        cmp eax, ecx
        jne public_6f31874
        pop esi
        public_6f31887 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6f31860)
    }
}

#undef public_6f31874
#undef public_6f3187e
#undef public_6f31882
#undef public_6f31887
