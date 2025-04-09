#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4045d0);

#define public_404603 _public_404603
#define public_404610 _public_404610
#define public_404621 _public_404621
#define public_40463f _public_40463f
#define public_404641 _public_404641
#define public_40465e _public_40465e

PROC_DECLARE(0x4045d0, internal_4045d0, public_4045d0);
extern "C" NAKED register_t __cdecl internal_4045d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea ebx, ss:[ebp+0x1C]
        mov ecx, 5
        mov edi, ebx
        rep movsd
        xor esi, esi
        cmp eax, esi
        je public_404621
        mov ecx, dword ptr ds : [ebx]
        cmp dword ptr ds : [eax+0x20], ecx
        je public_404621
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        jne public_404603
        mov dword ptr ss : [ebp+0x18], esi
        jmp public_404621
        public_404603 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, esi
        mov dword ptr ss : [ebp+0x18], eax
        je public_404621
        lea ecx, ds:[ecx]
        public_404610 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        cmp dword ptr ds : [eax+0x20], ecx
        je public_404621
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ss : [ebp+0x18], eax
        jne public_404610
        public_404621 : nop
        cmp dword ptr ss : [ebp+0x18], esi
        jne public_40465e
        mov ecx, ebp
        call public_402ed0
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, esi
        mov dword ptr ss : [ebp+0x10], eax
        jne public_40463f
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_404641
        public_40463f : nop
        mov dword ptr ds : [ecx], eax
        public_404641 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], ecx
        inc dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x18], esi
        public_40465e : nop
        mov eax, dword ptr ss : [ebp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4045d0)
    }
}

#undef public_404603
#undef public_404610
#undef public_404621
#undef public_40463f
#undef public_404641
#undef public_40465e
