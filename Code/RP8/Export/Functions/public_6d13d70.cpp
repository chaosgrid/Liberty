#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f880);

#define public_6d13de8 _public_6d13de8
#define public_6d13e47 _public_6d13e47
#define public_6d13eb5 _public_6d13eb5
#define public_6d13edb _public_6d13edb
#define public_6d13f61 _public_6d13f61
#define public_6d13fd3 _public_6d13fd3
#define public_6d13fdc _public_6d13fdc
#define public_6d13fff _public_6d13fff
#define public_6d14001 _public_6d14001
#define public_6d14093 _public_6d14093
#define public_6d14154 _public_6d14154
#define public_6d1417b _public_6d1417b
#define public_6d14256 _public_6d14256
#define public_6d14261 _public_6d14261
#define public_6d14332 _public_6d14332
#define public_6d1433d _public_6d1433d
#define public_6d143ba _public_6d143ba
#define public_6d14437 _public_6d14437
#define public_6d14457 _public_6d14457
#define public_6d14527 _public_6d14527
#define public_6d1452f _public_6d1452f
#define public_6d14552 _public_6d14552
#define public_6d14558 _public_6d14558

PROC_DECLARE(0x6d13d70, internal_6d13d70, public_6d13d70);
extern "C" NAKED register_t __cdecl internal_6d13d70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0xC0D4
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x16C]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d13de8
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x7C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x7C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x7C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x7C], eax
/*FIXUP push offset public_6d69e98 @0x6d13dbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69e98
        push 0x11E3
/*FIXUP push offset public_6d69ed8 @0x6d13dc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69ed8
/*FIXUP push offset public_6d69f24 @0x6d13dcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69f24
        mov ecx, dword ptr ss : [ebp-0x7C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d14558
        public_6d13de8 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d13e47
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x80]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x80], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x80]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x80], eax
/*FIXUP push offset public_6d69f40 @0x6d13e1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69f40
        push 0x11E7
/*FIXUP push offset public_6d69f68 @0x6d13e24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69f68
/*FIXUP push offset public_6d69fb4 @0x6d13e29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69fb4
        mov ecx, dword ptr ss : [ebp-0x80]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d14558
        public_6d13e47 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        jne public_6d13eb5
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x84]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x84], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x84]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x84], eax
/*FIXUP push offset public_6d69fd0 @0x6d13e85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69fd0
        push 0x11EC
/*FIXUP push offset public_6d69fe8 @0x6d13e8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69fe8
/*FIXUP push offset public_6d6a034 @0x6d13e94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a034
        mov ecx, dword ptr ss : [ebp-0x84]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d14558
        public_6d13eb5 : nop
        push 0x2E
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        call dword ptr ds : [public_6d5e138]
        add esp, 8
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d13edb
        mov ecx, dword ptr ss : [ebp-4]
        movsx edx, byte ptr ds : [ecx]
        test edx, edx
        jne public_6d13f61
        public_6d13edb : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
/*FIXUP push offset public_6d6a050 @0x6d13edf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a050
        lea ecx, ss:[ebp-0x2084]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xC0B0], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2088]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2088], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2088]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2088], edx
        mov eax, dword ptr ss : [ebp-0xC0B0]
        push eax
        push 0x11F4
/*FIXUP push offset public_6d6a080 @0x6d13f3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a080
/*FIXUP push offset public_6d6a0cc @0x6d13f42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a0cc
        mov ecx, dword ptr ss : [ebp-0x2088]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d14558
        public_6d13f61 : nop
        mov dword ptr ss : [ebp-0x68], offset public_6d6a0e8
        mov dword ptr ss : [ebp-0x64], 0
        mov dword ptr ss : [ebp-0x60], offset public_6d6a0f0
        mov dword ptr ss : [ebp-0x5C], 1
        mov dword ptr ss : [ebp-0x58], offset public_6d6a0f8
        mov dword ptr ss : [ebp-0x54], 2
        mov dword ptr ss : [ebp-0x50], offset public_6d6a100
        mov dword ptr ss : [ebp-0x4C], 3
        mov dword ptr ss : [ebp-0x48], offset public_6d6a108
        mov dword ptr ss : [ebp-0x44], 4
        mov dword ptr ss : [ebp-0x40], offset public_6d6a110
        mov dword ptr ss : [ebp-0x3C], 5
        mov dword ptr ss : [ebp-0x38], offset public_6d6a118
        mov dword ptr ss : [ebp-0x34], 6
        mov dword ptr ss : [ebp-0x6C], 7
        mov dword ptr ss : [ebp-0x20], 0
        jmp public_6d13fdc
        public_6d13fd3 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, 1
        mov dword ptr ss : [ebp-0x20], eax
        public_6d13fdc : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        cmp ecx, dword ptr ss : [ebp-0x6C]
        jge public_6d14001
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp+edx*8-0x68]
        push eax
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d13fff
        jmp public_6d14001
        public_6d13fff : nop
        jmp public_6d13fd3
        public_6d14001 : nop
        mov edx, dword ptr ss : [ebp-0x20]
        cmp edx, dword ptr ss : [ebp-0x6C]
        jl public_6d14093
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
/*FIXUP push offset public_6d6a120 @0x6d14011*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a120
        lea ecx, ss:[ebp-0x4088]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xC0B4], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x408C]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x408C], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x408C]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x408C], edx
        mov eax, dword ptr ss : [ebp-0xC0B4]
        push eax
        push 0x1214
/*FIXUP push offset public_6d6a150 @0x6d1406f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a150
/*FIXUP push offset public_6d6a19c @0x6d14074*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a19c
        mov ecx, dword ptr ss : [ebp-0x408C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d14558
        public_6d14093 : nop
        lea eax, ss:[ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x190]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x114]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x114]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x20]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 0
        jge public_6d14154
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a1b8 @0x6d140d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a1b8
        lea eax, ss:[ebp-0x608C]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xC0B8], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x6090]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x6090], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x6090]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x6090], ecx
        mov edx, dword ptr ss : [ebp-0xC0B8]
        push edx
        push 0x121D
/*FIXUP push offset public_6d6a1e0 @0x6d14130*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a1e0
/*FIXUP push offset public_6d6a22c @0x6d14135*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a22c
        mov eax, dword ptr ss : [ebp-0x6090]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x1C]
        jmp public_6d14558
        public_6d14154 : nop
        mov dword ptr ss : [ebp-0x70], 0
        mov dword ptr ss : [ebp-8], 0x15
        cmp dword ptr ss : [ebp-0x70], 0
        je public_6d1417b
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x70], 0
        public_6d1417b : nop
        lea edx, ss:[ebp-0x70]
        push edx
        push 0x15
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x118]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x118]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x6C]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 0
        jge public_6d14261
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a248 @0x6d141bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a248
        lea edx, ss:[ebp-0x8090]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xC0BC], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x8094]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x8094], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x8094]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x8094], eax
        mov ecx, dword ptr ss : [ebp-0xC0BC]
        push ecx
        push 0x1224
/*FIXUP push offset public_6d6a268 @0x6d14219*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a268
/*FIXUP push offset public_6d6a2b4 @0x6d1421e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a2b4
        mov edx, dword ptr ss : [ebp-0x8094]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x8098], ecx
        cmp dword ptr ss : [ebp-0x70], 0
        je public_6d14256
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x70], 0
        public_6d14256 : nop
        mov eax, dword ptr ss : [ebp-0x8098]
        jmp public_6d14558
        public_6d14261 : nop
        mov edx, dword ptr ss : [ebp-0x70]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x118]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x118]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 0
        jge public_6d1433d
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a2d0 @0x6d14297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a2d0
        lea eax, ss:[ebp-0xA098]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xC0C0], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xA09C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xA09C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xA09C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xA09C], ecx
        mov edx, dword ptr ss : [ebp-0xC0C0]
        push edx
        push 0x1227
/*FIXUP push offset public_6d6a2f8 @0x6d142f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a2f8
/*FIXUP push offset public_6d6a344 @0x6d142f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a344
        mov eax, dword ptr ss : [ebp-0xA09C]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0xA0A0], edx
        cmp dword ptr ss : [ebp-0x70], 0
        je public_6d14332
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x70], 0
        public_6d14332 : nop
        mov eax, dword ptr ss : [ebp-0xA0A0]
        jmp public_6d14558
        public_6d1433d : nop
        mov dword ptr ss : [ebp-0x74], 0
        mov eax, dword ptr ss : [ebp+8]
        movzx ecx, byte ptr ds : [eax+0x245]
        test ecx, ecx
        jne public_6d14457
        lea edx, ss:[ebp-0x30]
        mov dword ptr ss : [ebp-0x74], edx
        mov eax, dword ptr ss : [ebp+8]
        sub eax, 0x18
        mov dword ptr ss : [ebp-0xC0D0], eax
        mov dword ptr ss : [ebp-0xC0C4], 0
        mov ecx, dword ptr ss : [ebp-0xC0D0]
        cmp dword ptr ds : [ecx+0x274], 0
        jne public_6d143ba
        mov edx, dword ptr ss : [ebp-0xC0D0]
        mov eax, dword ptr ds : [edx+0x260]
        mov dword ptr ss : [ebp-0x78], eax
        mov ecx, dword ptr ss : [ebp-0xC0D0]
        mov edx, dword ptr ds : [ecx+0x244]
        push edx
        mov eax, dword ptr ss : [ebp-0xC0D0]
        mov ecx, dword ptr ds : [eax+0x240]
        push ecx
        push 0
        push 0
        lea edx, ss:[ebp-0x30]
        push edx
        call dword ptr ds : [public_6d5e164]
        jmp public_6d14437
        public_6d143ba : nop
        mov eax, dword ptr ss : [ebp-0xC0D0]
        mov ecx, dword ptr ds : [eax+0x274]
        mov dword ptr ss : [ebp-0x78], ecx
        lea edx, ss:[ebp-0x30]
        mov dword ptr ss : [ebp-0xC0C4], edx
        mov eax, dword ptr ss : [ebp-0xC0D0]
        mov ecx, dword ptr ds : [eax+0x264]
        mov dword ptr ss : [ebp-0xC0C8], ecx
        mov edx, dword ptr ss : [ebp-0xC0D0]
        mov eax, dword ptr ds : [edx+0x268]
        mov dword ptr ss : [ebp-0xC0CC], eax
        mov ecx, dword ptr ss : [ebp-0xC0D0]
        mov edx, dword ptr ss : [ebp-0xC0CC]
        add edx, dword ptr ds : [ecx+0x270]
        push edx
        mov eax, dword ptr ss : [ebp-0xC0D0]
        mov ecx, dword ptr ss : [ebp-0xC0C8]
        add ecx, dword ptr ds : [eax+0x26C]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC0CC]
        push edx
        mov eax, dword ptr ss : [ebp-0xC0C8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC0C4]
        push ecx
        call dword ptr ds : [public_6d5e164]
        public_6d14437 : nop
        mov edx, dword ptr ss : [ebp-0x74]
        push edx
        mov eax, dword ptr ss : [ebp-0x78]
        push eax
        call dword ptr ds : [public_6d5e170]
        push 2
        mov ecx, dword ptr ss : [ebp-0x74]
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x78]
        push edx
        call dword ptr ds : [public_6d5e16c]
        public_6d14457 : nop
        mov eax, dword ptr ss : [ebp-0x74]
        push eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x70]
        push ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp+edx*8-0x64]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        call public_6d2f880
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 0
        jge public_6d1452f
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a360 @0x6d1448c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a360
        lea eax, ss:[ebp-0xC0A0]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xC0D4], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC0A4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC0A4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC0A4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC0A4], ecx
        mov edx, dword ptr ss : [ebp-0xC0D4]
        push edx
        push 0x123B
/*FIXUP push offset public_6d6a380 @0x6d144e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a380
/*FIXUP push offset public_6d6a3cc @0x6d144ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a3cc
        mov eax, dword ptr ss : [ebp-0xC0A4]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0xC0A8], edx
        cmp dword ptr ss : [ebp-0x70], 0
        je public_6d14527
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x70], 0
        public_6d14527 : nop
        mov eax, dword ptr ss : [ebp-0xC0A8]
        jmp public_6d14558
        public_6d1452f : nop
        mov dword ptr ss : [ebp-0xC0AC], 0
        cmp dword ptr ss : [ebp-0x70], 0
        je public_6d14552
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x70], 0
        public_6d14552 : nop
        mov eax, dword ptr ss : [ebp-0xC0AC]
        public_6d14558 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d13d70)
    }
}

#undef public_6d13de8
#undef public_6d13e47
#undef public_6d13eb5
#undef public_6d13edb
#undef public_6d13f61
#undef public_6d13fd3
#undef public_6d13fdc
#undef public_6d13fff
#undef public_6d14001
#undef public_6d14093
#undef public_6d14154
#undef public_6d1417b
#undef public_6d14256
#undef public_6d14261
#undef public_6d14332
#undef public_6d1433d
#undef public_6d143ba
#undef public_6d14437
#undef public_6d14457
#undef public_6d14527
#undef public_6d1452f
#undef public_6d14552
#undef public_6d14558
