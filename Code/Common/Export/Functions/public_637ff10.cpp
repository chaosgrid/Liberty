#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_637ff10);
CLANG_FORWARD_PROC_SYMBOL(public_6382e70);

#define public_637ff5d _public_637ff5d
#define public_637ff5f _public_637ff5f
#define public_637ff72 _public_637ff72
#define public_637ff87 _public_637ff87
#define public_637ff89 _public_637ff89
#define public_637ffa2 _public_637ffa2
#define public_637ffac _public_637ffac
#define public_637ffb0 _public_637ffb0
#define public_637ffd5 _public_637ffd5
#define public_638007d _public_638007d
#define public_638008a _public_638008a
#define public_63800d1 _public_63800d1
#define public_63800ff _public_63800ff
#define public_6380118 _public_6380118
#define public_638012f _public_638012f
#define public_6380145 _public_6380145
#define public_6380160 _public_6380160
#define public_6380166 _public_6380166
#define public_638017c _public_638017c
#define public_63801bb _public_63801bb
#define public_63801c1 _public_63801c1
#define public_63801f0 _public_63801f0
#define public_6380202 _public_6380202
#define public_638024e _public_638024e
#define public_6380260 _public_6380260
#define public_638027d _public_638027d
#define public_63802de _public_63802de
#define public_63802f8 _public_63802f8
#define public_6380311 _public_6380311
#define public_638032c _public_638032c
#define public_6380345 _public_6380345
#define public_6380384 _public_6380384
#define public_63803c2 _public_63803c2
#define public_63803f0 _public_63803f0
#define public_63803f8 _public_63803f8
#define public_6380425 _public_6380425
#define public_6380438 _public_6380438
#define public_6380480 _public_6380480
#define public_63804a3 _public_63804a3
#define public_63804ac _public_63804ac
#define public_638050f _public_638050f
#define public_638055d _public_638055d
#define public_6380569 _public_6380569
#define public_638056c _public_638056c
#define public_63805a0 _public_63805a0
#define public_63805df _public_63805df
#define public_63805f0 _public_63805f0
#define public_638061e _public_638061e

PROC_DECLARE(0x637ff10, internal_637ff10, public_637ff10);
extern "C" NAKED register_t __cdecl internal_637ff10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x44
        mov eax, dword ptr ds : [public_658b078]
        mov ecx, dword ptr ss : [ebp+0x20]
        push ebx
        push esi
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [ebp+0x10]
        push edi
        xor edi, edi
        cmp eax, edi
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 0xFFDFFFFF
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x20], edi
        je public_637ff72
        cmp eax, edi
        jne public_637ff72
        cmp ecx, edi
        jne public_637ff72
        mov ebx, 1
        mov dword ptr ss : [esp+0x14], ebx
        public_637ff5d : nop
        xor edx, edx
        public_637ff5f : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_637ff87
        cmp ecx, edi
        je public_637ff87
        mov esi, 1
        jmp public_637ff89
        public_637ff72 : nop
        xor ebx, ebx
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ebx
        je public_637ff5d
        cmp ecx, edi
        je public_637ff5d
        mov edx, 1
        jmp public_637ff5f
        public_637ff87 : nop
        xor esi, esi
        public_637ff89 : nop
        cmp edx, edi
        je public_637ffac
        cmp dword ptr ss : [ebp+0x10], edi
        jne public_637ffa2
        cmp dword ptr ds : [public_658b018], edi
        jne public_637ffa2
        cmp dword ptr ds : [public_658b0a8], edi
        je public_637ffac
        public_637ffa2 : nop
        mov dword ptr ss : [esp+0x24], 1
        jmp public_637ffb0
        public_637ffac : nop
        mov dword ptr ss : [esp+0x24], edi
        public_637ffb0 : nop
        cmp ebx, edi
        mov ebx, dword ptr ss : [ebp+0xC]
        jne public_637ffd5
        cmp edx, edi
        jne public_637ffd5
        cmp esi, edi
        jne public_637ffd5
/*FIXUP push offset public_63f656c @0x637ffbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f656c
        call public_6356960
        push edi
        push ebx
        push 5
        call public_6378600
        add esp, 0x10
        public_637ffd5 : nop
        mov eax, dword ptr ds : [public_658b200]
        test eax, eax
        mov edi, dword ptr ds : [public_63991e8]
        je public_638007d
        mov eax, dword ptr ds : [public_658b208]
        test eax, eax
        jl public_638007d
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6370570
        mov ecx, dword ptr ds : [public_658b208]
        add esp, 4
        cmp ecx, eax
        jne public_638007d
        mov edx, dword ptr ds : [public_658b200]
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov dword ptr ds : [public_658b078], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ebx+0x4C]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63f6524 @0x6380024*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6524
        call public_6356960
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push esi
        push edx
        push eax
/*FIXUP push offset public_63f64e4 @0x6380047*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f64e4
        push ecx
        call edi
        mov edx, dword ptr ds : [public_658b870]
        add esp, 0x18
        push edx
/*FIXUP push offset public_63f64c0 @0x6380059*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f64c0
        call public_6356960
        mov eax, dword ptr ds : [public_658bf58]
        mov ecx, dword ptr ds : [public_658b7fc]
        add esp, 8
        push eax
/*FIXUP push offset public_63f64a8 @0x6380072*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f64a8
        push ecx
        call edi
        add esp, 0xC
        public_638007d : nop
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        je public_638008a
        mov dword ptr ds : [eax], 1
        public_638008a : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 0x80
        mov edi, dword ptr ss : [ebp+0x1C]
        jne public_638012f
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x24]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [edx], 1
        call public_637fd60
        mov ecx, dword ptr ds : [ebx+0x50]
        add esp, 0xC
        test ecx, 0x10000
        je public_63800d1
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        jne public_63800ff
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        jne public_63800ff
        public_63800d1 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_63800ff
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        je public_638061e
        mov ebx, dword ptr ss : [ebp+0xC]
        public_63800ff : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_638012f
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        je public_6380118
        test ecx, 0x40000
        je public_638012f
        public_6380118 : nop
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [ebx+8]
        fnstsw ax
        test ah, 0x41
        jne public_638012f
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+0xC], edx
        public_638012f : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6380145
        fld qword ptr ds : [public_658b6a0]
        fadd st(0), st
        fstp qword ptr ss : [esp+0x48]
        jmp public_638017c
        public_6380145 : nop
        fld qword ptr ds : [public_658b0c8]
        fcomp qword ptr ds : [public_658b098]
        fnstsw ax
        test ah, 1
        je public_6380160
        fld qword ptr ds : [public_658b098]
        jmp public_6380166
        public_6380160 : nop
        fld qword ptr ds : [public_658b0c8]
        public_6380166 : nop
        fld qword ptr ds : [public_658b6a0]
        fadd st(0), st
        fadd st, st(1)
        fadd qword ptr ds : [public_658b888]
        fstp qword ptr ss : [esp+0x48]
        fstp st(0)
        public_638017c : nop
        fld qword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        fsub qword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        fstp qword ptr ss : [esp+0x38]
        je public_63801f0
        fld qword ptr ds : [public_658b0c8]
        fcomp qword ptr ds : [public_658b098]
        fnstsw ax
        test ah, 1
        je public_63801bb
        fld qword ptr ds : [public_658b098]
        jmp public_63801c1
        public_63801bb : nop
        fld qword ptr ds : [public_658b0c8]
        public_63801c1 : nop
        fld qword ptr ds : [public_658b6a0]
        fsub st, st(1)
        fchs 
        fstp qword ptr ss : [esp+0x40]
        fstp st(0)
        fld qword ptr ss : [esp+0x38]
        fcomp qword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_63801f0
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        public_63801f0 : nop
        mov eax, dword ptr ds : [public_658b8e0]
        inc eax
        mov dword ptr ds : [public_658b8e0], eax
        mov dword ptr ds : [ebx+0x48], eax
        mov dword ptr ss : [esp+0x18], ebx
        public_6380202 : nop
        cmp dword ptr ds : [public_658b078], 4
        mov dword ptr ss : [esp+0x28], 0
        jl public_638024e
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ds : [edx+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f6458 @0x638023f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6458
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x24
        public_638024e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x3C]
        test eax, eax
        je public_6380480
        lea ebx, ds:[eax+4]
        public_6380260 : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        je public_6380480
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_638027d
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 2
        je public_6380260
        public_638027d : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x80
        jne public_63803f8
        mov eax, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], eax
        je public_6380260
        mov dword ptr ds : [esi+0x48], eax
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [eax]
        inc edx
        push edi
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        call public_637fd60
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 0xC
        test eax, eax
        jne public_63802de
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        jne public_63802de
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_63804a3
        mov ecx, dword ptr ss : [esp+0x18]
        test dword ptr ds : [ecx+0x50], 0x10000
        je public_63804a3
        public_63802de : nop
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_638032c
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        je public_63802f8
        test dword ptr ds : [esi+0x50], 0x40000
        je public_6380311
        public_63802f8 : nop
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_6380311
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6380345
        public_6380311 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6380345
        fld qword ptr ds : [edi]
        fcomp qword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 1
        jne public_6380260
        jmp public_6380345
        public_638032c : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6380345
        fld qword ptr ds : [edi]
        fcomp qword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 1
        jne public_6380260
        public_6380345 : nop
        fld qword ptr ds : [edi]
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_63803f8
        test dword ptr ds : [esi+0x50], 0x10000
        je public_6380384
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_63803f8
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        jne public_63803f8
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        jne public_63803f8
        public_6380384 : nop
        test ecx, ecx
        je public_63803c2
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        fld qword ptr ss : [esp+0x30]
        fsub qword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x10], esi
        fst qword ptr ss : [esp+0x38]
        fcomp qword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_63803f0
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        jmp public_63803f0
        public_63803c2 : nop
        fld qword ptr ss : [esp+0x48]
        fadd qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [edi]
        fnstsw ax
        test ah, 1
        jne public_6380438
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        fld qword ptr ss : [esp+0x30]
        fsub qword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x10], esi
        fstp qword ptr ss : [esp+0x38]
        public_63803f0 : nop
        mov dword ptr ss : [esp+0x28], 1
        public_63803f8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, eax
        inc eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6380425
        mov edx, dword ptr ds : [public_658b958]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [public_658b958]
        push 1
        push eax
        call public_636ee40
        add esp, 8
        jmp public_6380260
        public_6380425 : nop
        push esi
/*FIXUP push offset public_658b958 @0x6380426*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b958
        call public_636e1b0
        add esp, 8
        jmp public_6380260
        public_6380438 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        fld qword ptr ss : [esp+0x30]
        fsub qword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], esi
        fstp qword ptr ss : [esp+0x38]
        je public_6380202
        mov eax, dword ptr ds : [public_658b8e0]
        inc eax
        mov dword ptr ds : [public_658b8e0], eax
        mov dword ptr ds : [esi+0x48], eax
        jmp public_6380202
        public_6380480 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_63804ac
        mov eax, dword ptr ds : [public_658b958]
        push eax
        call public_636e460
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_63804ac
        jmp public_6380202
        public_63804a3 : nop
        mov dword ptr ss : [esp+0x10], esi
        jmp public_638061e
        public_63804ac : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_63805f0
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_638050f
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b208]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63f6524 @0x63804d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6524
        call public_6356960
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 0x14
        push edx
/*FIXUP push offset public_63f63b4 @0x63804ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f63b4
        push eax
        call dword ptr ds : [public_63991e8]
        push 0
        push esi
        push 5
        mov dword ptr ds : [public_658b05c], 1
        call public_6378600
        add esp, 0x18
        public_638050f : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6380569
        mov eax, dword ptr ds : [public_658b8a8]
        test eax, eax
        jne public_6380569
        fld qword ptr ds : [public_658b6a0]
        fchs 
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_6380569
        mov ebx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call public_6382e70
        add esp, 0x10
        test eax, eax
        je public_638055d
        mov dword ptr ds : [public_658b8a4], 1
        jmp public_638056c
        public_638055d : nop
        mov dword ptr ds : [public_658b8a8], 1
        jmp public_638056c
        public_6380569 : nop
        mov ebx, dword ptr ss : [ebp+0x24]
        public_638056c : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_63805f0
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [public_658b078], 4
        mov edx, dword ptr ds : [ecx+0x3C]
        mov esi, dword ptr ds : [edx+4]
        jl public_63805a0
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f6394 @0x6380591*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6394
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_63805a0 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp+8]
        push edi
        inc eax
        push esi
        push edx
        mov dword ptr ds : [ebx], eax
        call public_637fd60
        fld qword ptr ds : [edi]
        fcomp qword ptr ss : [esp+0x3C]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_63805f0
        test dword ptr ds : [esi+0x50], 0x10000
        je public_63805df
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        jne public_63805f0
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        jne public_63805f0
        public_63805df : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x10], esi
        public_63805f0 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        je public_638061e
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        je public_638061e
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ecx], 0
        public_638061e : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [public_658b078], edx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637ff10)
    }
}

#undef public_637ff5d
#undef public_637ff5f
#undef public_637ff72
#undef public_637ff87
#undef public_637ff89
#undef public_637ffa2
#undef public_637ffac
#undef public_637ffb0
#undef public_637ffd5
#undef public_638007d
#undef public_638008a
#undef public_63800d1
#undef public_63800ff
#undef public_6380118
#undef public_638012f
#undef public_6380145
#undef public_6380160
#undef public_6380166
#undef public_638017c
#undef public_63801bb
#undef public_63801c1
#undef public_63801f0
#undef public_6380202
#undef public_638024e
#undef public_6380260
#undef public_638027d
#undef public_63802de
#undef public_63802f8
#undef public_6380311
#undef public_638032c
#undef public_6380345
#undef public_6380384
#undef public_63803c2
#undef public_63803f0
#undef public_63803f8
#undef public_6380425
#undef public_6380438
#undef public_6380480
#undef public_63804a3
#undef public_63804ac
#undef public_638050f
#undef public_638055d
#undef public_6380569
#undef public_638056c
#undef public_63805a0
#undef public_63805df
#undef public_63805f0
#undef public_638061e
