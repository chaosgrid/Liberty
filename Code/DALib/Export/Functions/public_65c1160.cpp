#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c15d0);

#define public_65c1194 _public_65c1194
#define public_65c11b0 _public_65c11b0
#define public_65c120d _public_65c120d
#define public_65c1218 _public_65c1218
#define public_65c12b1 _public_65c12b1
#define public_65c1330 _public_65c1330
#define public_65c13fa _public_65c13fa
#define public_65c1424 _public_65c1424
#define public_65c1476 _public_65c1476
#define public_65c1489 _public_65c1489
#define public_65c148b _public_65c148b
#define public_65c14a4 _public_65c14a4
#define public_65c1555 _public_65c1555
#define public_65c1593 _public_65c1593
#define public_65c159d _public_65c159d
#define public_65c15aa _public_65c15aa

PROC_DECLARE(0x65c1160, internal_65c1160, public_65c1160);
extern "C" NAKED register_t __cdecl internal_65c1160()
{
    __asm
    {
        sub esp, 0x350
        push edi
        call dword ptr ds : [public_65c7000]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ds : [public_65ca0f4], eax
        je public_65c15aa
        mov ecx, dword ptr ss : [esp+0x35C]
        cmp ecx, edi
        je public_65c1194
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        jmp public_65c1218
        public_65c1194 : nop
        push 4
/*FIXUP push offset public_65c714c @0x65c1196*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c714c
        call dword ptr ds : [public_65c70a0]
        add esp, 8
        test eax, eax
        jne public_65c11b0
        push edi
/*FIXUP push offset public_65c714c @0x65c11a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c714c
        jmp public_65c120d
        public_65c11b0 : nop
        mov eax, dword ptr ds : [public_65ca2ac]
        push 0x104
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [public_65c700c]
        push edi
        push edi
        lea ecx, ss:[esp+0x158]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        call dword ptr ds : [public_65c709c]
        push edi
/*FIXUP push offset public_65c714c @0x65c11e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c714c
        lea ecx, ss:[esp+0x16C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x274]
        push eax
        call dword ptr ds : [public_65c7098]
        add esp, 0x28
        push edi
        lea edx, ss:[esp+0x254]
        push edx
        public_65c120d : nop
        mov eax, dword ptr ds : [public_65ca0f4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        public_65c1218 : nop
        cmp eax, edi
        jne public_65c15aa
        mov eax, dword ptr ds : [public_65ca0f4]
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x30], offset public_65c735c
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x2C], 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x17], 1
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_65c12b1
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
/*FIXUP push offset public_65c7340 @0x65c126a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7340
        push eax
        call dword ptr ds : [ecx]
        cmp eax, edi
        jne public_65c12b1
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        cmp esi, edi
        jne public_65c12b1
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
/*FIXUP push offset public_65c7328 @0x65c129b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7328
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_65c12b1
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_65c12b1 : nop
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, edi
        je public_65c14a4
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_65ca0f8 @0x65c12c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0f8
/*FIXUP push offset public_65c7314 @0x65c12ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7314
        push esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65ca0c8 @0x65c12d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0c8
/*FIXUP push offset public_65c7304 @0x65c12d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7304
        push esi
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65ca0e0 @0x65c12e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0e0
/*FIXUP push offset public_65c72ec @0x65c12e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c72ec
        push esi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_65ca0e0]
        cmp eax, edi
        je public_65c1330
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0e4 @0x65c12fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0e4
/*FIXUP push offset public_65c72dc @0x65c1300*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c72dc
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_65ca0e0]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0e8 @0x65c130f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0e8
/*FIXUP push offset public_65c72c8 @0x65c1314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c72c8
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_65ca0e0]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0ec @0x65c1323*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0ec
/*FIXUP push offset public_65c72b0 @0x65c1328*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c72b0
        push eax
        call dword ptr ds : [ecx]
        public_65c1330 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push ebp
/*FIXUP push offset public_65ca0dc @0x65c1334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0dc
/*FIXUP push offset public_65c7298 @0x65c1339*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7298
        push esi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_65ca100 @0x65c1343*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca100
/*FIXUP push offset public_65c7280 @0x65c1348*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7280
        push esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65ca104 @0x65c1352*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca104
/*FIXUP push offset public_65c7268 @0x65c1357*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7268
        push esi
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65ca110 @0x65c1361*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca110
/*FIXUP push offset public_65c724c @0x65c1366*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c724c
        push esi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_65ca114 @0x65c1370*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca114
/*FIXUP push offset public_65c723c @0x65c1375*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c723c
        push esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65ca118 @0x65c137f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca118
/*FIXUP push offset public_65c722c @0x65c1384*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c722c
        push esi
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65ca108 @0x65c138e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca108
/*FIXUP push offset public_65c7214 @0x65c1393*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7214
        push esi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_65ca10c @0x65c139d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca10c
/*FIXUP push offset public_65c7200 @0x65c13a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7200
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_65ca0f8]
        mov ebp, dword ptr ss : [esp+0x364]
        xor bl, bl
        cmp eax, edi
        je public_65c13fa
        mov ecx, dword ptr ds : [eax]
        push 0x113
        push ebp
        push eax
        call dword ptr ds : [ecx+0xA4]
        test eax, eax
        mov eax, dword ptr ds : [public_65ca0f8]
        je public_65c13fa
        mov edx, dword ptr ds : [eax]
        push eax
        mov bl, 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_65ca0f8]
        cmp eax, edi
        je public_65c13fa
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        xor eax, eax
        mov dword ptr ds : [public_65ca0f8], eax
        public_65c13fa : nop
        mov edx, dword ptr ds : [public_65ca0c8]
        cmp edx, edi
        je public_65c148b
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_65c1424
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0xAC]
        mov edx, dword ptr ds : [public_65ca0c8]
        public_65c1424 : nop
        xor eax, eax
        mov ecx, 6
        lea edi, ss:[esp+0x40]
        rep stosd
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x44], eax
        lea eax, ss:[esp+0x40]
        xor edi, edi
        push eax
        mov dword ptr ss : [esp+0x44], 0x18
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], edi
        mov ecx, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_65c1476
        mov eax, dword ptr ds : [public_65ca0c8]
        cmp eax, edi
        mov bl, 1
        je public_65c1476
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0c8], edi
        public_65c1476 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_65c1489
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        public_65c1489 : nop
        xor edi, edi
        public_65c148b : nop
        pop ebp
        test bl, bl
        pop ebx
        je public_65c14a4
        push edi
        push 0xD3
        call dword ptr ds : [public_65ca0b4]
        add esp, 8
        mov byte ptr ss : [esp+0xB], al
        public_65c14a4 : nop
        mov eax, dword ptr ds : [public_65ca0f4]
/*FIXUP push offset public_65ca0c4 @0x65c14a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0c4
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 8
        mov dword ptr ss : [esp+0x20], offset public_65c71f8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_65c1555
        mov eax, dword ptr ds : [public_65ca0c4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_65ca0c4]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0cc @0x65c14e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0cc
/*FIXUP push offset public_65c71e4 @0x65c14e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c71e4
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_65ca0c4]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0d4 @0x65c14f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0d4
/*FIXUP push offset public_65c71d4 @0x65c14fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c71d4
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_65ca0c4]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0d8 @0x65c150c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0d8
/*FIXUP push offset public_65c71c4 @0x65c1511*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c71c4
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_65ca0c4]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0fc @0x65c1520*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0fc
/*FIXUP push offset public_65c71b0 @0x65c1525*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c71b0
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_65ca0c4]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0d0 @0x65c1534*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0d0
/*FIXUP push offset public_65c71a0 @0x65c1539*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c71a0
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_65ca0c4]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65ca0c0 @0x65c1548*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0c0
/*FIXUP push offset public_65c7190 @0x65c154d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7190
        push eax
        call dword ptr ds : [ecx]
        public_65c1555 : nop
        mov ecx, offset public_65c7180
        mov dword ptr ss : [esp+0x18], ecx
        mov eax, 8
/*FIXUP push offset public_65ca11c @0x65c1563*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca11c
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_65ca0f4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_65c1593
        mov ecx, dword ptr ds : [public_65ca114]
        mov eax, dword ptr ds : [public_65ca11c]
        mov edx, dword ptr ds : [eax]
        push ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        public_65c1593 : nop
        cmp esi, edi
        je public_65c159d
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_65c159d : nop
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop edi
        add esp, 0x350
        ret 
/*FIXUP public_65c15aa : nop
        push offset public_65c7158 @0x65c15aa*/
  FIXUP public_65c15aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7158
        call public_65c15d0
        add esp, 4
        xor al, al
        pop edi
        add esp, 0x350
        ret 
        UNREACHABLE_TRAP(0x65c1160)
    }
}

#undef public_65c1194
#undef public_65c11b0
#undef public_65c120d
#undef public_65c1218
#undef public_65c12b1
#undef public_65c1330
#undef public_65c13fa
#undef public_65c1424
#undef public_65c1476
#undef public_65c1489
#undef public_65c148b
#undef public_65c14a4
#undef public_65c1555
#undef public_65c1593
#undef public_65c159d
#undef public_65c15aa
