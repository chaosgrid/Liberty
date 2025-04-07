#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd030);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63213b0);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);
CLANG_FORWARD_PROC_SYMBOL(public_63227c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_63213e0 _public_63213e0
#define public_63213fc _public_63213fc
#define public_632140b _public_632140b
#define public_6321422 _public_6321422
#define public_6321458 _public_6321458
#define public_6321460 _public_6321460
#define public_6321490 _public_6321490
#define public_63214a8 _public_63214a8
#define public_63214d9 _public_63214d9

PROC_DECLARE(0x63213b0, internal_63213b0, public_63213b0);
extern "C" NAKED register_t __cdecl internal_63213b0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, offset public_64018c4
        mov edi, 0xFFFFFFFE
        call public_63227c0
        test al, al
        je public_63213e0
        mov esi, dword ptr ds : [public_64018d8]
        jmp public_63213fc
        public_63213e0 : nop
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], esi
        public_63213fc : nop
        cmp esi, dword ptr ds : [public_64018c8]
        je public_632140b
        add esi, 0x10
        test esi, esi
        jne public_6321422
        public_632140b : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6320290
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_63214d9
        public_6321422 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_64018ec
        mov edi, 0xFFFFFFFD
        call public_62fd030
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [public_64018f0]
        cmp eax, edx
        mov ecx, dword ptr ss : [esp+0x28]
        je public_6321458
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6321458
        lea eax, ss:[esp+0xC]
        jmp public_6321460
        public_6321458 : nop
        mov dword ptr ss : [esp+0x14], edx
        lea eax, ss:[esp+0x14]
        public_6321460 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        je public_63214d9
        mov ebp, dword ptr ds : [esi]
        add eax, 0x10
        xor edi, edi
        cmp ebp, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_63214d9
        mov dword ptr ds : [esi], ecx
        call public_6303220
        test al, al
        je public_6321490
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        pop esi
        pop ebp
        add esp, 0x14
        ret 
        public_6321490 : nop
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        jne public_63214a8
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 
        public_63214a8 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, offset public_6401900
        mov dword ptr ss : [esp+0x20], 0
        call public_63222f0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x10], ebp
        mov dword ptr ds : [esi+0xC], 0
        public_63214d9 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x63213b0)
    }
}

#undef public_63213e0
#undef public_63213fc
#undef public_632140b
#undef public_6321422
#undef public_6321458
#undef public_6321460
#undef public_6321490
#undef public_63214a8
#undef public_63214d9
