#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3300);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3660);
CLANG_FORWARD_PROC_SYMBOL(public_6ac61a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac69a0);

#define public_6ac61fe _public_6ac61fe
#define public_6ac625e _public_6ac625e
#define public_6ac627b _public_6ac627b
#define public_6ac6283 _public_6ac6283
#define public_6ac62de _public_6ac62de
#define public_6ac62fd _public_6ac62fd
#define public_6ac631d _public_6ac631d
#define public_6ac6325 _public_6ac6325
#define public_6ac6340 _public_6ac6340
#define public_6ac6364 _public_6ac6364
#define public_6ac637b _public_6ac637b
#define public_6ac638f _public_6ac638f
#define public_6ac6391 _public_6ac6391
#define public_6ac63f7 _public_6ac63f7
#define public_6ac63f9 _public_6ac63f9
#define public_6ac6408 _public_6ac6408
#define public_6ac643a _public_6ac643a
#define public_6ac643c _public_6ac643c
#define public_6ac6447 _public_6ac6447
#define public_6ac6476 _public_6ac6476
#define public_6ac6478 _public_6ac6478
#define public_6ac6488 _public_6ac6488
#define public_6ac64dc _public_6ac64dc
#define public_6ac64de _public_6ac64de
#define public_6ac64e9 _public_6ac64e9
#define public_6ac6514 _public_6ac6514
#define public_6ac6516 _public_6ac6516
#define public_6ac6518 _public_6ac6518
#define public_6ac652d _public_6ac652d
#define public_6ac659b _public_6ac659b
#define public_6ac6633 _public_6ac6633
#define public_6ac6670 _public_6ac6670
#define public_6ac6678 _public_6ac6678
#define public_6ac667e _public_6ac667e
#define public_6ac6722 _public_6ac6722
#define public_6ac676d _public_6ac676d
#define public_6ac681b _public_6ac681b
#define public_6ac6849 _public_6ac6849
#define public_6ac688f _public_6ac688f
#define public_6ac68f3 _public_6ac68f3
#define public_6ac68f5 _public_6ac68f5
#define public_6ac68ff _public_6ac68ff
#define public_6ac6903 _public_6ac6903
#define public_6ac6929 _public_6ac6929
#define public_6ac692d _public_6ac692d
#define public_6ac694f _public_6ac694f
#define public_6ac695f _public_6ac695f
#define public_6ac6961 _public_6ac6961
#define public_6ac697e _public_6ac697e

PROC_DECLARE(0x6ac61a0, internal_6ac61a0, public_6ac61a0);
extern "C" NAKED register_t __cdecl internal_6ac61a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x434
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x444]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x30], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x38], eax
        je public_6ac697e
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_6ac6518
        mov edx, dword ptr ss : [esp+0x38]
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], edx
        public_6ac61fe : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        lea ebp, ds:[ecx+esi+0xE958]
        mov ecx, dword ptr ds : [ebx+esi+0x881C]
        lea ebx, ds:[ebx+esi+0x8418]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x20], ecx
        dec ecx
        lea edi, ds:[ebx+edx*4]
        lea eax, ds:[edi+edx*4]
        lea edx, ds:[eax+edx*4]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [esi]
        je public_6ac62fd
        dec ecx
        je public_6ac625e
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        push eax
        push 1
        push ebp
        call public_6ac3110
        jmp public_6ac6325
        public_6ac625e : nop
        test edx, edx
        je public_6ac627b
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebp
        push eax
        push ebx
        call public_6ac3660
        test eax, eax
        mov dword ptr ss : [esp+0x14], 1
        jne public_6ac6283
        public_6ac627b : nop
        mov dword ptr ss : [esp+0x14], 0
        public_6ac6283 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_6ac3450
        test eax, eax
        je public_6ac6325
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        push edi
        call public_6ac31d0
        test eax, eax
        je public_6ac6325
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], 3
        test eax, eax
        mov eax, dword ptr ss : [esp+0x14]
        je public_6ac62de
        test eax, eax
        je public_6ac631d
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 1
        push ebp
        push ebx
        call public_6ac3140
        test eax, eax
        je public_6ac631d
        mov dword ptr ss : [esp+0x14], 1
        jmp public_6ac6325
        public_6ac62de : nop
        test eax, eax
        je public_6ac631d
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebp
        push edi
        push edi
        call public_6ac30a0
        test eax, eax
        je public_6ac631d
        mov dword ptr ss : [esp+0x14], 1
        jmp public_6ac6325
        public_6ac62fd : nop
        test edx, edx
        je public_6ac631d
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push 1
        push ebp
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac631d
        mov dword ptr ss : [esp+0x14], 1
        jmp public_6ac6325
        public_6ac631d : nop
        mov dword ptr ss : [esp+0x14], 0
        public_6ac6325 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        call public_6ac3450
        test eax, eax
        je public_6ac6340
        mov dword ptr ss : [esp+0x20], 4
        xor ecx, ecx
        jmp public_6ac637b
        public_6ac6340 : nop
        mov edi, dword ptr ss : [esp+0x24]
        test edi, edi
        je public_6ac6364
        push ebx
        lea edx, ds:[edi+esi+0xE858]
        push ebp
        push edx
        call public_6ac31d0
        test eax, eax
        je public_6ac6364
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax-1]
        jmp public_6ac637b
        public_6ac6364 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        inc ecx
        add edi, 0x100
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], edi
        public_6ac637b : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac638f
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6ac638f
        mov eax, 1
        jmp public_6ac6391
        public_6ac638f : nop
        xor eax, eax
        public_6ac6391 : nop
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+esi+0x8824], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+esi+0x881C], ecx
        add eax, 0x410
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x2C]
        dec eax
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6ac61fe
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        je public_6ac6518
        cmp dword ptr ds : [esi], 0
        je public_6ac63f7
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xFD58]
        push edx
        push 1
        lea ecx, ds:[esi+0xE958]
        push eax
        push ecx
        call public_6ac3140
        test eax, eax
        je public_6ac63f7
        mov eax, 1
        jmp public_6ac63f9
        public_6ac63f7 : nop
        xor eax, eax
        public_6ac63f9 : nop
        cmp ebp, 1
        mov dword ptr ds : [esi], eax
        je public_6ac6447
        mov edi, 0x100
        lea ebx, ss:[ebp-1]
        public_6ac6408 : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac643a
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+esi+0xFD58]
        push edx
        lea ecx, ds:[edi+esi+0xFC58]
        push eax
        lea edx, ds:[edi+esi+0xE958]
        push ecx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac643a
        mov eax, 1
        jmp public_6ac643c
        public_6ac643a : nop
        xor eax, eax
        public_6ac643c : nop
        add edi, 0x100
        dec ebx
        mov dword ptr ds : [esi], eax
        jne public_6ac6408
        public_6ac6447 : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac6476
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ebp
        shl edx, 8
        push eax
        lea ecx, ss:[esp+0x148]
        lea eax, ds:[edx+esi+0xFC58]
        push ecx
        push eax
        call public_6ac3300
        test eax, eax
        je public_6ac6476
        mov eax, 1
        jmp public_6ac6478
        public_6ac6476 : nop
        xor eax, eax
        public_6ac6478 : nop
        mov dword ptr ds : [esi], eax
        lea eax, ss:[ebp-1]
        test eax, eax
        je public_6ac64e9
        mov edi, eax
        mov ebx, eax
        shl edi, 8
        public_6ac6488 : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac64dc
        mov ebp, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edi+esi+0xFD58]
        push ebp
        lea edx, ds:[edi+esi+0xFC58]
        push ecx
        lea eax, ss:[esp+0x14C]
        push edx
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac64dc
        lea ecx, ss:[esp+0x144]
        push ebp
        lea edx, ds:[edi+esi+0xE958]
        push ecx
        lea eax, ss:[esp+0x14C]
        push edx
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac64dc
        mov eax, 1
        jmp public_6ac64de
        public_6ac64dc : nop
        xor eax, eax
        public_6ac64de : nop
        sub edi, 0x100
        dec ebx
        mov dword ptr ds : [esi], eax
        jne public_6ac6488
        public_6ac64e9 : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac6514
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0xFD58]
        push ecx
        push 1
        lea eax, ss:[esp+0x14C]
        push edx
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac6514
        mov eax, 1
        jmp public_6ac6516
        public_6ac6514 : nop
        xor eax, eax
        public_6ac6516 : nop
        mov dword ptr ds : [esi], eax
        public_6ac6518 : nop
        mov eax, dword ptr ss : [esp+0x38]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6ac697e
        public_6ac652d : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x28]
        test edi, edi
        je public_6ac697e
        mov edx, dword ptr ds : [ebx+esi+0x8820]
        mov eax, dword ptr ds : [ebx+esi+0x881C]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [ebx+esi+0x8818]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [ebx+esi+0x8824]
        shl edx, 8
        lea ebp, ds:[ebx+esi+0x8418]
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[edx+esi+0xFD58]
        dec eax
        mov dword ptr ss : [esp+0x18], edx
        lea edx, ss:[ebp+ecx*4]
        mov dword ptr ss : [esp+0x14], edx
        cmp eax, 3
        lea edx, ds:[edx+ecx*4]
        mov dword ptr ss : [esp+0x2C], edx
        lea ecx, ds:[edx+ecx*4]
        ja public_6ac6929
/*FIXUP jmp dword ptr ds : [eax*4+public_6ac698c] @0x6ac6594*/
  JMPTB cmp eax, 0
  JMPTB je public_6ac659b
  JMPTB cmp eax, 1
  JMPTB je public_6ac6633
  JMPTB cmp eax, 2
  JMPTB je public_6ac6633
  JMPTB cmp eax, 3
  JMPTB je public_6ac68ff
  JMPTB int 3
        public_6ac659b : nop
        test edi, edi
        je public_6ac6929
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac6929
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x244]
        push edx
        lea ecx, ss:[esp+0x48]
        push eax
        push ecx
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac6929
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x48]
        push eax
        push ecx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac6929
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea eax, ss:[esp+0x48]
        lea edx, ss:[esp+ecx*4+0x248]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac6929
        mov edi, 1
        jmp public_6ac6903
        public_6ac6633 : nop
        cmp dword ptr ss : [esp+0x20], 2
        jne public_6ac6722
        test edi, edi
        je public_6ac6678
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x44]
        push edi
        push edx
        push ecx
        push eax
        call public_6ac3660
        test eax, eax
        je public_6ac6678
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x44]
        push edi
        lea edx, ss:[esp+0x48]
        push ecx
        push edx
        push eax
        call public_6ac3490
        public_6ac6670 : nop
        test eax, eax
        jne public_6ac681b
        public_6ac6678 : nop
        mov edi, dword ptr ss : [esp+0x10]
        xor eax, eax
        public_6ac667e : nop
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        je public_6ac6849
        test eax, eax
        je public_6ac68f3
        lea edx, ss:[esp+0x144]
        push edi
        lea eax, ss:[esp+0x148]
        push edx
        lea ecx, ss:[esp+0x4C]
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac68f3
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x144]
        push edi
        add eax, 4
        push edx
        lea ecx, ss:[esp+0x14C]
        push eax
        push ecx
        call public_6ac3660
        test eax, eax
        je public_6ac68f3
        lea edx, ss:[esp+0x144]
        push edi
        push edx
        lea eax, ss:[esp+0x14C]
        push ebp
        push eax
        call public_6ac3660
        test eax, eax
        je public_6ac68f3
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x244]
        push edi
        push ecx
        lea eax, ss:[esp+0x14C]
        push edx
        push eax
        call public_6ac3660
        test eax, eax
        jne public_6ac688f
        jmp public_6ac68f3
        public_6ac6722 : nop
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        je public_6ac676d
        test edi, edi
        je public_6ac6678
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac6678
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x48]
        push eax
        push ecx
        push ebp
        call public_6ac30a0
        jmp public_6ac6670
        public_6ac676d : nop
        test edi, edi
        je public_6ac6678
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x44]
        push edx
        push eax
        push ebp
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac6678
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x144]
        push ecx
        lea eax, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x4C]
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac6678
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x148]
        push eax
        lea edx, ss:[esp+0x4C]
        push ecx
        push edx
        call public_6ac30a0
        test eax, eax
        je public_6ac6678
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x44]
        push eax
        add edx, 4
        push ecx
        lea eax, ss:[esp+0x4C]
        push edx
        push eax
        call public_6ac30a0
        test eax, eax
        je public_6ac6678
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x44]
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac6678
        public_6ac681b : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x144]
        push edi
        lea eax, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x4C]
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac6678
        mov eax, 1
        jmp public_6ac667e
        public_6ac6849 : nop
        test eax, eax
        je public_6ac68f3
        lea ecx, ss:[esp+0x144]
        push edi
        push ecx
        lea edx, ss:[esp+0x14C]
        push ebp
        push edx
        call public_6ac3660
        test eax, eax
        je public_6ac68f3
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x244]
        push edi
        push eax
        lea edx, ss:[esp+0x14C]
        push ecx
        push edx
        call public_6ac3660
        test eax, eax
        je public_6ac68f3
        public_6ac688f : nop
        lea eax, ss:[esp+0x144]
        push edi
        push eax
        lea ecx, ss:[esp+0x24C]
        push ebp
        push ecx
        call public_6ac3660
        test eax, eax
        je public_6ac68f3
        lea edx, ss:[esp+0x144]
        push edi
        lea eax, ss:[esp+0x148]
        push edx
        lea ecx, ss:[esp+0x4C]
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac68f3
        mov edx, dword ptr ss : [esp+0x28]
        push edi
        lea ecx, ss:[esp+0x148]
        lea eax, ss:[esp+edx*4+0x248]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push edx
        call public_6ac30a0
        test eax, eax
        je public_6ac68f3
        mov edi, 1
        jmp public_6ac68f5
        public_6ac68f3 : nop
        xor edi, edi
        public_6ac68f5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        neg eax
        mov dword ptr ss : [esp+0x1C], eax
        public_6ac68ff : nop
        test edi, edi
        je public_6ac694f
        public_6ac6903 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jle public_6ac6929
        cmp eax, dword ptr ds : [esi+0xC]
        jg public_6ac6929
        mov ecx, eax
        shl ecx, 7
        add ecx, eax
        mov edx, dword ptr ds : [esi+ecx*4+0x314]
        lea ecx, ds:[esi+ecx*4+0x314]
        test edx, edx
        jg public_6ac692d
        public_6ac6929 : nop
        xor edi, edi
        jmp public_6ac694f
        public_6ac692d : nop
        dec edx
        test edi, edi
        mov dword ptr ds : [ecx], edx
        je public_6ac694f
        cmp dword ptr ss : [esp+0x20], 4
        je public_6ac694f
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push esi
        push eax
        lea eax, ss:[esp+0x250]
        push eax
        call public_6ac69a0
        public_6ac694f : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac695f
        test edi, edi
        je public_6ac695f
        mov eax, 1
        jmp public_6ac6961
        public_6ac695f : nop
        xor eax, eax
        public_6ac6961 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x24]
        add ebx, 0x410
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jne public_6ac652d
        public_6ac697e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x434
        ret 4
        UNREACHABLE_TRAP(0x6ac61a0)
        ASM_EXPORT_ENTRY_FIRST(0x6ac659b, public_6ac659b)
        ASM_EXPORT_ENTRY(0x6ac6633, public_6ac6633)
        ASM_EXPORT_ENTRY_LAST(0x6ac68ff, public_6ac68ff)
    }
}

#undef public_6ac61fe
#undef public_6ac625e
#undef public_6ac627b
#undef public_6ac6283
#undef public_6ac62de
#undef public_6ac62fd
#undef public_6ac631d
#undef public_6ac6325
#undef public_6ac6340
#undef public_6ac6364
#undef public_6ac637b
#undef public_6ac638f
#undef public_6ac6391
#undef public_6ac63f7
#undef public_6ac63f9
#undef public_6ac6408
#undef public_6ac643a
#undef public_6ac643c
#undef public_6ac6447
#undef public_6ac6476
#undef public_6ac6478
#undef public_6ac6488
#undef public_6ac64dc
#undef public_6ac64de
#undef public_6ac64e9
#undef public_6ac6514
#undef public_6ac6516
#undef public_6ac6518
#undef public_6ac652d
#undef public_6ac659b
#undef public_6ac6633
#undef public_6ac6670
#undef public_6ac6678
#undef public_6ac667e
#undef public_6ac6722
#undef public_6ac676d
#undef public_6ac681b
#undef public_6ac6849
#undef public_6ac688f
#undef public_6ac68f3
#undef public_6ac68f5
#undef public_6ac68ff
#undef public_6ac6903
#undef public_6ac6929
#undef public_6ac692d
#undef public_6ac694f
#undef public_6ac695f
#undef public_6ac6961
#undef public_6ac697e

#pragma init_seg(compiler)
extern "C" void const* const public_6ac659b = __AsmFindLabelExport(&internal_6ac61a0, 0x6ac659b);
extern "C" void const* const public_6ac6633 = __AsmFindLabelExport(&internal_6ac61a0, 0x6ac6633);
extern "C" void const* const public_6ac68ff = __AsmFindLabelExport(&internal_6ac61a0, 0x6ac68ff);
