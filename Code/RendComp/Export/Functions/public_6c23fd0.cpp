#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21170);
CLANG_FORWARD_PROC_SYMBOL(public_6c22410);
CLANG_FORWARD_PROC_SYMBOL(public_6c23fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c24970);
CLANG_FORWARD_PROC_SYMBOL(public_6c24980);
CLANG_FORWARD_PROC_SYMBOL(public_6c249d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c26d90);
CLANG_FORWARD_PROC_SYMBOL(public_6c26dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c271f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c272b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27390);
CLANG_FORWARD_PROC_SYMBOL(public_6c27450);
CLANG_FORWARD_PROC_SYMBOL(public_6c27530);
CLANG_FORWARD_PROC_SYMBOL(public_6c276a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c279a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29090);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c2402b _public_6c2402b
#define public_6c240cd _public_6c240cd
#define public_6c240da _public_6c240da
#define public_6c240e1 _public_6c240e1
#define public_6c2416f _public_6c2416f
#define public_6c2417c _public_6c2417c
#define public_6c24188 _public_6c24188
#define public_6c24200 _public_6c24200
#define public_6c2420d _public_6c2420d
#define public_6c24219 _public_6c24219
#define public_6c242b2 _public_6c242b2
#define public_6c242bf _public_6c242bf
#define public_6c242c6 _public_6c242c6
#define public_6c24336 _public_6c24336
#define public_6c24343 _public_6c24343
#define public_6c2434a _public_6c2434a
#define public_6c243f1 _public_6c243f1
#define public_6c243fe _public_6c243fe
#define public_6c24405 _public_6c24405
#define public_6c24464 _public_6c24464
#define public_6c24466 _public_6c24466
#define public_6c2448e _public_6c2448e
#define public_6c24497 _public_6c24497
#define public_6c244a2 _public_6c244a2
#define public_6c2454a _public_6c2454a
#define public_6c24557 _public_6c24557
#define public_6c2455e _public_6c2455e
#define public_6c245ce _public_6c245ce
#define public_6c245db _public_6c245db
#define public_6c245e2 _public_6c245e2
#define public_6c24680 _public_6c24680
#define public_6c2468d _public_6c2468d
#define public_6c24694 _public_6c24694
#define public_6c24711 _public_6c24711
#define public_6c2471c _public_6c2471c
#define public_6c24763 _public_6c24763
#define public_6c247a0 _public_6c247a0
#define public_6c247a8 _public_6c247a8
#define public_6c247e8 _public_6c247e8
#define public_6c2480e _public_6c2480e
#define public_6c24848 _public_6c24848
#define public_6c24868 _public_6c24868
#define public_6c248dc _public_6c248dc
#define public_6c248ed _public_6c248ed
#define public_6c2493b _public_6c2493b

PROC_DECLARE(0x6c23fd0, internal_6c23fd0, public_6c23fd0);
extern "C" NAKED register_t __cdecl internal_6c23fd0()
{
    __asm
    {
        mov eax, 0x2058
        call public_6c34ec0
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2064]
        mov eax, dword ptr ds : [esi]
        push 0x104
        mov ebx, ecx
/*FIXUP push offset public_6c37ca4 @0x6c23fec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37ca4
        lea ecx, ds:[ebx+0xAC]
        push ecx
        push esi
        call dword ptr ds : [eax+0xA4]
        mov eax, dword ptr ds : [ebx+0xA8]
        and eax, 0xFFFFFFFE
/*FIXUP push offset public_6c37328 @0x6c24008*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37328
        mov dword ptr ds : [ebx+0xA8], eax
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x60]
        test eax, eax
        jne public_6c2402b
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2058
        ret 0x14
        public_6c2402b : nop
        push ebp
        push edi
        lea edx, ds:[ebx+0x1C]
        xor eax, eax
        mov edi, edx
        mov ecx, 0x1C
        rep stosd
        mov ebp, dword ptr ds : [edx]
        or ebp, 4
/*FIXUP push offset public_6c3731c @0x6c24040*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3731c
        mov dword ptr ds : [edx], ebp
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6c2471c
/*FIXUP push offset public_6c37310 @0x6c24055*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
/*FIXUP push offset public_6c37308 @0x6c2405a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37308
        lea ecx, ss:[esp+0x30]
        call public_6c24980
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c240e1
        mov eax, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [eax+0x28]
        mov ecx, eax
        mov eax, 0xAAAAAAAB
        mul ecx
        mov edi, edx
        mov dword ptr ss : [esp+0x10], ecx
        shr edi, 3
        lea ecx, ds:[edi+edi*2]
        shl ecx, 2
        push ecx
        call public_6c34eac
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c240cd
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x30], edi
        mov dword ptr ss : [esp+0x18], edx
        jmp public_6c240da
        public_6c240cd : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_6c34ea0
        add esp, 4
        public_6c240da : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6c240e1 : nop
        mov edx, dword ptr ss : [esp+0x18]
/*FIXUP push offset public_6c37310 @0x6c240e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
        mov edi, 0xC
/*FIXUP push offset public_6c372f8 @0x6c240ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372f8
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x84], 2
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x24], edi
        call public_6c24980
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c24188
        mov edx, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [edx+0x28]
        mov edi, eax
        mov dword ptr ss : [esp+0x14], eax
        shr edi, 2
        lea eax, ds:[edi*4]
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c2416f
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x88], edi
        mov dword ptr ds : [ebx+0x2C], eax
        jmp public_6c2417c
        public_6c2416f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6c34ea0
        add esp, 4
        public_6c2417c : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x10]
        mov edi, 0xC
/*FIXUP public_6c24188 : nop
        push offset public_6c37310 @0x6c24188*/
  FIXUP public_6c24188 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
/*FIXUP push offset public_6c372e8 @0x6c2418d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372e8
        lea ecx, ss:[esp+0x30]
        call public_6c24980
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c24219
        mov edx, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [edx+0x28]
        mov ecx, eax
        mov eax, 0xAAAAAAAB
        mul ecx
        mov edi, edx
        shr edi, 3
        lea eax, ds:[edi+edi*2]
        shl eax, 2
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c24200
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x44], edi
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6c2420d
        public_6c24200 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6c34ea0
        add esp, 4
        public_6c2420d : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x10]
        mov edi, 0xC
        public_6c24219 : nop
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        je public_6c242c6
        mov ecx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ss : [esp+0x18]
        or ecx, 0x10
/*FIXUP push offset public_6c37310 @0x6c24231*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
        mov dword ptr ds : [ebx+0x84], ecx
/*FIXUP push offset public_6c372d0 @0x6c2423c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372d0
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [ebx+0x34], eax
        mov dword ptr ds : [ebx+0x3C], edi
        mov dword ptr ds : [ebx+0x38], edi
        call public_6c24980
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c242c6
        mov eax, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [eax+0x28]
        mov edi, eax
        shr edi, 2
        lea ecx, ds:[edi*4]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c34eac
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c242b2
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x88], edi
        mov dword ptr ds : [ebx+0x40], edx
        jmp public_6c242bf
        public_6c242b2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c34ea0
        add esp, 4
        public_6c242bf : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x10]
/*FIXUP public_6c242c6 : nop
        push offset public_6c37310 @0x6c242c6*/
  FIXUP public_6c242c6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
/*FIXUP push offset public_6c372cc @0x6c242cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372cc
        lea ecx, ss:[esp+0x30]
        call public_6c24980
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x28]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c2434a
        mov ecx, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [ecx+0x28]
        mov edi, eax
        shr edi, 3
        lea edx, ds:[edi*8]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c24336
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x6C], edi
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6c24343
        public_6c24336 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6c34ea0
        add esp, 4
        public_6c24343 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x10]
        public_6c2434a : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_6c24405
        mov ecx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ss : [esp+0x18]
        and ecx, 0xFFFFF1FF
        or ecx, 0x100
        mov dword ptr ds : [ebx+0x5C], eax
        mov eax, 8
/*FIXUP push offset public_6c37310 @0x6c24373*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
        mov dword ptr ds : [ebx+0x84], ecx
/*FIXUP push offset public_6c372c0 @0x6c2437e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372c0
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [ebx+0x64], eax
        mov dword ptr ds : [ebx+0x60], eax
        call public_6c24980
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x28]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c24405
        mov ecx, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [ecx+0x28]
        mov edi, eax
        shr edi, 2
        lea edx, ds:[edi*4]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c243f1
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x88], edi
        mov dword ptr ds : [ebx+0x68], eax
        jmp public_6c243fe
        public_6c243f1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6c34ea0
        add esp, 4
        public_6c243fe : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x10]
/*FIXUP public_6c24405 : nop
        push offset public_6c37310 @0x6c24405*/
  FIXUP public_6c24405 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
/*FIXUP push offset public_6c372bc @0x6c2440a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372bc
        lea ecx, ss:[esp+0x30]
        call public_6c24980
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_6c244a2
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        push esi
        call dword ptr ds : [edx+0x28]
        mov edi, eax
        mov dword ptr ss : [esp+0x14], eax
        shr edi, 3
        lea eax, ds:[edi*8]
        push eax
        call public_6c34eac
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_6c24464
/*FIXUP push offset _public_6c24970 @0x6c24454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c24970
        push edi
        push 8
        push ebp
        call public_6c22410
        jmp public_6c24466
        public_6c24464 : nop
        xor ebp, ebp
        public_6c24466 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        push edx
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c2448e
        mov dword ptr ds : [ebx+0x80], edi
        mov dword ptr ss : [esp+0x18], ebp
        jmp public_6c24497
        public_6c2448e : nop
        push ebp
        call public_6c34ea0
        add esp, 4
        public_6c24497 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x10]
        public_6c244a2 : nop
        mov eax, dword ptr ds : [ebx+0x80]
        test eax, eax
        je public_6c2455e
        mov eax, dword ptr ds : [ebx+0x84]
        mov edx, dword ptr ss : [esp+0x18]
        and eax, 0xFFFFF2FF
        or eax, 0x200
        mov dword ptr ds : [ebx+0x84], eax
        mov eax, 8
/*FIXUP push offset public_6c37310 @0x6c244cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
/*FIXUP push offset public_6c372b0 @0x6c244d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372b0
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [ebx+0x70], edx
        mov dword ptr ds : [ebx+0x78], eax
        mov dword ptr ds : [ebx+0x74], eax
        call public_6c24980
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c2455e
        mov eax, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [eax+0x28]
        mov edi, eax
        shr edi, 2
        lea ecx, ds:[edi*4]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c34eac
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c2454a
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x88], edi
        mov dword ptr ds : [ebx+0x7C], edx
        jmp public_6c24557
        public_6c2454a : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c34ea0
        add esp, 4
        public_6c24557 : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x10]
/*FIXUP public_6c2455e : nop
        push offset public_6c37310 @0x6c2455e*/
  FIXUP public_6c2455e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
/*FIXUP push offset public_6c372a8 @0x6c24563*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c372a8
        lea ecx, ss:[esp+0x30]
        call public_6c24980
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x28]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6c245e2
        mov ecx, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [ecx+0x28]
        mov edi, eax
        shr edi, 2
        lea edx, ds:[edi*4]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c245ce
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x58], edi
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6c245db
        public_6c245ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6c34ea0
        add esp, 4
        public_6c245db : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x10]
        public_6c245e2 : nop
        mov eax, dword ptr ds : [ebx+0x58]
        test eax, eax
        je public_6c24694
        mov ecx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ss : [esp+0x14]
        or ecx, 0x40
        mov dword ptr ds : [ebx+0x48], eax
        mov eax, 4
/*FIXUP push offset public_6c37310 @0x6c24602*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
        mov dword ptr ds : [ebx+0x84], ecx
/*FIXUP push offset public_6c37298 @0x6c2460d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37298
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [ebx+0x50], eax
        mov dword ptr ds : [ebx+0x4C], eax
        call public_6c24980
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c24694
        mov eax, dword ptr ds : [esi]
        push 0
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebp, eax
        shr ebp, 2
        lea ecx, ds:[ebp*4]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c34eac
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push edi
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c24680
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x88], ebp
        mov dword ptr ds : [ebx+0x54], edx
        jmp public_6c2468d
        public_6c24680 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c34ea0
        add esp, 4
        public_6c2468d : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6c24694 : nop
        lea edi, ds:[ebx+0x8C]
        lea edx, ds:[edi+4]
        push edx
        push edi
/*FIXUP push offset public_6c37288 @0x6c2469f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37288
        push esi
        call public_6c27530
        mov eax, dword ptr ds : [edi]
        add esp, 0x10
        test eax, eax
        je public_6c24711
        lea ebp, ds:[edi+8]
        push ebp
/*FIXUP push offset public_6c37278 @0x6c246b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37278
        push esi
        call public_6c271f0
        lea eax, ds:[edi+0xC]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_6c3726c @0x6c246cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3726c
        push esi
        call public_6c272b0
        lea eax, ds:[edi+0x10]
        push eax
/*FIXUP push offset public_6c37264 @0x6c246da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37264
        push esi
        call public_6c27390
        lea edx, ds:[edi+0x14]
        push edx
/*FIXUP push offset public_6c37254 @0x6c246e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37254
        push esi
        call public_6c271f0
        mov eax, dword ptr ss : [ebp]
        add esp, 0x34
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        fdiv dword ptr ds : [edi+0x10]
        fstp dword ptr ds : [edi+0x18]
        public_6c24711 : nop
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_6c37250 @0x6c24713*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push esi
        call dword ptr ds : [ecx+0x60]
        public_6c2471c : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_6c37244 @0x6c2471e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37244
        push esi
        call dword ptr ds : [edx+0x60]
        test eax, eax
        je public_6c2493b
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6c3723c @0x6c24734*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3723c
        push esi
        call public_6c271f0
        add esp, 0xC
        test eax, eax
        jl public_6c248ed
        mov eax, dword ptr ss : [esp+0x18]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        jbe public_6c248ed
        mov ebp, dword ptr ss : [esp+0x207C]
        public_6c24763 : nop
        push edi
        lea ecx, ss:[esp+0x6C]
/*FIXUP push offset public_6c37234 @0x6c24768*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37234
        push ecx
        call public_6c21170
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        push eax
        push esi
        call dword ptr ds : [edx+0x60]
        test eax, eax
        je public_6c248dc
        push 0x40
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c247a0
        mov ecx, eax
        call public_6c276a0
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6c247a8
        public_6c247a0 : nop
        mov dword ptr ss : [esp+0x1C], 0
        public_6c247a8 : nop
        lea eax, ss:[esp+0x28]
        push eax
        push 0x40
/*FIXUP push offset public_6c37224 @0x6c247af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37224
        push esi
        call public_6c249d0
        add esp, 0x10
        test eax, eax
        jge public_6c247e8
        mov ecx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c3720c @0x6c247c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3720c
        push 0x61A
/*FIXUP push offset public_6c371b8 @0x6c247d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c371b8
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c247db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6c2480e
        public_6c247e8 : nop
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [public_6c3607c]
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edi, ds:[eax+4]
        call dword ptr ds : [public_6c36008]
        mov dword ptr ds : [edi], eax
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 8
        public_6c2480e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+0x18]
        push edx
        add eax, 0x1C
        push eax
/*FIXUP push offset public_6c37188 @0x6c2481a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37188
        push esi
        call public_6c27450
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax+0x18]
        add esp, 0x10
        test ecx, ecx
        je public_6c24848
        test ebp, ebp
        mov dword ptr ds : [eax], 5
        jne public_6c24868
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_6c29090
        jmp public_6c24868
        public_6c24848 : nop
        mov dword ptr ds : [eax], 4
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[eax+0x18]
        push ecx
        add eax, 0x1C
        push eax
/*FIXUP push offset public_6c37178 @0x6c2485a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37178
        push esi
        call public_6c27450
        add esp, 0x10
        public_6c24868 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+0x20]
        push edx
        add eax, 0x28
        push eax
/*FIXUP push offset public_6c37168 @0x6c24874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37168
        push esi
        call public_6c27450
        mov eax, dword ptr ss : [esp+0x2C]
        add eax, 0x24
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_6c3715c @0x6c2488c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3715c
        push esi
        call public_6c27530
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 0x20
        call public_6c279a0
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[ebx+0x1C]
        mov dword ptr ds : [edx+0x2C], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, dword ptr ds : [ebx+0x14]
        lea ecx, ds:[ebx+0xC]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call public_6c26dd0
        mov ecx, dword ptr ds : [ebx+0x14]
/*FIXUP push offset public_6c37250 @0x6c248cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        mov dword ptr ds : [ebx+0x1E8], ecx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x60]
        public_6c248dc : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jb public_6c24763
        public_6c248ed : nop
        mov eax, dword ptr ss : [esp+0x2078]
        push eax
        lea ecx, ds:[ebx+0x21C]
        call public_6c26d90
        mov ecx, dword ptr ss : [esp+0x2070]
        push ecx
        lea ecx, ds:[ebx+0x220]
        call public_6c26d90
        mov edx, dword ptr ss : [esp+0x2074]
        push edx
        lea ecx, ds:[ebx+0x224]
        call public_6c26d90
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[ebx+4]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_6c37250 @0x6c24932*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push esi
        call dword ptr ds : [edx+0x60]
        public_6c2493b : nop
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6c37250 @0x6c2493d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push esi
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [ebx+0xA8]
        pop edi
        pop ebp
        or eax, 1
        mov dword ptr ds : [ebx+0xA8], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x2058
        ret 0x14
        UNREACHABLE_TRAP(0x6c23fd0)
    }
}

#undef public_6c2402b
#undef public_6c240cd
#undef public_6c240da
#undef public_6c240e1
#undef public_6c2416f
#undef public_6c2417c
#undef public_6c24188
#undef public_6c24200
#undef public_6c2420d
#undef public_6c24219
#undef public_6c242b2
#undef public_6c242bf
#undef public_6c242c6
#undef public_6c24336
#undef public_6c24343
#undef public_6c2434a
#undef public_6c243f1
#undef public_6c243fe
#undef public_6c24405
#undef public_6c24464
#undef public_6c24466
#undef public_6c2448e
#undef public_6c24497
#undef public_6c244a2
#undef public_6c2454a
#undef public_6c24557
#undef public_6c2455e
#undef public_6c245ce
#undef public_6c245db
#undef public_6c245e2
#undef public_6c24680
#undef public_6c2468d
#undef public_6c24694
#undef public_6c24711
#undef public_6c2471c
#undef public_6c24763
#undef public_6c247a0
#undef public_6c247a8
#undef public_6c247e8
#undef public_6c2480e
#undef public_6c24848
#undef public_6c24868
#undef public_6c248dc
#undef public_6c248ed
#undef public_6c2493b
