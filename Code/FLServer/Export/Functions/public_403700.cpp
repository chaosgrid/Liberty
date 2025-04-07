#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403700);
CLANG_FORWARD_PROC_SYMBOL(public_404060);
CLANG_FORWARD_PROC_SYMBOL(public_404b80);
CLANG_FORWARD_PROC_SYMBOL(public_404fe0);
CLANG_FORWARD_PROC_SYMBOL(public_405800);
CLANG_FORWARD_PROC_SYMBOL(public_405ce0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_403730 _public_403730
#define public_403758 _public_403758
#define public_40377d _public_40377d
#define public_403781 _public_403781
#define public_4037a1 _public_4037a1

PROC_DECLARE(0x403700, internal_403700, public_403700);
extern "C" NAKED register_t __cdecl internal_403700()
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
        je public_40377d
        mov ecx, eax
        cmp eax, ecx
        jne public_40377d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_403758
        nop 
        lea esp, ss:[esp]
        public_403730 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_404fe0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_405ce0
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_403730
        public_403758 : nop
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
        call public_404060
        jmp public_4037a1
        public_40377d : nop
        cmp eax, edi
        je public_4037a1
        public_403781 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_405800
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_404b80
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_403781
        public_4037a1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_418978
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x403700)
    }
}

#undef public_403730
#undef public_403758
#undef public_40377d
#undef public_403781
#undef public_4037a1
