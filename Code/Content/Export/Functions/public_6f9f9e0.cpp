#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa25b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9fa10 _public_6f9fa10
#define public_6f9fa38 _public_6f9fa38
#define public_6f9fa51 _public_6f9fa51
#define public_6f9fa55 _public_6f9fa55
#define public_6f9fa75 _public_6f9fa75

PROC_DECLARE(0x6f9f9e0, internal_6f9f9e0, public_6f9f9e0);
extern "C" NAKED register_t __cdecl internal_6f9f9e0()
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
        je public_6f9fa51
        mov ecx, eax
        cmp eax, ecx
        jne public_6f9fa51
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f9fa38
        nop 
        lea esp, ss:[esp]
        public_6f9fa10 : nop
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
        jne public_6f9fa10
        public_6f9fa38 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f9fa75
        public_6f9fa51 : nop
        cmp eax, edi
        je public_6f9fa75
        public_6f9fa55 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6ed1c80
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6fa21d0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f9fa55
        public_6f9fa75 : nop
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
        UNREACHABLE_TRAP(0x6f9f9e0)
    }
}

#undef public_6f9fa10
#undef public_6f9fa38
#undef public_6f9fa51
#undef public_6f9fa55
#undef public_6f9fa75
