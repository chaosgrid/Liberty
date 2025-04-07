#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619790);

#define public_6615064 _public_6615064
#define public_661506c _public_661506c
#define public_661508b _public_661508b
#define public_6615090 _public_6615090

PROC_DECLARE(0x6615010, internal_6615010, public_6615010);
extern "C" NAKED register_t __cdecl internal_6615010()
{
    __asm
    {
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor eax, eax
        cmp edi, 0xFFFFFFFF
        je public_661508b
        test edi, edi
        je public_661508b
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push eax
        call dword ptr ds : [public_662900c]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6619790
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        je public_6615064
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6615064
        lea eax, ss:[esp+0x18]
        jmp public_661506c
        public_6615064 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_661506c : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        pop esi
        je public_6615090
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6615090
        fld dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, 1
        fstp dword ptr ds : [edx]
        public_661508b : nop
        pop edi
        pop ecx
        ret 0x10
        public_6615090 : nop
        xor eax, eax
        pop edi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6615010)
    }
}

#undef public_6615064
#undef public_661506c
#undef public_661508b
#undef public_6615090
