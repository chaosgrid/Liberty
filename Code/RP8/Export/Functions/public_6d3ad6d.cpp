#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ae9);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ad6d);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d12f);

#define public_6d3ae12 _public_6d3ae12
#define public_6d3ae14 _public_6d3ae14
#define public_6d3ae24 _public_6d3ae24
#define public_6d3ae42 _public_6d3ae42
#define public_6d3ae52 _public_6d3ae52

PROC_DECLARE(0x6d3ad6d, internal_6d3ad6d, public_6d3ad6d);
extern "C" NAKED register_t __cdecl internal_6d3ad6d()
{
    __asm
    {
        mov eax, public_6d5d12f
        call public_6d5cd8c
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        push 1
        xor edi, edi
        push edi
        push dword ptr ss : [ebp+8]
        mov esi, ecx
        mov dword ptr ss : [ebp-0x14], esi
        call public_6d37ae9
        mov ecx, dword ptr ds : [esi+0x1030]
        mov eax, dword ptr ds : [esi+0x1038]
        and ecx, 0xFFFFFFFE
        inc eax
        and eax, 0xFFFFFFFE
        mov ebx, eax
        sub ebx, ecx
        mov dword ptr ds : [esi+0x1078], eax
        mov eax, ebx
        shl eax, 4
        push eax
        mov dword ptr ss : [ebp-4], edi
        mov dword ptr ds : [esi], offset public_6d5f658
        mov dword ptr ds : [esi+0x1070], ecx
        mov dword ptr ds : [esi+0x1074], edi
        mov dword ptr ds : [esi+0x1080], edi
        mov dword ptr ds : [esi+0x107C], edi
        mov dword ptr ds : [esi+0x1084], edi
        mov dword ptr ds : [esi+0x1088], ebx
        mov dword ptr ds : [esi+0x108C], edi
        mov dword ptr ds : [esi+0x1090], 1
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x10], eax
        cmp eax, edi
        mov byte ptr ss : [ebp-4], 1
        je public_6d3ae12
/*FIXUP push offset _public_6d2f87d @0x6d3adff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push ebx
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x10]
        jmp public_6d3ae14
        public_6d3ae12 : nop
        xor eax, eax
        public_6d3ae14 : nop
        cmp eax, edi
        mov dword ptr ds : [esi+0x106C], eax
        jne public_6d3ae24
        mov dword ptr ds : [esi+0x1090], edi
        public_6d3ae24 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+4], 0x59565955
        jne public_6d3ae42
        mov dword ptr ds : [esi+0x1094], 8
        mov dword ptr ds : [esi+0x1098], edi
        jmp public_6d3ae52
        public_6d3ae42 : nop
        mov dword ptr ds : [esi+0x1094], edi
        mov dword ptr ds : [esi+0x1098], 8
        public_6d3ae52 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 4
        UNREACHABLE_TRAP(0x6d3ad6d)
    }
}

#undef public_6d3ae12
#undef public_6d3ae14
#undef public_6d3ae24
#undef public_6d3ae42
#undef public_6d3ae52
