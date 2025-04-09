#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_443920);
CLANG_FORWARD_PROC_SYMBOL(public_448c40);
CLANG_FORWARD_PROC_SYMBOL(public_457f10);
CLANG_FORWARD_PROC_SYMBOL(public_4581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5595a0);

#define public_4439e7 _public_4439e7

PROC_DECLARE(0x443920, internal_443920, public_443920);
extern "C" NAKED register_t __cdecl internal_443920()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        mov al, byte ptr ds : [ebx+0x34]
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp]
        mov byte ptr ss : [ebp+0x34], al
        fld dword ptr ds : [ebx+0x38]
        fsub dword ptr ds : [public_5cb908]
        push esi
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[ebp+0x20]
        push edx
        mov edx, dword ptr ds : [public_5c6dd8]
        lea ecx, ds:[esi+0x20]
        push ecx
        push 0
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov ecx, dword ptr ds : [edx]
        push 0
        push ecx
        push eax
        mov dword ptr ss : [esp+0x60], esi
        call public_41c540
        add esp, 0x1C
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x30], eax
        je public_4439e7
        lea edx, ds:[ebx+4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        lea esi, ds:[ebx+0x10]
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call public_448c40
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [edx+0x10]
        mov cl, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x30]
        add esp, 8
        test cl, cl
        setne cl
        mov byte ptr ss : [ebp+0x13], cl
        lea esi, ss:[ebp+0x38]
        push edx
        mov ecx, esi
        call public_457f10
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        mov ecx, esi
        call public_4581b0
        mov esi, dword ptr ss : [esp+0x48]
        pop edi
        public_4439e7 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        push esi
        mov byte ptr ss : [ebp+0x15], 3
        mov byte ptr ss : [ebp+0x16], 0
        mov dword ptr ss : [ebp+0x18], 0
        call public_5595a0
        add esp, 8
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x443920)
    }
}

#undef public_4439e7
