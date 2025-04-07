#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0540);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3b90);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4010);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4870);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4d20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4e70);
CLANG_FORWARD_PROC_SYMBOL(public_6ec54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5920);
CLANG_FORWARD_PROC_SYMBOL(public_6eca7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec05e3 _public_6ec05e3
#define public_6ec05f4 _public_6ec05f4
#define public_6ec0600 _public_6ec0600
#define public_6ec0696 _public_6ec0696
#define public_6ec06a0 _public_6ec06a0
#define public_6ec06c4 _public_6ec06c4

PROC_DECLARE(0x6ec0540, internal_6ec0540, public_6ec0540);
extern "C" NAKED register_t __cdecl internal_6ec0540()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr ds : [edi], offset public_6ed2930
        mov dword ptr ds : [edi+4], offset public_6ed2920
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        call public_6ebea50
        mov eax, dword ptr ds : [edi+0x80]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x7C]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6ec4e70
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6ed0c50
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x68]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6ec4d20
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push ecx
        mov ecx, esi
        call public_6ec5920
        mov edx, dword ptr ds : [esi+8]
        push 1
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6ec5920
        mov dword ptr ds : [esi+8], ebx
        dec dword ptr ds : [public_6ed57d8]
        jne public_6ec0600
        mov eax, dword ptr ds : [public_6ed57d4]
        cmp eax, ebx
        je public_6ec05f4
        public_6ec05e3 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6ed0c50
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_6ec05e3
        public_6ec05f4 : nop
        mov dword ptr ds : [public_6ed57d4], ebx
        mov dword ptr ds : [public_6ed57e0], ebx
        public_6ec0600 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x54]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6ec4870
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6ed0c50
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [edi+0x4C]
        lea esi, ds:[edi+0x3C]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        add esp, 8
        cmp ecx, ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_6ec0696
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6eca7e0
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_6ec0696
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_6ec0696
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6ec54e0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6eca7e0
        jmp public_6ec06c4
        public_6ec0696 : nop
        cmp eax, edi
        je public_6ec06c4
        lea ebx, ds:[ebx]
        public_6ec06a0 : nop
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6ec3b90
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ec4010
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6ec06a0
        public_6ec06c4 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6ed0c50
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ec0540)
    }
}

#undef public_6ec05e3
#undef public_6ec05f4
#undef public_6ec0600
#undef public_6ec0696
#undef public_6ec06a0
#undef public_6ec06c4
