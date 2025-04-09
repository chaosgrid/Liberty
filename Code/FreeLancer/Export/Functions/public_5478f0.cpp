#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e250);
CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_502ba0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_502e40);
CLANG_FORWARD_PROC_SYMBOL(public_503380);
CLANG_FORWARD_PROC_SYMBOL(public_5154a0);
CLANG_FORWARD_PROC_SYMBOL(public_516910);
CLANG_FORWARD_PROC_SYMBOL(public_534730);
CLANG_FORWARD_PROC_SYMBOL(public_544230);
CLANG_FORWARD_PROC_SYMBOL(public_5480c0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0fdd);

#define public_547960 _public_547960
#define public_547962 _public_547962
#define public_54798c _public_54798c
#define public_5479ce _public_5479ce
#define public_5479e8 _public_5479e8
#define public_5479f7 _public_5479f7
#define public_547a38 _public_547a38
#define public_547a3a _public_547a3a
#define public_547b21 _public_547b21
#define public_547b3d _public_547b3d
#define public_547b63 _public_547b63
#define public_547b9f _public_547b9f
#define public_547baf _public_547baf
#define public_547bcc _public_547bcc
#define public_547bdf _public_547bdf
#define public_547beb _public_547beb
#define public_547c2c _public_547c2c
#define public_547c2e _public_547c2e
#define public_547d38 _public_547d38
#define public_547d55 _public_547d55
#define public_547d7a _public_547d7a
#define public_547db9 _public_547db9
#define public_547dc9 _public_547dc9
#define public_547dea _public_547dea
#define public_547e2f _public_547e2f
#define public_547e3c _public_547e3c
#define public_547e65 _public_547e65
#define public_547e67 _public_547e67
#define public_547eba _public_547eba
#define public_547ebc _public_547ebc
#define public_547eca _public_547eca
#define public_547eed _public_547eed
#define public_547eef _public_547eef
#define public_547efb _public_547efb
#define public_547fd6 _public_547fd6
#define public_547ff2 _public_547ff2
#define public_548018 _public_548018
#define public_548054 _public_548054
#define public_548065 _public_548065
#define public_54806c _public_54806c
#define public_548080 _public_548080

PROC_DECLARE(0x5478f0, internal_5478f0, public_5478f0);
extern "C" NAKED register_t __cdecl internal_5478f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0fdd @0x5478f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0fdd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x158
        mov eax, dword ptr ss : [esp+0x168]
        sub eax, 0
        push ebx
        mov ebx, dword ptr ss : [esp+0x170]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        je public_547e3c
        dec eax
        je public_54798c
        sub eax, 0x10
        jne public_548080
        lea ecx, ds:[edi-0xAC]
        test ecx, ecx
        je public_547960
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_547960
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547960
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_547962
        public_547960 : nop
        xor eax, eax
        public_547962 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        shr eax, 7
        test al, 1
        je public_548080
        xor edx, edx
        mov dl, byte ptr ds : [ebx]
        push edx
        push ecx
        call public_516910
        add esp, 8
        mov byte ptr ds : [edi+0x144], al
        jmp public_548080
        public_54798c : nop
        mov eax, dword ptr ds : [ebx]
        sub eax, 0
        je public_547beb
        sub eax, 2
        je public_5479f7
        dec eax
        jne public_548080
        mov eax, dword ptr ds : [edi-0xAC]
        lea esi, ds:[edi-0xAC]
        mov ecx, esi
        call dword ptr ds : [eax+0x1BC]
        test al, 0x40
        jne public_5479ce
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1BC]
        test ah, 8
        je public_548080
        public_5479ce : nop
        mov esi, dword ptr ds : [edi+0x158]
        test esi, esi
        je public_5479e8
        mov ecx, esi
        call public_502e40
        push esi
        call public_5b7e1d
        add esp, 4
        public_5479e8 : nop
        mov dword ptr ds : [edi+0x158], 0
        jmp public_548080
        public_5479f7 : nop
        lea ecx, ss:[esp+0x10C]
        call public_40e250
        lea esi, ds:[edi-0xAC]
        test esi, esi
        mov ebx, 5
        mov dword ptr ss : [esp+0x16C], ebx
        je public_547a38
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_547a38
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547a38
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_547a3a
        public_547a38 : nop
        xor eax, eax
        public_547a3a : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x58
        push eax
        call public_42ae40
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [esp+0x124], eax
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        call dword ptr ds : [edx+0x1C]
        push 0x25
        mov edi, eax
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_547baf
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x118]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_5154a0
        push 0x26
        mov byte ptr ss : [esp+0x170], 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_547b21
        mov eax, dword ptr ss : [esp+0x114]
        test eax, eax
        je public_547b21
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx], 0
        je public_547b21
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        public_547b21 : nop
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        je public_547b3d
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], eax
        public_547b3d : nop
        fld dword ptr ss : [esp+0x154]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_547b63
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        public_547b63 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x18]
        call public_5480c0
        lea ecx, ss:[esp+0x10C]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_674c60
        call public_544230
        test al, al
        je public_547b9f
        test esi, esi
        je public_547b9f
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0x28]
        call public_4fcea0
        public_547b9f : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x16C], bl
        call public_502d90
        public_547baf : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1BC]
        test al, 0x40
        jne public_547bcc
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1BC]
        test ah, 8
        je public_547bdf
        public_547bcc : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x158]
        test ecx, ecx
        je public_547bdf
        call public_503380
        public_547bdf : nop
        lea ecx, ss:[esp+0x10C]
        jmp public_54806c
        public_547beb : nop
        lea ecx, ss:[esp+0xB4]
        call public_40e250
        lea esi, ds:[edi-0xAC]
        test esi, esi
        mov ebx, 2
        mov dword ptr ss : [esp+0x16C], ebx
        je public_547c2c
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_547c2c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547c2c
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_547c2e
        public_547c2c : nop
        xor eax, eax
        public_547c2e : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x54
        push eax
        call public_42ae40
        mov dword ptr ss : [esp+0xD0], eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [esp+0xA0], 0x3F800000
        mov dword ptr ss : [esp+0x90], 0x3F800000
        mov dword ptr ss : [esp+0x80], 0x3F800000
        mov dword ptr ss : [esp+0x9C], 0
        mov dword ptr ss : [esp+0x98], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0xAC], 0
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xA4], 0
        call dword ptr ds : [eax+0x1C]
        push 0x25
        mov edi, eax
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_547dc9
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_5154a0
        push 0x26
        mov byte ptr ss : [esp+0x170], 3
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_547d38
        mov eax, dword ptr ss : [esp+0xBC]
        test eax, eax
        je public_547d38
        mov edx, dword ptr ds : [eax]
        cmp byte ptr ds : [edx], 0
        je public_547d38
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        public_547d38 : nop
        mov eax, dword ptr ss : [esp+0xCC]
        test eax, eax
        je public_547d55
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], eax
        public_547d55 : nop
        fld dword ptr ss : [esp+0xFC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_547d7a
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        public_547d7a : nop
        lea ecx, ss:[esp+0x80]
        push ecx
        push edi
        push esi
        lea ecx, ss:[esp+0x18]
        call public_5480c0
        lea edx, ss:[esp+0xB4]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_674c60
        call public_544230
        test al, al
        je public_547db9
        test esi, esi
        je public_547db9
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[esi+0x28]
        call public_4fcea0
        public_547db9 : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x16C], bl
        call public_502d90
        public_547dc9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1BC]
        test al, 0x40
        jne public_547dea
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1BC]
        test ah, 8
        je public_548065
        public_547dea : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x158]
        test eax, eax
        jne public_548065
        push 0xE0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xB0], eax
        test eax, eax
        mov byte ptr ss : [esp+0x16C], 4
        je public_547e2f
        push esi
        mov ecx, eax
        call public_502ba0
        mov dword ptr ds : [edi+0x158], eax
        jmp public_548065
        public_547e2f : nop
        xor eax, eax
        mov dword ptr ds : [edi+0x158], eax
        jmp public_548065
        public_547e3c : nop
        lea esi, ds:[edi-0xAC]
        test esi, esi
        je public_547e65
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_547e65
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547e65
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_547e67
        public_547e65 : nop
        xor eax, eax
        public_547e67 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov cl, byte ptr ds : [eax+0x81]
        test cl, cl
        je public_548080
        lea ecx, ss:[esp+0xB4]
        call public_40e250
        cmp byte ptr ds : [ebx], 0
        mov dword ptr ss : [esp+0x16C], 0
        je public_547eca
        test esi, esi
        je public_547eba
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_547eba
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547eba
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_547ebc
        public_547eba : nop
        xor eax, eax
        public_547ebc : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x54
        jmp public_547efb
        public_547eca : nop
        test esi, esi
        je public_547eed
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_547eed
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547eed
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_547eef
        public_547eed : nop
        xor eax, eax
        public_547eef : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x58
        public_547efb : nop
        push eax
        call public_42ae40
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [esp+0xCC], eax
        mov dword ptr ss : [esp+0x70], 0x3F800000
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x74], 0
        call dword ptr ds : [edx+0x1C]
        push 0x25
        mov edi, eax
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_548065
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0xC0]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_5154a0
        push 0x26
        mov byte ptr ss : [esp+0x170], 1
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_547fd6
        mov eax, dword ptr ss : [esp+0xBC]
        test eax, eax
        je public_547fd6
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx], 0
        je public_547fd6
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        public_547fd6 : nop
        mov eax, dword ptr ss : [esp+0xCC]
        test eax, eax
        je public_547ff2
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], eax
        public_547ff2 : nop
        fld dword ptr ss : [esp+0xFC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_548018
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        public_548018 : nop
        lea eax, ss:[esp+0x50]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x18]
        call public_5480c0
        lea ecx, ss:[esp+0xB4]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_674c60
        call public_544230
        test al, al
        je public_548054
        test esi, esi
        je public_548054
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0x28]
        call public_4fcea0
        public_548054 : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x16C], 0
        call public_502d90
        public_548065 : nop
        lea ecx, ss:[esp+0xB4]
        public_54806c : nop
        mov dword ptr ss : [esp+0x16C], 0xFFFFFFFF
        call public_40e2a0
        mov edi, dword ptr ss : [esp+0x1C]
        public_548080 : nop
        mov ecx, dword ptr ss : [esp+0x178]
        mov edx, dword ptr ss : [esp+0x174]
        push ecx
        push edx
        mov ecx, edi
        call public_534730
        mov ecx, dword ptr ss : [esp+0x164]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x164
        ret 8
        UNREACHABLE_TRAP(0x5478f0)
    }
}

#undef public_547960
#undef public_547962
#undef public_54798c
#undef public_5479ce
#undef public_5479e8
#undef public_5479f7
#undef public_547a38
#undef public_547a3a
#undef public_547b21
#undef public_547b3d
#undef public_547b63
#undef public_547b9f
#undef public_547baf
#undef public_547bcc
#undef public_547bdf
#undef public_547beb
#undef public_547c2c
#undef public_547c2e
#undef public_547d38
#undef public_547d55
#undef public_547d7a
#undef public_547db9
#undef public_547dc9
#undef public_547dea
#undef public_547e2f
#undef public_547e3c
#undef public_547e65
#undef public_547e67
#undef public_547eba
#undef public_547ebc
#undef public_547eca
#undef public_547eed
#undef public_547eef
#undef public_547efb
#undef public_547fd6
#undef public_547ff2
#undef public_548018
#undef public_548054
#undef public_548065
#undef public_54806c
#undef public_548080
