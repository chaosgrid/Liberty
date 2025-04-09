#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_4148d0 _public_4148d0
#define public_4148d5 _public_4148d5
#define public_41490b _public_41490b
#define public_414917 _public_414917

PROC_DECLARE(0x4148b0, internal_4148b0, public_4148b0);
extern "C" NAKED register_t __cdecl internal_4148b0()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ss : [esp+0xC]
        je public_414917
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        push edi
        xor edi, edi
        cmp ebx, edi
        je public_41490b
        push esi
        lea esp, ss:[esp]
        public_4148d0 : nop
        mov esi, ebx
        mov ebx, dword ptr ds : [ebx+0x24]
        public_4148d5 : nop
        mov eax, esi
        mov dword ptr ss : [esp+0x10], eax
        mov esi, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x24], edi
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ds : [ecx+0x20], edi
        mov eax, dword ptr ds : [public_616648]
        push 1
        push eax
        mov ecx, offset public_616640
        call public_537260
        cmp esi, edi
        jne public_4148d5
        cmp ebx, edi
        jne public_4148d0
        pop esi
        mov dword ptr ss : [ebp+0x14], edi
        public_41490b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0x20], edi
        pop edi
        mov dword ptr ss : [ebp+0xC], ecx
        pop ebx
        public_414917 : nop
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4148b0)
    }
}

#undef public_4148d0
#undef public_4148d5
#undef public_41490b
#undef public_414917
