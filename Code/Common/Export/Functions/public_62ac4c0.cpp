#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_6285740);
CLANG_FORWARD_PROC_SYMBOL(public_6285770);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62ac557 _public_62ac557
#define public_62ac562 _public_62ac562
#define public_62ac5ec _public_62ac5ec
#define public_62ac633 _public_62ac633

PROC_DECLARE(0x62ac4c0, internal_62ac4c0, public_62ac4c0);
extern "C" NAKED register_t __cdecl internal_62ac4c0()
{
    __asm
    {
        sub esp, 0x70
        mov eax, dword ptr ds : [public_63eb360]
        mov edx, dword ptr ds : [public_63fc0ec]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_63fc0e8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ds : [esi+0x88]
        push edi
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], ebx
        mov edi, 2
        mov dword ptr ss : [esp+0x60], edi
        mov byte ptr ss : [esp+0x65], 1
        mov byte ptr ss : [esp+0x6E], bl
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ebx
        mov byte ptr ss : [esp+0x66], bl
        mov byte ptr ss : [esp+0x64], bl
        mov edx, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [esi+0xE4]
        cmp eax, ebx
        push 0x18
        je public_62ac557
        lea ecx, ss:[esp+0x6A]
        push ecx
        jmp public_62ac562
        public_62ac557 : nop
        mov eax, dword ptr ds : [esi+0xB0]
        lea edx, ss:[esp+0x6A]
        push edx
        public_62ac562 : nop
        push eax
        call dword ptr ds : [public_639927c]
        add esp, 0xC
        lea ecx, ss:[esp+0x48]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x68], edi
        call public_6288970
        mov eax, dword ptr ds : [esi+0x54]
        add esp, 8
        cmp eax, ebx
        je public_62ac633
        mov edx, dword ptr ss : [esp+0x80]
        push edx
        push esi
        call public_6285740
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_63fc2f4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x14]
        add esp, 8
        cmp eax, ebx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x44]
        jne public_62ac5ec
        call public_6391cf0
        mov dword ptr ds : [public_63fc2f4], eax
        public_62ac5ec : nop
        mov edx, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        call public_6285770
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 0x70
        ret 8
        public_62ac633 : nop
        mov ecx, dword ptr ds : [esi+0xEC]
        add ecx, 8
        mov edi, 0x100001
        call public_6333e60
        push eax
        mov ecx, esi
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x53
/*FIXUP push offset public_639e424 @0x62ac661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e424
/*FIXUP push offset public_639e3b0 @0x62ac666*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e3b0
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x62ac4c0)
    }
}

#undef public_62ac557
#undef public_62ac562
#undef public_62ac5ec
#undef public_62ac633
