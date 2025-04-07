#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14230);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f560);
CLANG_FORWARD_PROC_SYMBOL(public_6d4fc30);

#define public_6d17746 _public_6d17746
#define public_6d177a1 _public_6d177a1

PROC_DECLARE(0x6d17630, internal_6d17630, public_6d17630);
extern "C" NAKED register_t __cdecl internal_6d17630()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        test ebp, ebp
        push esi
        push edi
        jbe public_6d177a1
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ss:[ebp-1]
        cmp eax, ecx
        jae public_6d177a1
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d177a1
        mov esi, ebp
        imul esi, 0x418
        mov eax, dword ptr ds : [esi+ecx-0x24]
        test eax, 0x3FFFFFFF
        lea edi, ds:[esi+ecx]
        mov dword ptr ss : [esp+0x10], edi
        jne public_6d177a1
        mov eax, dword ptr ds : [edi-8]
        mov ebx, dword ptr ss : [esp+0x48]
        push ebx
        mov dword ptr ss : [esp+0x50], eax
        call dword ptr ds : [public_6d643dc]
        add esp, 4
        test eax, eax
        je public_6d177a1
        mov ecx, dword ptr ss : [esp+0x4C]
        test ecx, ecx
        je public_6d17746
        test ebx, ebx
        je public_6d17746
        cmp ecx, ebx
        je public_6d17746
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [esi+ecx-0x38]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        lea ecx, ss:[esp+0x1C]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x4C]
        push ecx
        push 0x3A
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x28], edi
        call public_6d43650
        mov edx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+edx-0x38], edi
        lea ecx, ss:[esp+0x30]
        push ecx
        push 0x3B
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x3C], eax
        call public_6d43650
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 0x10
        public_6d17746 : nop
        push ebx
        push ebp
        mov dword ptr ds : [edi-0x2C], ebx
        mov dword ptr ds : [edi-0x28], ebx
        mov dword ptr ds : [edi-0x24], ebx
        call public_6d15650
        mov ecx, eax
        call public_6d14230
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebp
        call public_6d43650
        add esp, 8
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d177a1
        mov eax, dword ptr ds : [public_6d90260]
        lea ecx, ds:[esi+eax-0x418]
        call public_6d4f560
        mov ecx, dword ptr ds : [public_6d90260]
        lea ecx, ds:[esi+ecx-0x418]
        call public_6d4fc30
        public_6d177a1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6d17630)
    }
}

#undef public_6d17746
#undef public_6d177a1
