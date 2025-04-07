#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d9a0);
CLANG_FORWARD_PROC_SYMBOL(public_442db0);
CLANG_FORWARD_PROC_SYMBOL(public_443190);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_595300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43d9d0 _public_43d9d0
#define public_43d9f8 _public_43d9f8
#define public_43da1d _public_43da1d
#define public_43da21 _public_43da21
#define public_43da41 _public_43da41

PROC_DECLARE(0x43d9a0, internal_43d9a0, public_43d9a0);
extern "C" NAKED register_t __cdecl internal_43d9a0()
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
        je public_43da1d
        mov ecx, eax
        cmp eax, ecx
        jne public_43da1d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_43d9f8
        nop 
        lea esp, ss:[esp]
        public_43d9d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_443190
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_595300
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_43d9d0
        public_43d9f8 : nop
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
        call public_53e430
        jmp public_43da41
        public_43da1d : nop
        cmp eax, edi
        je public_43da41
        public_43da21 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_5948b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_442db0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_43da21
        public_43da41 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x43d9a0)
    }
}

#undef public_43d9d0
#undef public_43d9f8
#undef public_43da1d
#undef public_43da21
#undef public_43da41
