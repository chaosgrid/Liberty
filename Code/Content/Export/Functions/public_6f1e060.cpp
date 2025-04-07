#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e060);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f229e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1e090 _public_6f1e090
#define public_6f1e0b8 _public_6f1e0b8
#define public_6f1e0d1 _public_6f1e0d1
#define public_6f1e0d5 _public_6f1e0d5
#define public_6f1e0f5 _public_6f1e0f5

PROC_DECLARE(0x6f1e060, internal_6f1e060, public_6f1e060);
extern "C" NAKED register_t __cdecl internal_6f1e060()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f1e0d1
        mov ecx, eax
        cmp eax, ecx
        jne public_6f1e0d1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f1e0b8
        nop 
        lea esp, ss:[esp]
        public_6f1e090 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f1fb80
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f229e0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f1e090
        public_6f1e0b8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f1e0f5
        public_6f1e0d1 : nop
        cmp eax, edi
        je public_6f1e0f5
        public_6f1e0d5 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f69d00
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f1fbc0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f1e0d5
        public_6f1e0f5 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f1e060)
    }
}

#undef public_6f1e090
#undef public_6f1e0b8
#undef public_6f1e0d1
#undef public_6f1e0d5
#undef public_6f1e0f5
