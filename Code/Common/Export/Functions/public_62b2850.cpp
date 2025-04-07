#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285740);
CLANG_FORWARD_PROC_SYMBOL(public_6285770);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62b2923 _public_62b2923
#define public_62b299c _public_62b299c
#define public_62b29e2 _public_62b29e2

PROC_DECLARE(0x62b2850, internal_62b2850, public_62b2850);
extern "C" NAKED register_t __cdecl internal_62b2850()
{
    __asm
    {
        sub esp, 0x70
        mov edx, dword ptr ds : [public_63fc0ec]
        mov eax, dword ptr ds : [public_63eb360]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_63fc0e8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x4C], ecx
        push 0x18
        lea ecx, ss:[esp+0x66]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [esi+0xB0]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], 2
        mov byte ptr ss : [esp+0x6C], bl
        mov byte ptr ss : [esp+0x6D], 1
        mov byte ptr ss : [esp+0x76], bl
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        mov byte ptr ss : [esp+0x6E], bl
        call dword ptr ds : [public_639927c]
        mov eax, dword ptr ds : [esi+0x88]
        mov byte ptr ss : [esp+0x6C], bl
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0x68], 2
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [esi+0x88]
        mov byte ptr ss : [esp+0x61], bl
        cmp byte ptr ds : [eax+0x38], bl
        je public_62b2923
        add eax, 0x2C
        mov byte ptr ss : [esp+0x6A], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x6C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x70], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x74], eax
        public_62b2923 : nop
        lea ecx, ss:[esp+0x44]
        push ecx
        push esi
        call public_6288970
        mov eax, dword ptr ds : [esi+0x54]
        add esp, 8
        cmp eax, ebx
        je public_62b29e2
        mov edx, dword ptr ss : [esp+0x7C]
        push edx
        push esi
        call public_6285740
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_63fc460]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x14]
        add esp, 8
        cmp eax, ebx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x40]
        jne public_62b299c
        call public_6391cf0
        mov dword ptr ds : [public_63fc460], eax
        public_62b299c : nop
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        call public_6285770
        add esp, 8
        pop esi
        pop ebx
        add esp, 0x70
        ret 8
        public_62b29e2 : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx+0xC]
        push edx
        push 0x5C7
/*FIXUP push offset public_639e5d0 @0x62b29f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e5d0
        mov eax, 0x100001
/*FIXUP push offset public_639e618 @0x62b29fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e618
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop esi
        pop ebx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x62b2850)
    }
}

#undef public_62b2923
#undef public_62b299c
#undef public_62b29e2
