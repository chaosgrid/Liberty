#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa25b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9e6b2 _public_6f9e6b2
#define public_6f9e6b4 _public_6f9e6b4
#define public_6f9e6d2 _public_6f9e6d2
#define public_6f9e6fa _public_6f9e6fa
#define public_6f9e71f _public_6f9e71f
#define public_6f9e723 _public_6f9e723
#define public_6f9e743 _public_6f9e743

PROC_DECLARE(0x6f9e6a0, internal_6f9e6a0, public_6f9e6a0);
extern "C" NAKED register_t __cdecl internal_6f9e6a0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        xor ebp, ebp
        cmp ecx, ebp
        push esi
        push edi
        je public_6f9e6b2
        lea esi, ds:[ecx+4]
        jmp public_6f9e6b4
        public_6f9e6b2 : nop
        xor esi, esi
        public_6f9e6b4 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f9e71f
        mov ecx, eax
        cmp eax, ecx
        jne public_6f9e71f
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f9e6fa
        public_6f9e6d2 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa25b0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6fa5880
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f9e6d2
        public_6f9e6fa : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6f9e743
        public_6f9e71f : nop
        cmp eax, edi
        je public_6f9e743
        public_6f9e723 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6ed1c80
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6fa21d0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f9e723
        public_6f9e743 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f9e6a0)
    }
}

#undef public_6f9e6b2
#undef public_6f9e6b4
#undef public_6f9e6d2
#undef public_6f9e6fa
#undef public_6f9e71f
#undef public_6f9e723
#undef public_6f9e743
