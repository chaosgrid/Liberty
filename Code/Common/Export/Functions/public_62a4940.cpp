#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a6930);
CLANG_FORWARD_PROC_SYMBOL(public_62bbd20);
CLANG_FORWARD_PROC_SYMBOL(public_62bbe60);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_62f1250);
CLANG_FORWARD_PROC_SYMBOL(public_62fa6c0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_633c380);
CLANG_FORWARD_PROC_SYMBOL(public_633c400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);
CLANG_FORWARD_JUMP_SYMBOL(public_6393e3e);

#define public_62a4987 _public_62a4987
#define public_62a4990 _public_62a4990
#define public_62a49b3 _public_62a49b3
#define public_62a49d0 _public_62a49d0
#define public_62a49ef _public_62a49ef
#define public_62a4a08 _public_62a4a08
#define public_62a4a27 _public_62a4a27
#define public_62a4a40 _public_62a4a40
#define public_62a4a5f _public_62a4a5f
#define public_62a4ab0 _public_62a4ab0
#define public_62a4b1d _public_62a4b1d
#define public_62a4b66 _public_62a4b66
#define public_62a4b7f _public_62a4b7f
#define public_62a4b9a _public_62a4b9a
#define public_62a4bb3 _public_62a4bb3
#define public_62a4bca _public_62a4bca
#define public_62a4bdf _public_62a4bdf
#define public_62a4ca0 _public_62a4ca0
#define public_62a4cda _public_62a4cda
#define public_62a4d14 _public_62a4d14
#define public_62a4d60 _public_62a4d60
#define public_62a4da7 _public_62a4da7
#define public_62a4e06 _public_62a4e06
#define public_62a4e1c _public_62a4e1c
#define public_62a4e30 _public_62a4e30
#define public_62a4e6f _public_62a4e6f
#define public_62a4e71 _public_62a4e71
#define public_62a4e7f _public_62a4e7f
#define public_62a4e92 _public_62a4e92
#define public_62a4eea _public_62a4eea
#define public_62a4efb _public_62a4efb
#define public_62a4f30 _public_62a4f30
#define public_62a4f71 _public_62a4f71
#define public_62a4fac _public_62a4fac
#define public_62a4fb2 _public_62a4fb2
#define public_62a4fe9 _public_62a4fe9
#define public_62a4ffd _public_62a4ffd
#define public_62a506c _public_62a506c
#define public_62a506e _public_62a506e
#define public_62a5092 _public_62a5092
#define public_62a50bc _public_62a50bc
#define public_62a50e4 _public_62a50e4
#define public_62a5113 _public_62a5113
#define public_62a5149 _public_62a5149
#define public_62a5153 _public_62a5153
#define public_62a5159 _public_62a5159
#define public_62a5161 _public_62a5161
#define public_62a518c _public_62a518c
#define public_62a5196 _public_62a5196
#define public_62a519b _public_62a519b
#define public_62a51d5 _public_62a51d5
#define public_62a521d _public_62a521d
#define public_62a5231 _public_62a5231
#define public_62a523a _public_62a523a
#define public_62a5250 _public_62a5250
#define public_62a5278 _public_62a5278
#define public_62a5289 _public_62a5289

PROC_DECLARE(0x62a4940, internal_62a4940, public_62a4940);
extern "C" NAKED register_t __cdecl internal_62a4940()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393e3e @0x62a4942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393e3e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x74
        mov eax, dword ptr ss : [esp+0x88]
        push ebp
        mov ebp, dword ptr ss : [esp+0x88]
        push esi
        mov esi, ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0xC], eax
        call public_6310070
        test al, al
        je public_62a5289
        push ebx
        push edi
        jmp public_62a4990
        public_62a4987 : nop
        mov esi, dword ptr ss : [esp+0x10]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_62a4990 : nop
        push offset public_639dfcc @0x62a4990*/
  FIXUP public_62a4990 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dfcc
        mov ecx, ebp
        call public_63103c0
        test al, al
        mov ecx, ebp
        je public_62a4e30
        call public_6310170
        test al, al
        je public_62a5278
/*FIXUP public_62a49b3 : nop
        push offset public_639dfbc @0x62a49b3*/
  FIXUP public_62a49b3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dfbc
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62a49ef
        mov eax, dword ptr ss : [esp+0x10]
        xor esi, esi
        lea edi, ds:[eax+0x50]
        lea esp, ss:[esp]
        public_62a49d0 : nop
        push esi
        mov ecx, ebp
        call public_63108f0
        fmul dword ptr ds : [public_639d210]
        inc esi
        add edi, 4
        cmp esi, 4
        fstp dword ptr ds : [edi-4]
        jl public_62a49d0
        jmp public_62a4e1c
/*FIXUP public_62a49ef : nop
        push offset public_639dfac @0x62a49ef*/
  FIXUP public_62a49ef : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dfac
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62a4a27
        mov ecx, dword ptr ss : [esp+0x10]
        xor esi, esi
        lea edi, ds:[ecx+0x60]
        public_62a4a08 : nop
        push esi
        mov ecx, ebp
        call public_63108f0
        fmul dword ptr ds : [public_639d210]
        inc esi
        add edi, 4
        cmp esi, 4
        fstp dword ptr ds : [edi-4]
        jl public_62a4a08
        jmp public_62a4e1c
/*FIXUP public_62a4a27 : nop
        push offset public_639df9c @0x62a4a27*/
  FIXUP public_62a4a27 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df9c
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62a4a5f
        mov edx, dword ptr ss : [esp+0x10]
        xor esi, esi
        lea edi, ds:[edx+0x70]
        public_62a4a40 : nop
        push esi
        mov ecx, ebp
        call public_63108f0
        fmul dword ptr ds : [public_639d210]
        inc esi
        add edi, 4
        cmp esi, 4
        fstp dword ptr ds : [edi-4]
        jl public_62a4a40
        jmp public_62a4e1c
/*FIXUP public_62a4a5f : nop
        push offset public_639df90 @0x62a4a5f*/
  FIXUP public_62a4a5f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df90
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62a4e1c
        xor ebx, ebx
        push ebx
        mov ecx, ebp
        call public_6310a30
        push eax
        call public_630d3f0
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_62f1250
        push eax
        call public_62fa6c0
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_62a4ab0
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x20]
        public_62a4ab0 : nop
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x80], 0
        call public_62748a0
        mov byte ptr ss : [esp+0x81], 0
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x98], ebx
        call public_62a6930
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        je public_62a4b1d
        call public_62f0d50
        public_62a4b1d : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [eax+4]
        add ebx, 8
        push 1
        mov ecx, ebp
        mov dword ptr ds : [ebx], esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebp
        call public_63108f0
        fstp dword ptr ss : [esp+0x18]
        push 3
        mov ecx, ebp
        call public_63108f0
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62a4b66
        mov dword ptr ss : [esp+0x14], 0xBF800000
        jmp public_62a4b7f
        public_62a4b66 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62a4b7f
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_62a4b7f : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62a4b9a
        mov dword ptr ss : [esp+0x18], 0xBF800000
        jmp public_62a4bb3
        public_62a4b9a : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62a4bb3
        mov dword ptr ss : [esp+0x18], 0x3F800000
        public_62a4bb3 : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62a4bca
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        jmp public_62a4bdf
        public_62a4bca : nop
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62a4bdf
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        public_62a4bdf : nop
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+8], edx
        fild dword ptr ds : [edi+0xC]
        push 4
        mov ecx, ebp
        fmul qword ptr ds : [public_639df88]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        call public_6310560
        test al, al
        jne public_62a4ca0
        push 5
        mov ecx, ebp
        call public_6310560
        test al, al
        jne public_62a4ca0
        push 6
        mov ecx, ebp
        call public_6310560
        test al, al
        jne public_62a4ca0
        push 5
        mov ecx, ebp
        call public_63108f0
        fstp qword ptr ss : [esp+0x18]
        push 4
        mov ecx, ebp
        call public_63108f0
        fstp dword ptr ss : [esp+0x40]
        fld qword ptr ss : [esp+0x18]
        push 6
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x48]
        call public_63108f0
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x28], eax
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        jmp public_62a4cda
        lea ecx, ds:[ecx]
/*FIXUP public_62a4ca0 : nop
        push offset public_639df58 @0x62a4ca0*/
  FIXUP public_62a4ca0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df58
        push 0x167
/*FIXUP push offset public_639df28 @0x62a4caa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df28
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62a4cb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        fld dword ptr ds : [public_6399408]
        add esp, 0x14
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        public_62a4cda : nop
        fmul dword ptr ds : [public_639d210]
        mov eax, 0x3F800000
        mov dword ptr ds : [ebx+0x30], eax
        mov dword ptr ds : [ebx+0x20], eax
        fld st(0)
        mov dword ptr ds : [ebx+0x10], eax
        fcos 
        xor eax, eax
        mov dword ptr ds : [ebx+0x2C], eax
        mov dword ptr ds : [ebx+0x28], eax
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x1C], eax
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ds : [ebx+0x14], eax
        lea eax, ds:[ebx+0x28]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x18]
        fsin 
        public_62a4d14 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax-4]
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_62a4d14
        fstp st(0)
        lea eax, ds:[ebx+0x28]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, 3
        fmul dword ptr ds : [public_639d210]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x18]
        fsin 
        lea esp, ss:[esp]
        public_62a4d60 : nop
        fld dword ptr ds : [eax-0x18]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        faddp 
        fstp dword ptr ds : [eax-0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-4]
        jne public_62a4d60
        fstp st(0)
        lea eax, ds:[ebx+0x1C]
        fld dword ptr ss : [esp+0x30]
        mov ecx, 3
        fmul dword ptr ds : [public_639d210]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x18]
        fsin 
        public_62a4da7 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax-4]
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_62a4da7
        push 7
        fstp st(0)
        mov ecx, ebp
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        call public_6310560
        test al, al
        jne public_62a4e1c
        push 7
        mov ecx, ebp
        call public_6310a30
        mov edi, offset public_639df20
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        jne public_62a4e06
        mov byte ptr ds : [ebx+0x34], 1
        jmp public_62a4e1c
        public_62a4e06 : nop
        mov esi, eax
        mov edi, offset public_639df10
        mov ecx, 0xD
        xor eax, eax
        repe cmpsb
        jne public_62a4e1c
        mov byte ptr ds : [ebx+0x35], 1
        public_62a4e1c : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        jne public_62a49b3
        jmp public_62a5278
/*FIXUP public_62a4e30 : nop
        push offset public_639df00 @0x62a4e30*/
  FIXUP public_62a4e30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df00
        call public_63103c0
        test al, al
        je public_62a4ffd
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        jne public_62a4e7f
        push 0x1C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x8C], 1
        je public_62a4e6f
        mov ecx, eax
        call public_62bbd20
        jmp public_62a4e71
        public_62a4e6f : nop
        xor eax, eax
        public_62a4e71 : nop
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x30], eax
        public_62a4e7f : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        je public_62a5278
        mov ebx, dword ptr ss : [esp+0x10]
/*FIXUP public_62a4e92 : nop
        push offset public_639def4 @0x62a4e92*/
  FIXUP public_62a4e92 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639def4
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a4efb
        call public_6310b70
        mov ecx, dword ptr ds : [ebx+0x40]
        mov esi, eax
        push esi
        push ecx
        call public_633c380
        add esp, 8
        test eax, eax
        jne public_62a4eea
        mov ecx, ebp
        mov edi, 0x100001
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push esi
        push 0x18C
/*FIXUP push offset public_639df28 @0x62a4ed5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df28
/*FIXUP push offset public_639de98 @0x62a4eda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de98
        push edi
        call dword ptr ds : [edx]
        add esp, 0x18
        jmp public_62a4fe9
        public_62a4eea : nop
        mov esi, dword ptr ds : [ebx+0x28]
        mov ecx, dword ptr ds : [ebx+0x30]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx]
        jmp public_62a4fe9
/*FIXUP public_62a4efb : nop
        push offset public_639de84 @0x62a4efb*/
  FIXUP public_62a4efb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de84
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a4f30
        push 0
        call public_63108f0
        call public_6391dae
        test eax, eax
        jle public_62a4fe9
        mov ecx, dword ptr ds : [ebx+0x30]
        call public_62bbe60
        mov byte ptr ds : [eax+8], 1
        jmp public_62a4fe9
/*FIXUP public_62a4f30 : nop
        push offset public_639de74 @0x62a4f30*/
  FIXUP public_62a4f30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de74
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a4f71
        push 0
        call public_63108f0
        call public_6391dae
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jle public_62a4fe9
        fild dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x30]
        fstp dword ptr ss : [esp+0x18]
        call public_62bbe60
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x10], ecx
        jmp public_62a4fe9
/*FIXUP public_62a4f71 : nop
        push offset public_639de58 @0x62a4f71*/
  FIXUP public_62a4f71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de58
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a4fb2
        push 0
        call public_63108f0
        call public_6391dae
        test eax, eax
        jle public_62a4fe9
        mov ecx, dword ptr ds : [ebx+0x30]
        call public_62bbe60
        mov esi, eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        cmp eax, 1
        je public_62a4fac
        cmp eax, 2
        jne public_62a4fe9
        public_62a4fac : nop
        mov byte ptr ds : [esi+9], 1
        jmp public_62a4fe9
/*FIXUP public_62a4fb2 : nop
        push offset public_639de40 @0x62a4fb2*/
  FIXUP public_62a4fb2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de40
        call public_6310410
        test al, al
        je public_62a4fe9
        push 0
        mov ecx, ebp
        call public_63108f0
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62a4fe9
        mov ecx, dword ptr ds : [ebx+0x30]
        call public_62bbe60
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0xC], ecx
        public_62a4fe9 : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        jne public_62a4e92
        jmp public_62a5278
/*FIXUP public_62a4ffd : nop
        push offset public_639de30 @0x62a4ffd*/
  FIXUP public_62a4ffd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de30
        mov ecx, ebp
        call public_63103c0
        test al, al
        je public_62a5278
        push 0x28
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x8C], 2
        je public_62a506c
        mov ecx, esi
        call public_6333e40
        lea ecx, ds:[esi+4]
        call public_6333e40
        lea ecx, ds:[esi+8]
        call public_6333e40
        lea ecx, ds:[esi+0xC]
        call public_6333e40
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], 0x64
        mov dword ptr ds : [esi+0x24], eax
        jmp public_62a506e
        public_62a506c : nop
        xor esi, esi
        public_62a506e : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        xor bl, bl
        mov dword ptr ss : [esp+0x18], 0
        call public_6310170
        test al, al
        je public_62a5278
/*FIXUP public_62a5092 : nop
        push offset public_639de18 @0x62a5092*/
  FIXUP public_62a5092 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de18
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a50bc
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov bl, 1
        jmp public_62a51d5
/*FIXUP public_62a50bc : nop
        push offset public_639de00 @0x62a50bc*/
  FIXUP public_62a50bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639de00
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a50e4
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov bl, 1
        jmp public_62a51d5
/*FIXUP public_62a50e4 : nop
        push offset public_639ddf8 @0x62a50e4*/
  FIXUP public_62a50e4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ddf8
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a5113
        call public_6310b70
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ds : [edx+0x40]
        push eax
        call public_633c400
        add esp, 8
        mov dword ptr ss : [esp+0x18], eax
        jmp public_62a51d5
/*FIXUP public_62a5113 : nop
        push offset public_639dde4 @0x62a5113*/
  FIXUP public_62a5113 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dde4
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a5161
        push 0
        call public_63108f0
        call public_6391dae
        push 1
        mov ecx, ebp
        mov edi, eax
        call public_63108f0
        call public_6391dae
        cmp edi, 1
        jge public_62a5149
        mov edi, 1
        public_62a5149 : nop
        cmp eax, 1
        jge public_62a5153
        mov eax, 1
        public_62a5153 : nop
        cmp eax, edi
        jge public_62a5159
        mov edi, eax
        public_62a5159 : nop
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], eax
        jmp public_62a51d5
/*FIXUP public_62a5161 : nop
        push offset public_639ddcc @0x62a5161*/
  FIXUP public_62a5161 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ddcc
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62a519b
        push 0
        call public_63108f0
        call public_6391dae
        cmp eax, 1
        jge public_62a518c
        mov eax, 1
        mov dword ptr ds : [esi+0x24], eax
        jmp public_62a51d5
        public_62a518c : nop
        cmp eax, 0x64
        jle public_62a5196
        mov eax, 0x64
        public_62a5196 : nop
        mov dword ptr ds : [esi+0x24], eax
        jmp public_62a51d5
/*FIXUP public_62a519b : nop
        push offset public_639ddb4 @0x62a519b*/
  FIXUP public_62a519b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ddb4
        call public_6310410
        test al, al
        jne public_62a51d5
/*FIXUP push offset public_639dd9c @0x62a51a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dd9c
        mov ecx, ebp
        call public_6310410
        test al, al
        jne public_62a51d5
/*FIXUP push offset public_639dd88 @0x62a51b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dd88
        mov ecx, ebp
        call public_6310410
        test al, al
        jne public_62a51d5
/*FIXUP push offset public_639dd6c @0x62a51c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dd6c
        mov ecx, ebp
        call public_6310410
        public_62a51d5 : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        jne public_62a5092
        test bl, bl
        je public_62a5278
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_62a523a
        mov ebx, eax
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x38]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62a521d
        mov edi, eax
        public_62a521d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62a5231
        mov dword ptr ds : [eax], ebx
        public_62a5231 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x3C]
        jmp public_62a5278
        public_62a523a : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x28]
        test ecx, ecx
        je public_62a5250
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x8C]
        jmp public_62a5278
        public_62a5250 : nop
        mov ecx, ebp
        mov esi, 0x100001
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x246
/*FIXUP push offset public_639df28 @0x62a5268*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639df28
/*FIXUP push offset public_639dd10 @0x62a526d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dd10
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_62a5278 : nop
        mov ecx, ebp
        call public_6310070
        test al, al
        jne public_62a4987
        pop edi
        pop ebx
        public_62a5289 : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x80
        ret 8
        UNREACHABLE_TRAP(0x62a4940)
    }
}

#undef public_62a4987
#undef public_62a4990
#undef public_62a49b3
#undef public_62a49d0
#undef public_62a49ef
#undef public_62a4a08
#undef public_62a4a27
#undef public_62a4a40
#undef public_62a4a5f
#undef public_62a4ab0
#undef public_62a4b1d
#undef public_62a4b66
#undef public_62a4b7f
#undef public_62a4b9a
#undef public_62a4bb3
#undef public_62a4bca
#undef public_62a4bdf
#undef public_62a4ca0
#undef public_62a4cda
#undef public_62a4d14
#undef public_62a4d60
#undef public_62a4da7
#undef public_62a4e06
#undef public_62a4e1c
#undef public_62a4e30
#undef public_62a4e6f
#undef public_62a4e71
#undef public_62a4e7f
#undef public_62a4e92
#undef public_62a4eea
#undef public_62a4efb
#undef public_62a4f30
#undef public_62a4f71
#undef public_62a4fac
#undef public_62a4fb2
#undef public_62a4fe9
#undef public_62a4ffd
#undef public_62a506c
#undef public_62a506e
#undef public_62a5092
#undef public_62a50bc
#undef public_62a50e4
#undef public_62a5113
#undef public_62a5149
#undef public_62a5153
#undef public_62a5159
#undef public_62a5161
#undef public_62a518c
#undef public_62a5196
#undef public_62a519b
#undef public_62a51d5
#undef public_62a521d
#undef public_62a5231
#undef public_62a523a
#undef public_62a5250
#undef public_62a5278
#undef public_62a5289
