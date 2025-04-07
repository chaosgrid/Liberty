#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611290);
CLANG_FORWARD_PROC_SYMBOL(public_6611350);
CLANG_FORWARD_PROC_SYMBOL(public_6611440);
CLANG_FORWARD_PROC_SYMBOL(public_6612e20);
CLANG_FORWARD_PROC_SYMBOL(public_6612e50);
CLANG_FORWARD_PROC_SYMBOL(public_6612ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6613290);

#define public_6611496 _public_6611496
#define public_66114b0 _public_66114b0
#define public_66114d0 _public_66114d0
#define public_66114d4 _public_66114d4
#define public_66114d9 _public_66114d9
#define public_6611570 _public_6611570
#define public_661163a _public_661163a
#define public_6611650 _public_6611650
#define public_661165e _public_661165e
#define public_6611674 _public_6611674
#define public_6611696 _public_6611696
#define public_66116b4 _public_66116b4
#define public_66116c6 _public_66116c6
#define public_66116d8 _public_66116d8
#define public_6611743 _public_6611743
#define public_661177e _public_661177e
#define public_661179f _public_661179f
#define public_66117a4 _public_66117a4
#define public_66117ab _public_66117ab
#define public_66117d9 _public_66117d9
#define public_66117e7 _public_66117e7
#define public_66117ef _public_66117ef
#define public_66117fd _public_66117fd
#define public_6611801 _public_6611801
#define public_6611829 _public_6611829

PROC_DECLARE(0x6611440, internal_6611440, public_6611440);
extern "C" NAKED register_t __cdecl internal_6611440()
{
    __asm
    {
        sub esp, 0x1D4
        mov eax, dword ptr ss : [esp+0x1D8]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_662906c]
        mov ebp, dword ptr ss : [esp+0x1EC]
        add esp, 4
        lea edx, ss:[esp+0xA0]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ss : [ebp]
        push edx
/*FIXUP push offset public_662a054 @0x6611475*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a054
        push ebp
        call dword ptr ds : [ecx+0x48]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], ebx
        je public_6611829
        mov dword ptr ss : [esp+0x18], 0xBF800000
        push edi
        public_6611496 : nop
        test byte ptr ss : [esp+0xA4], 0x10
        jne public_6611570
        mov esi, offset public_66290e4
        lea eax, ss:[esp+0xD0]
        public_66114b0 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_66114d4
        test cl, cl
        je public_66114d0
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_66114d4
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66114b0
        public_66114d0 : nop
        xor eax, eax
        jmp public_66114d9
        public_66114d4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66114d9 : nop
        test eax, eax
        jne public_6611801
        mov ecx, 0xB
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x40], offset public_662a030
        lea edx, ss:[esp+0x3C]
        rep stosd
        mov ecx, dword ptr ss : [ebp]
        mov edi, 1
        lea eax, ss:[esp+0xD0]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x54], 0x80000000
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x60], 3
        mov dword ptr ss : [esp+0x64], 0x8000080
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x44], 0x34
        mov dword ptr ss : [esp+0x74], ebx
        call dword ptr ds : [ecx+0x7C]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6611801
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x38]
        push 0
        push ecx
        add edx, 8
        push 4
        push edx
        push esi
        push ebp
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp]
        push esi
        push ebp
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edi
        jmp public_6611801
        public_6611570 : nop
        cmp byte ptr ss : [esp+0xD0], 0x2E
        je public_6611801
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x74], offset public_662a030
        rep stosd
        mov eax, dword ptr ss : [ebp]
        lea edx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x7C], edx
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0xA0], ebx
        push ecx
        xor ebx, ebx
        push edx
        push ebp
        mov dword ptr ss : [esp+0x8C], 0x80000000
        mov dword ptr ss : [esp+0x90], 1
        mov dword ptr ss : [esp+0x98], 3
        mov dword ptr ss : [esp+0x9C], 0x8000080
        mov dword ptr ss : [esp+0x7C], 0x34
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_662acc0]
        lea ecx, ss:[esp+0xD0]
        push eax
/*FIXUP push offset public_66290b8 @0x66115fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290b8
        push ecx
        call dword ptr ds : [public_6629040]
        add esp, 0xC
        test eax, eax
        je public_66117ef
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov eax, dword ptr ds : [edx+0x14]
        lea esi, ds:[edx+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        jne public_661163a
        xor edx, edx
        jmp public_6611650
        public_661163a : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6611650 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[edx+1]
        cmp eax, ebx
        jne public_661165e
        xor edx, edx
        jmp public_6611674
        public_661165e : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6611674 : nop
        cmp edx, edi
        mov ecx, esi
        jae public_6611696
        mov ebx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x24]
        push edx
        call public_6612e20
        sub edi, eax
        mov ecx, esi
        push edi
        push ebx
        call public_6612ee0
        xor ebx, ebx
        jmp public_66116b4
        public_6611696 : nop
        call public_6612e20
        cmp edi, eax
        jae public_66116b4
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[edi+edi*4]
        push eax
        lea eax, ds:[edx+ecx*4]
        mov ecx, esi
        push eax
        call public_6613290
        public_66116b4 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_66116c6
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_66116c6 : nop
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebx
        je public_66116d8
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_66116d8 : nop
        lea ecx, ss:[esp+0x24]
        call public_6612e50
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_662acd8]
        push ecx
        lea edx, ss:[esp+0xD4]
        mov esi, dword ptr ds : [edi+0x18]
/*FIXUP push offset public_66290a0 @0x66116f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290a0
        push edx
        sub esi, 0x14
        call dword ptr ds : [public_6629040]
        add esp, 0xC
        test eax, eax
        jne public_6611743
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xC]
        push eax
/*FIXUP push offset public_66290c4 @0x6611714*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290c4
        push ecx
        mov ecx, esi
        call public_6611290
        lea edx, ds:[esi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
/*FIXUP push offset public_66290d0 @0x661172c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290d0
        push eax
        mov ecx, esi
        call public_6611290
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        jmp public_66117a4
        public_6611743 : nop
        mov edx, dword ptr ds : [public_662acdc]
        lea eax, ss:[esp+0xD0]
        push edx
/*FIXUP push offset public_66290ac @0x6611751*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290ac
        push eax
        call dword ptr ds : [public_6629040]
        add esp, 0xC
        test eax, eax
        jne public_661177e
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0xC]
        push ecx
/*FIXUP push offset public_66290c4 @0x661176c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290c4
        push edx
        mov ecx, esi
        call public_6611290
        mov dword ptr ds : [esi+4], eax
        jmp public_661179f
        public_661177e : nop
        mov ecx, dword ptr ds : [public_662acc0]
        lea edx, ss:[esp+0xD0]
        push ecx
/*FIXUP push offset public_66290b8 @0x661178c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290b8
        push edx
        call dword ptr ds : [public_6629040]
        add esp, 0xC
        test eax, eax
        jne public_66117ab
        public_661179f : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        public_66117a4 : nop
        mov ecx, esi
        call public_6611350
        public_66117ab : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_66117ef
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_66117ef
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_66117d9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], ebx
        public_66117d9 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov dword ptr ds : [edi], esi
        je public_66117e7
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_66117e7 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        public_66117ef : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_66117fd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66117fd : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_6611801 : nop
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0xA4]
        push eax
        push ebx
        push ebp
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6611496
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0x78]
        mov edx, dword ptr ss : [ebp]
        push ebx
        push ebp
        call dword ptr ds : [edx+0x50]
        pop edi
        public_6611829 : nop
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x1D4
        ret 8
        UNREACHABLE_TRAP(0x6611440)
    }
}

#undef public_6611496
#undef public_66114b0
#undef public_66114d0
#undef public_66114d4
#undef public_66114d9
#undef public_6611570
#undef public_661163a
#undef public_6611650
#undef public_661165e
#undef public_6611674
#undef public_6611696
#undef public_66116b4
#undef public_66116c6
#undef public_66116d8
#undef public_6611743
#undef public_661177e
#undef public_661179f
#undef public_66117a4
#undef public_66117ab
#undef public_66117d9
#undef public_66117e7
#undef public_66117ef
#undef public_66117fd
#undef public_6611801
#undef public_6611829
