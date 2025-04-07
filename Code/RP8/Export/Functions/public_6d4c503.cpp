#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f05);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c45d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c503);

#define public_6d4c56a _public_6d4c56a
#define public_6d4c582 _public_6d4c582

PROC_DECLARE(0x6d4c503, internal_6d4c503, public_6d4c503);
extern "C" NAKED register_t __cdecl internal_6d4c503()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0x1C
        push 1
        push esi
        call dword ptr ds : [eax]
        mov edi, eax
        xor ebx, ebx
        mov dword ptr ds : [esi+0x188], edi
        add esp, 0xC
        mov dword ptr ds : [edi], offset _public_6d4c45d
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        cmp byte ptr ds : [esi+0x4A], bl
        je public_6d4c582
        cmp byte ptr ss : [esp+0x14], bl
        mov eax, dword ptr ds : [esi+0x110]
        mov dword ptr ds : [edi+0x10], eax
        je public_6d4c56a
        push ebp
        mov ebp, dword ptr ds : [esi+4]
        push eax
        push eax
        push dword ptr ds : [esi+0x60]
        call public_6d45f05
        pop ecx
        pop ecx
        push eax
        mov eax, dword ptr ds : [esi+0x64]
        imul eax, dword ptr ds : [esi+0x5C]
        push eax
        push ebx
        push 1
        push esi
        call dword ptr ss : [ebp+0x10]
        add esp, 0x18
        mov dword ptr ds : [edi+8], eax
        pop ebp
        jmp public_6d4c582
        public_6d4c56a : nop
        mov ecx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x64]
        imul eax, dword ptr ds : [esi+0x5C]
        push eax
        push 1
        push esi
        call dword ptr ds : [ecx+8]
        add esp, 0x10
        mov dword ptr ds : [edi+0xC], eax
        public_6d4c582 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4c503)
    }
}

#undef public_6d4c56a
#undef public_6d4c582
