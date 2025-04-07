#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e0c10);
CLANG_FORWARD_PROC_SYMBOL(public_4e5a70);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e0c40 _public_4e0c40
#define public_4e0c5f _public_4e0c5f
#define public_4e0c84 _public_4e0c84
#define public_4e0c88 _public_4e0c88
#define public_4e0ca8 _public_4e0ca8

PROC_DECLARE(0x4e0c10, internal_4e0c10, public_4e0c10);
extern "C" NAKED register_t __cdecl internal_4e0c10()
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
        je public_4e0c84
        mov ecx, eax
        cmp eax, ecx
        jne public_4e0c84
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4e0c5f
        nop 
        lea esp, ss:[esp]
        public_4e0c40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4e5a70
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4e0c40
        public_4e0c5f : nop
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
        jmp public_4e0ca8
        public_4e0c84 : nop
        cmp eax, edi
        je public_4e0ca8
        public_4e0c88 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4e0c88
        public_4e0ca8 : nop
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
        UNREACHABLE_TRAP(0x4e0c10)
    }
}

#undef public_4e0c40
#undef public_4e0c5f
#undef public_4e0c84
#undef public_4e0c88
#undef public_4e0ca8
