#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6616d90);
CLANG_FORWARD_PROC_SYMBOL(public_6617660);
CLANG_FORWARD_PROC_SYMBOL(public_6618070);
CLANG_FORWARD_PROC_SYMBOL(public_6618760);
CLANG_FORWARD_PROC_SYMBOL(public_6619190);
CLANG_FORWARD_PROC_SYMBOL(public_6619490);
CLANG_FORWARD_PROC_SYMBOL(public_6619730);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6616e7e _public_6616e7e
#define public_6616e82 _public_6616e82
#define public_6616ea6 _public_6616ea6

PROC_DECLARE(0x6616d90, internal_6616d90, public_6616d90);
extern "C" NAKED register_t __cdecl internal_6616d90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_66292b0
        mov dword ptr ds : [esi+4], offset public_662929c
        mov dword ptr ds : [esi+8], offset public_6629250
        mov dword ptr ds : [esi+0xC], offset public_6629240
        mov eax, dword ptr ds : [public_662acc8]
        push eax
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x10]
        push ecx
        push eax
        mov ecx, offset public_662acc4
        call public_6619190
        mov eax, dword ptr ds : [esi+0x40]
        lea edi, ds:[esi+0x3C]
        push eax
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call public_6618760
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_66281d0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x2C]
        lea edi, ds:[esi+0x28]
        add esp, 8
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call public_6618070
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [edi+4], ebx
        push eax
        mov dword ptr ds : [edi+0x10], ebx
        call public_66281d0
        add esi, 0x14
        mov dword ptr ds : [edi+8], ebx
        add esp, 8
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6616e7e
        mov ecx, eax
        cmp eax, ecx
        jne public_6616e7e
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_6619490
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        push ecx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6627050
        jmp public_6616ea6
        public_6616e7e : nop
        cmp eax, edi
        je public_6616ea6
        public_6616e82 : nop
        lea edx, ss:[esp+0x14]
        push ebx
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6619730
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, esi
        call public_6617660
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6616e82
        public_6616ea6 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push eax
        mov dword ptr ds : [esi+0x10], ebx
        call public_66281d0
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6616d90)
    }
}

#undef public_6616e7e
#undef public_6616e82
#undef public_6616ea6
