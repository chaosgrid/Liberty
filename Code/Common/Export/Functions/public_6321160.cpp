#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6321160);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6321184 _public_6321184
#define public_63211a5 _public_63211a5
#define public_63211b4 _public_63211b4
#define public_63211c3 _public_63211c3
#define public_63211e8 _public_63211e8

PROC_DECLARE(0x6321160, internal_6321160, public_6321160);
extern "C" NAKED register_t __cdecl internal_6321160()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        push esi
        push edi
        mov edi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x10], ecx
        je public_6321184
        cmp dword ptr ds : [eax+0xC], ecx
        je public_63211a5
        public_6321184 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_64018d8], eax
        public_63211a5 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_63211b4
        lea esi, ds:[eax+0x10]
        test esi, esi
        jne public_63211c3
        public_63211b4 : nop
        push ecx
        call public_6320290
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_63211e8
        public_63211c3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+0x10]
        push eax
        xor edi, edi
        call public_630dda0
        lea ecx, ds:[esi+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_630dda0
        mov edx, dword ptr ss : [esp+0x1C]
        add esi, 0x44
        mov dword ptr ds : [edx], esi
        public_63211e8 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6321160)
    }
}

#undef public_6321184
#undef public_63211a5
#undef public_63211b4
#undef public_63211c3
#undef public_63211e8
