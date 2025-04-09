#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406cd0);
CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4468f0);
CLANG_FORWARD_PROC_SYMBOL(public_558310);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);

#define public_446951 _public_446951
#define public_446a4a _public_446a4a

PROC_DECLARE(0x4468f0, internal_4468f0, public_4468f0);
extern "C" NAKED register_t __cdecl internal_4468f0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c603c]
        mov ebx, eax
        mov eax, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [ebx+4]
        add esp, 4
        mov ecx, ebx
        call dword ptr ds : [eax+0x10]
        cmp eax, 0x15
        jne public_446951
        mov al, byte ptr ds : [ebx+0x70]
        test al, al
        je public_446a4a
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edi
        call dword ptr ds : [public_5c61c4]
        cmp eax, 0xFFFFFFFF
        je public_446a4a
        push eax
        push ebp
        lea ecx, ds:[esi+0x74]
        call public_558310
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_446951 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        test al, al
        je public_446a4a
        mov eax, dword ptr ds : [ebx+0xC]
        push 0
        lea ecx, ds:[esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [public_5c6dd8]
        lea edx, ss:[ebp+0x20]
        push edx
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push edx
        push eax
        call public_41c540
        mov edi, dword ptr ds : [esi+0x6C]
        add esi, 0x68
        add esp, 0x1C
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        push 0
        mov esi, eax
        push 0
        push esi
        mov ecx, ebp
        call public_406cd0
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [edx+8]
        test esi, esi
        mov ebx, dword ptr ds : [ebx+0x80]
        je public_446a4a
        test ebx, ebx
        je public_446a4a
        mov ecx, dword ptr ss : [esp+0x2C]
        push esi
        call dword ptr ds : [public_5c6204]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_446a4a
        mov edi, dword ptr ds : [public_5c6d14]
        push ebx
        mov dword ptr ss : [esp+0x18], ebx
        call edi
        push esi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], esi
        call edi
        add esp, 8
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_5c6d5c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x18]
        public_446a4a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x4468f0)
    }
}

#undef public_446951
#undef public_446a4a
