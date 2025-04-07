#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4350);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc370);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d190d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d54890);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b610);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c530);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d5b650 _public_6d5b650
#define public_6d5b692 _public_6d5b692
#define public_6d5b6a0 _public_6d5b6a0
#define public_6d5b6e1 _public_6d5b6e1
#define public_6d5b700 _public_6d5b700
#define public_6d5b728 _public_6d5b728
#define public_6d5b72a _public_6d5b72a
#define public_6d5b744 _public_6d5b744
#define public_6d5b774 _public_6d5b774
#define public_6d5b77c _public_6d5b77c
#define public_6d5b784 _public_6d5b784
#define public_6d5b786 _public_6d5b786
#define public_6d5b7c0 _public_6d5b7c0
#define public_6d5b80a _public_6d5b80a
#define public_6d5b80e _public_6d5b80e
#define public_6d5b8db _public_6d5b8db
#define public_6d5b8e7 _public_6d5b8e7

PROC_DECLARE(0x6d5b610, internal_6d5b610, public_6d5b610);
extern "C" NAKED register_t __cdecl internal_6d5b610()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, edi
        imul eax, 0x418
        mov esi, ecx
        mov ecx, dword ptr ds : [public_6d90260]
        lea ebp, ds:[eax+ecx-0x418]
        lea edx, ss:[esp+0x14]
        lea ecx, ds:[esi+8]
        push edx
        mov dword ptr ss : [esp+0x14], ebp
        call public_6d5c540
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        cmp eax, ecx
        je public_6d5b692
        public_6d5b650 : nop
        push ecx
        mov eax, esp
        lea ecx, ss:[esp+0x18]
        mov word ptr ds : [eax], di
        mov byte ptr ds : [eax+2], bl
        mov byte ptr ds : [eax+3], bl
        call public_6d5c530
        mov edx, dword ptr ds : [eax]
        push 6
        push ecx
        mov ecx, esp
        push edx
        call public_6d19180
        call public_6d190d0
        add esp, 0xC
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6ce4350
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [esi+0xC]
        jne public_6d5b650
        public_6d5b692 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d5b6e1
        nop 
        public_6d5b6a0 : nop
        push ecx
        lea ecx, ss:[esp+0x18]
        mov edi, esp
        call public_6d5c530
        mov dx, word ptr ds : [eax]
        push 6
        push ecx
        mov word ptr ds : [edi], dx
        mov byte ptr ds : [edi+2], bl
        mov byte ptr ds : [edi+3], bl
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, esp
        push eax
        call public_6d19180
        call public_6d190d0
        add esp, 0xC
        lea ecx, ss:[esp+0x14]
        call public_6ce5700
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [esi+0xC]
        jne public_6d5b6a0
        public_6d5b6e1 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+8]
        call public_6d5c540
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d5b728
        nop 
        lea esp, ss:[esp]
        public_6d5b700 : nop
        add eax, 0xC
        push eax
        mov ecx, offset public_6d90260
        call public_6ce1a90
        cmp dword ptr ds : [eax+0x408], ebx
        jne public_6d5b774
        lea ecx, ss:[esp+0x14]
        call public_6ce5700
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0xC]
        jne public_6d5b700
        public_6d5b728 : nop
        xor edi, edi
        public_6d5b72a : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[esi+8]
        call public_6d5c540
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d5b784
        public_6d5b744 : nop
        add eax, 0xC
        push eax
        mov ecx, offset public_6d90260
        call public_6ce1a90
        cmp dword ptr ds : [eax+0x40C], ebx
        jne public_6d5b77c
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ce4350
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0xC]
        jne public_6d5b744
        jmp public_6d5b784
        public_6d5b774 : nop
        mov edi, dword ptr ds : [eax+0x408]
        jmp public_6d5b72a
        public_6d5b77c : nop
        mov eax, dword ptr ds : [eax+0x40C]
        jmp public_6d5b786
        public_6d5b784 : nop
        xor eax, eax
        public_6d5b786 : nop
        mov ebp, dword ptr ss : [ebp+0x408]
        cmp ebp, ebx
        je public_6d5b8e7
        cmp edi, ebx
        jne public_6d5b8e7
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+0x40C]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[esi+8]
        call public_6d5c540
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d5b80a
        public_6d5b7c0 : nop
        add eax, 0xC
        push eax
        mov ecx, offset public_6d90260
        call public_6ce1a90
        mov dword ptr ds : [eax+0x408], ebp
        mov dword ptr ds : [eax+0x40C], edi
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        push eax
        call dword ptr ds : [edx+0x1C8]
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ce4350
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0xC]
        jne public_6d5b7c0
        public_6d5b80a : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d5b80e : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cfc370
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6d0f600
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        mov ecx, offset public_6d90260
        call public_6d54890
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [ebp+0x404], esi
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        push 0xA
        mov dword ptr ss : [esp+0x2C], ecx
        call public_6d43650
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edi, ss:[ebp+0x3E4]
        push edi
        call public_6d006c0
        add esp, 0x14
        test al, al
        je public_6d5b8db
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, ebx
        je public_6d5b8db
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_6d5b8db
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d5b8db
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+0x1B4], edx
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 0x3E0
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_6d8da2c
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_6d8da30]
        je public_6d5b8db
        mov edx, dword ptr ds : [edi]
        push edx
        lea ecx, ds:[eax+0x10]
        call public_6d0f1c0
        public_6d5b8db : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 4
        public_6d5b8e7 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        push eax
        mov dword ptr ss : [ebp+0x408], edi
        mov dword ptr ss : [ebp+0x40C], eax
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+0x1C8]
        jmp public_6d5b80e
        UNREACHABLE_TRAP(0x6d5b610)
    }
}

#undef public_6d5b650
#undef public_6d5b692
#undef public_6d5b6a0
#undef public_6d5b6e1
#undef public_6d5b700
#undef public_6d5b728
#undef public_6d5b72a
#undef public_6d5b744
#undef public_6d5b774
#undef public_6d5b77c
#undef public_6d5b784
#undef public_6d5b786
#undef public_6d5b7c0
#undef public_6d5b80a
#undef public_6d5b80e
#undef public_6d5b8db
#undef public_6d5b8e7
