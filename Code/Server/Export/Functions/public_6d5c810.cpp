#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6d5c824 _public_6d5c824
#define public_6d5c82e _public_6d5c82e
#define public_6d5c832 _public_6d5c832
#define public_6d5c837 _public_6d5c837

PROC_DECLARE(0x6d5c810, internal_6d5c810, public_6d5c810);
extern "C" NAKED register_t __cdecl internal_6d5c810()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6d5c837
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6d5c824 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6d5c82e
        mov eax, dword ptr ds : [eax+8]
        jmp public_6d5c832
        public_6d5c82e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6d5c832 : nop
        cmp eax, ecx
        jne public_6d5c824
        pop esi
        public_6d5c837 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6d5c810)
    }
}

#undef public_6d5c824
#undef public_6d5c82e
#undef public_6d5c832
#undef public_6d5c837
