#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6615ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6617c90);
CLANG_FORWARD_PROC_SYMBOL(public_6619790);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6615e5d _public_6615e5d
#define public_6615e65 _public_6615e65
#define public_6615e93 _public_6615e93
#define public_6615e9c _public_6615e9c
#define public_6615ea9 _public_6615ea9

PROC_DECLARE(0x6615e10, internal_6615e10, public_6615e10);
extern "C" NAKED register_t __cdecl internal_6615e10()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        or ebp, 0xFFFFFFFF
        push esi
        cmp eax, 0xFFFFFFFF
        push edi
        je public_6615ea9
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x18]
        lea ebx, ds:[esi+0x20]
        push eax
        push ecx
        mov ecx, ebx
        call public_6619790
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6615e5d
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [ecx+0xC]
        cmp edx, edi
        jb public_6615e5d
        lea eax, ss:[esp+0x18]
        jmp public_6615e65
        public_6615e5d : nop
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        public_6615e65 : nop
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x24]
        cmp edi, eax
        je public_6615ea9
        mov eax, dword ptr ds : [edi+0xC]
        lea ecx, ds:[esi-8]
        push eax
        call public_6615ec0
        mov esi, dword ptr ds : [edi+0xC]
        xor ebp, ebp
        test esi, esi
        je public_6615e9c
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6615e93
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebp
        public_6615e93 : nop
        push esi
        call public_66281d0
        add esp, 4
        public_6615e9c : nop
        lea edx, ss:[esp+0x1C]
        push edi
        push edx
        mov ecx, ebx
        call public_6617c90
        public_6615ea9 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6615e10)
    }
}

#undef public_6615e5d
#undef public_6615e65
#undef public_6615e93
#undef public_6615e9c
#undef public_6615ea9
