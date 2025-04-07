#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402c60);
CLANG_FORWARD_PROC_SYMBOL(public_403ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4045e0);
CLANG_FORWARD_PROC_SYMBOL(public_404a30);
CLANG_FORWARD_PROC_SYMBOL(public_4057b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_402c90 _public_402c90
#define public_402caf _public_402caf
#define public_402cd4 _public_402cd4
#define public_402cd8 _public_402cd8
#define public_402cf8 _public_402cf8

PROC_DECLARE(0x402c60, internal_402c60, public_402c60);
extern "C" NAKED register_t __cdecl internal_402c60()
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
        je public_402cd4
        mov ecx, eax
        cmp eax, ecx
        jne public_402cd4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_402caf
        nop 
        lea esp, ss:[esp]
        public_402c90 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_404a30
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_402c90
        public_402caf : nop
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
        call public_403ee0
        jmp public_402cf8
        public_402cd4 : nop
        cmp eax, edi
        je public_402cf8
        public_402cd8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_4057b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_4045e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_402cd8
        public_402cf8 : nop
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
        UNREACHABLE_TRAP(0x402c60)
    }
}

#undef public_402c90
#undef public_402caf
#undef public_402cd4
#undef public_402cd8
#undef public_402cf8
