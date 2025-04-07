#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f690);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fe30);
CLANG_FORWARD_PROC_SYMBOL(public_6f426e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2f6c0 _public_6f2f6c0
#define public_6f2f6df _public_6f2f6df
#define public_6f2f704 _public_6f2f704
#define public_6f2f708 _public_6f2f708
#define public_6f2f728 _public_6f2f728

PROC_DECLARE(0x6f2f690, internal_6f2f690, public_6f2f690);
extern "C" NAKED register_t __cdecl internal_6f2f690()
{
    __asm
    {
        sub esp, 0xC
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
        je public_6f2f704
        mov ecx, eax
        cmp eax, ecx
        jne public_6f2f704
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2f6df
        nop 
        lea esp, ss:[esp]
        public_6f2f6c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2fe30
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2f6c0
        public_6f2f6df : nop
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
        jmp public_6f2f728
        public_6f2f704 : nop
        cmp eax, edi
        je public_6f2f728
        public_6f2f708 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f69d00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f426e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f2f708
        public_6f2f728 : nop
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
        UNREACHABLE_TRAP(0x6f2f690)
    }
}

#undef public_6f2f6c0
#undef public_6f2f6df
#undef public_6f2f704
#undef public_6f2f708
#undef public_6f2f728
