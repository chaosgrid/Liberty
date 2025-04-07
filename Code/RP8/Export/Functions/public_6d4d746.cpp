#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d26e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d31e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d333);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d3d9);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d40a);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d560);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d746);

#define public_6d4d7a0 _public_6d4d7a0
#define public_6d4d7b2 _public_6d4d7b2

PROC_DECLARE(0x6d4d746, internal_6d4d746, public_6d4d746);
extern "C" NAKED register_t __cdecl internal_6d4d746()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        push 0x30
        push 1
        push edi
        call dword ptr ds : [eax]
        mov esi, eax
        mov dword ptr ds : [edi+0x19C], esi
        and byte ptr ds : [esi+8], 0
        mov dword ptr ds : [esi], offset _public_6d4d31e
        mov eax, dword ptr ds : [edi+0x64]
        imul eax, dword ptr ds : [edi+0x5C]
        add esp, 0xC
        mov dword ptr ds : [esi+0x28], eax
        cmp dword ptr ds : [edi+0x110], 2
        jne public_6d4d7a0
        push dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+4], offset _public_6d4d333
        mov dword ptr ds : [esi+0xC], offset _public_6d4d560
        mov eax, dword ptr ds : [edi+4]
        push 1
        push edi
        call dword ptr ds : [eax+4]
        add esp, 0xC
        mov dword ptr ds : [esi+0x20], eax
        jmp public_6d4d7b2
        public_6d4d7a0 : nop
        and dword ptr ds : [esi+0x20], 0
        mov dword ptr ds : [esi+4], offset _public_6d4d3d9
        mov dword ptr ds : [esi+0xC], offset _public_6d4d40a
        public_6d4d7b2 : nop
        mov eax, edi
        pop edi
        pop esi
        jmp public_6d4d26e
        UNREACHABLE_TRAP(0x6d4d746)
    }
}

#undef public_6d4d7a0
#undef public_6d4d7b2
