#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_425680);
CLANG_FORWARD_PROC_SYMBOL(public_4256c0);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_426e00);
CLANG_FORWARD_PROC_SYMBOL(public_426e20);
CLANG_FORWARD_PROC_SYMBOL(public_427020);
CLANG_FORWARD_PROC_SYMBOL(public_427080);
CLANG_FORWARD_PROC_SYMBOL(public_427160);
CLANG_FORWARD_PROC_SYMBOL(public_4271f0);
CLANG_FORWARD_PROC_SYMBOL(public_4deb70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8bc0);

#define public_425ba9 _public_425ba9
#define public_425c19 _public_425c19
#define public_425c30 _public_425c30
#define public_425c3a _public_425c3a
#define public_425c91 _public_425c91
#define public_425cc4 _public_425cc4
#define public_425e30 _public_425e30
#define public_425e6a _public_425e6a
#define public_425e8d _public_425e8d
#define public_425f06 _public_425f06
#define public_425f38 _public_425f38
#define public_425f55 _public_425f55
#define public_425fc4 _public_425fc4
#define public_425ff3 _public_425ff3
#define public_425ffc _public_425ffc
#define public_426054 _public_426054
#define public_4260db _public_4260db
#define public_4260ee _public_4260ee
#define public_426158 _public_426158
#define public_426190 _public_426190
#define public_4261e4 _public_4261e4
#define public_426222 _public_426222
#define public_426293 _public_426293
#define public_426299 _public_426299
#define public_4262bd _public_4262bd
#define public_4262c3 _public_4262c3
#define public_4262e7 _public_4262e7
#define public_4262ed _public_4262ed
#define public_426311 _public_426311
#define public_426317 _public_426317
#define public_426355 _public_426355
#define public_4263b7 _public_4263b7
#define public_4263f1 _public_4263f1
#define public_42642c _public_42642c
#define public_426449 _public_426449
#define public_4264d6 _public_4264d6
#define public_4264e9 _public_4264e9
#define public_4264f1 _public_4264f1
#define public_426513 _public_426513
#define public_426590 _public_426590
#define public_4265e5 _public_4265e5
#define public_426607 _public_426607
#define public_426629 _public_426629
#define public_42664b _public_42664b
#define public_426680 _public_426680
#define public_4266c1 _public_4266c1
#define public_426770 _public_426770
#define public_4267a5 _public_4267a5
#define public_4267c8 _public_4267c8
#define public_4267e5 _public_4267e5
#define public_4267fa _public_4267fa
#define public_42683c _public_42683c
#define public_42687a _public_42687a
#define public_42695d _public_42695d
#define public_42698c _public_42698c
#define public_4269a3 _public_4269a3
#define public_4269e0 _public_4269e0
#define public_426a01 _public_426a01
#define public_426a10 _public_426a10
#define public_426a32 _public_426a32
#define public_426ac6 _public_426ac6
#define public_426ad3 _public_426ad3
#define public_426b1a _public_426b1a
#define public_426b21 _public_426b21
#define public_426b5e _public_426b5e
#define public_426b6f _public_426b6f
#define public_426b87 _public_426b87
#define public_426bb1 _public_426bb1
#define public_426bcf _public_426bcf
#define public_426bd8 _public_426bd8
#define public_426c4a _public_426c4a
#define public_426c57 _public_426c57
#define public_426c8c _public_426c8c
#define public_426cbc _public_426cbc
#define public_426cd4 _public_426cd4
#define public_426cdd _public_426cdd
#define public_426cf2 _public_426cf2
#define public_426cfd _public_426cfd
#define public_426d04 _public_426d04
#define public_426d3b _public_426d3b
#define public_426d50 _public_426d50
#define public_426d6c _public_426d6c
#define public_426d96 _public_426d96
#define public_426db8 _public_426db8
#define public_426dc1 _public_426dc1

PROC_DECLARE(0x425b30, internal_425b30, public_425b30);
extern "C" NAKED register_t __cdecl internal_425b30()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5b8bc0 @0x425b38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8bc0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1D14
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x24], ecx
        push edi
        lea ecx, ss:[esp+0x5B0]
        call dword ptr ds : [public_5c605c]
        mov al, byte ptr ds : [public_667a1c]
        xor ebx, ebx
        test al, 1
        mov dword ptr ss : [esp+0x1D2C], ebx
        jne public_425ba9
        mov dl, al
        mov al, byte ptr ss : [esp+0x13]
        or dl, 1
/*FIXUP push offset _public_426e00 @0x425b7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_426e00
        mov byte ptr ds : [public_667a1c], dl
        mov byte ptr ds : [public_667a0c], al
        mov dword ptr ds : [public_667a10], ebx
        mov dword ptr ds : [public_667a14], ebx
        mov dword ptr ds : [public_667a18], ebx
        call public_5b7e6c
        add esp, 4
        public_425ba9 : nop
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov dword ptr ss : [esp+0x48], ebx
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        push ecx
        push 4
        push eax
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x1D38]
        cmp eax, ebx
        je public_425c19
        mov edx, dword ptr ds : [eax]
        push 0x104
        lea ecx, ss:[esp+0x148]
        push ecx
        push eax
        call dword ptr ds : [edx+0x84]
        mov esi, dword ptr ss : [esp+0x1D34]
        push ebx
        push esi
        lea edx, ss:[esp+0x14C]
        push edx
        lea eax, ss:[esp+0x1B24]
        push ebx
        push eax
        call dword ptr ds : [public_5c70b8]
        add esp, 0x14
        jmp public_425c3a
        public_425c19 : nop
        mov esi, dword ptr ss : [esp+0x1D34]
        lea edx, ss:[esp+0x1B18]
        mov eax, esi
        sub edx, esi
        nop 
        lea esp, ss:[esp]
        public_425c30 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [eax+edx], cl
        inc eax
        test cl, cl
        jne public_425c30
        public_425c3a : nop
        push ebx
        lea ecx, ss:[esp+0x1B1C]
        push ecx
        lea ecx, ss:[esp+0x5B8]
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_4269e0
        lea ecx, ss:[esp+0x5B0]
        mov dword ptr ss : [esp+0x4A8], ebx
        mov byte ptr ss : [esp+0x4AC], 0
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x13], 1
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_426a01
        mov edi, dword ptr ds : [public_5c6cf4]
        mov ebp, dword ptr ds : [public_5c6038]
/*FIXUP public_425c91 : nop
        push offset public_5c99d4 @0x425c91*/
  FIXUP public_425c91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99d4
        lea ecx, ss:[esp+0x5B4]
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_5c6050]
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_426513
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_42698c
/*FIXUP public_425cc4 : nop
        push offset public_5c99cc @0x425cc4*/
  FIXUP public_425cc4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        lea ecx, ss:[esp+0x5B4]
        xor ebx, ebx
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_425e8d
        push ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x17], 1
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_5c6024]
        push eax
        lea ecx, ss:[esp+0x1C20]
        mov dword ptr ss : [esp+0x1C20], ebx
        mov byte ptr ss : [esp+0x1C24], bl
        call public_4271f0
        cmp dword ptr ss : [esp+0x1C1C], ebx
        je public_4264f1
        lea edx, ss:[esp+0x1C20]
        push edx
        lea eax, ss:[esp+0x4B0]
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4264f1
        lea ecx, ss:[esp+0x1C20]
        push ecx
        lea edx, ss:[esp+0x4B0]
        push 0x104
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x4A8], eax
        mov dword ptr ss : [esp+0x24], ebx
        xor eax, eax
        mov dword ptr ss : [esp+0x88], offset public_5c7388
        mov ecx, 0xB
        lea edi, ss:[esp+0x8C]
        rep stosd
        mov ecx, dword ptr ds : [public_5c6dd8]
        lea eax, ss:[esp+0x4AC]
        mov dword ptr ss : [esp+0x94], 0x80000000
        mov dword ptr ss : [esp+0x98], 1
        mov dword ptr ss : [esp+0xA0], 3
        mov dword ptr ss : [esp+0xA4], 0x8000080
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x84], 0x34
        mov dword ptr ss : [esp+0xB4], 0xFFFFFFFF
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x88]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x1D38], 1
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_425e30
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [public_667a14]
        lea eax, ss:[esp+0x6C]
        push eax
        push ecx
        mov ecx, offset public_667a0c
        call public_4deb70
        jmp public_425e6a
        lea ebx, ds:[ebx]
/*FIXUP public_425e30 : nop
        push offset public_5c865c @0x425e30*/
  FIXUP public_425e30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        lea edx, ss:[esp+0x4AC]
        push edx
/*FIXUP push offset public_5c865c @0x425e46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x14C
/*FIXUP push offset public_5c999c @0x425e50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9cac @0x425e5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9cac
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        public_425e6a : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1D2C], 0
        je public_4264f1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x24], ebx
        jmp public_4264f1
/*FIXUP public_425e8d : nop
        push offset public_5c9ca4 @0x425e8d*/
  FIXUP public_425e8d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ca4
        call edi
        test al, al
        jne public_4263b7
/*FIXUP push offset public_5c9c94 @0x425e9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9c94
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        jne public_4263b7
/*FIXUP push offset public_5c7998 @0x425eb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7998
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        je public_425ffc
        cmp dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x13], 1
        jne public_425f06
/*FIXUP push offset public_5c865c @0x425ed3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c865c @0x425ee7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x164
/*FIXUP push offset public_5c999c @0x425ef1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9c38 @0x425efb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9c38
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_425f06 : nop
        push ebx
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x354], ebx
        mov byte ptr ss : [esp+0x358], 0
        jne public_425f38
        mov dword ptr ss : [esp+0x354], ebx
        mov byte ptr ss : [esp+0x358], 0
        jmp public_425f55
        public_425f38 : nop
        push eax
        lea eax, ss:[esp+0x35C]
        push 0x104
        push eax
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x354], eax
        public_425f55 : nop
        lea ecx, ss:[esp+0x358]
        push ecx
        lea ecx, ss:[esp+0x12C]
        call public_4205c0
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x128]
        push edx
        call public_426e20
        mov esi, eax
        cmp dword ptr ds : [esi], ebx
        je public_425fc4
/*FIXUP push offset public_5c865c @0x425f80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        mov dword ptr ss : [esp+0x20], ebx
        call ebp
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x358]
        push ecx
/*FIXUP push offset public_5c865c @0x425fa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x16B
/*FIXUP push offset public_5c999c @0x425faa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9c00 @0x425fb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9c00
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        jmp public_4264f1
        public_425fc4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        call public_425680
        cmp dword ptr ds : [esi], ebx
        je public_425ff3
        push 0xBF800000
        push 0xBF800000
        push 0xBF800000
        push 0xBF800000
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, esi
        call public_4256c0
        public_425ff3 : nop
        mov dword ptr ss : [esp+0x1C], esi
        jmp public_4264f1
/*FIXUP public_425ffc : nop
        push offset public_5c9bf4 @0x425ffc*/
  FIXUP public_425ffc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9bf4
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        je public_426190
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        jne public_426054
/*FIXUP push offset public_5c865c @0x426022*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
/*FIXUP push offset public_5c865c @0x426030*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x175
/*FIXUP push offset public_5c999c @0x42603a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9bb4 @0x426044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9bb4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_426054 : nop
        push ebx
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6024]
        mov esi, eax
        push esi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x74], esi
        call dword ptr ds : [public_5c6d14]
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x74]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        test eax, eax
        je public_4260db
/*FIXUP push offset public_5c865c @0x426096*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x88]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        push esi
/*FIXUP push offset public_5c865c @0x4260bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x110
/*FIXUP push offset public_5c999c @0x4260c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
/*FIXUP push offset public_5c99dc @0x4260ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99dc
        push edx
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_4260ee
        public_4260db : nop
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        public_4260ee : nop
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_4264f1
        push esi
        lea ecx, ss:[esp+0x110]
        call public_4205c0
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x10C]
        push edx
        call public_426e20
        mov edi, eax
        cmp dword ptr ds : [edi], 0
        jne public_426158
        push ebx
        mov ecx, edi
        call public_425680
        cmp dword ptr ds : [edi], 0
        je public_4264f1
        push 0xBF800000
        push 0xBF800000
        push 0xBF800000
        push 0xBF800000
        push 0
        push 0
        push 0
        push 0
        mov ecx, edi
        call public_4256c0
        jmp public_4264f1
/*FIXUP public_426158 : nop
        push offset public_5c865c @0x426158*/
  FIXUP public_426158 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        push esi
/*FIXUP push offset public_5c865c @0x426167*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x17F
/*FIXUP push offset public_5c999c @0x426171*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9c00 @0x42617b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9c00
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_4264f1
/*FIXUP public_426190 : nop
        push offset public_5c9bb0 @0x426190*/
  FIXUP public_426190 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9bb0
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        je public_426355
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_4261e4
/*FIXUP push offset public_5c865c @0x4261ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c865c @0x4261c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x186
/*FIXUP push offset public_5c999c @0x4261ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9b60 @0x4261d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9b60
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_4264f1
        public_4261e4 : nop
        cmp dword ptr ss : [esp+0x1C], ebx
        jne public_426222
/*FIXUP push offset public_5c865c @0x4261ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c865c @0x4261fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x18B
/*FIXUP push offset public_5c999c @0x426208*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9b10 @0x426212*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9b10
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_4264f1
        public_426222 : nop
        push ebx
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x54]
        push 1
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x50]
        push 2
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x4C]
        push 3
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x5C]
        mov esi, dword ptr ds : [public_5c6cf8]
        push 4
        lea ecx, ss:[esp+0x5B4]
        call esi
        test al, al
        jne public_426293
        push 4
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        jmp public_426299
        public_426293 : nop
        fld qword ptr ds : [public_5c8ba8]
        public_426299 : nop
        push 5
        fstp dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x5B4]
        call esi
        test al, al
        jne public_4262bd
        push 5
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        jmp public_4262c3
        public_4262bd : nop
        fld qword ptr ds : [public_5c8ba8]
        public_4262c3 : nop
        push 6
        fstp dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x5B4]
        call esi
        test al, al
        jne public_4262e7
        push 6
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        jmp public_4262ed
        public_4262e7 : nop
        fld qword ptr ds : [public_5c8ba8]
        public_4262ed : nop
        push 7
        fstp dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x5B4]
        call esi
        test al, al
        jne public_426311
        push 7
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        jmp public_426317
        public_426311 : nop
        fld qword ptr ds : [public_5c8ba8]
        public_426317 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x58]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push eax
        mov eax, dword ptr ss : [esp+0x60]
        push ecx
        mov ecx, dword ptr ss : [esp+0x68]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        call public_4256c0
        mov dword ptr ss : [esp+0x1C], ebx
        jmp public_4264f1
        public_426355 : nop
        lea ecx, ss:[esp+0x5B0]
        call dword ptr ds : [public_5c60b8]
        push eax
        lea edx, ss:[esp+0x1B1C]
/*FIXUP push offset public_5c9af0 @0x42636a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9af0
        push edx
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea eax, ss:[esp+0x1B18]
        push eax
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x1B18]
        push ecx
        push 0x1A2
/*FIXUP push offset public_5c999c @0x42639d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4263a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_4264f1
        public_4263b7 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4263f1
/*FIXUP push offset public_5c865c @0x4263bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
/*FIXUP push offset public_5c865c @0x4263cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x155
/*FIXUP push offset public_5c999c @0x4263d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9bb4 @0x4263e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9bb4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4263f1 : nop
        push ebx
        lea ecx, ss:[esp+0x5B4]
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x17], 0
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x144], ebx
        mov byte ptr ss : [esp+0x148], 0
        jne public_42642c
        mov dword ptr ss : [esp+0x144], ebx
        mov byte ptr ss : [esp+0x148], 0
        jmp public_426449
        public_42642c : nop
        push eax
        lea ecx, ss:[esp+0x14C]
        push 0x104
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x144], eax
        public_426449 : nop
        lea eax, ss:[esp+0x148]
        lea edx, ss:[esp+0x148]
        push eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x7C], edx
        call dword ptr ds : [public_5c6d14]
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x7C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        test eax, eax
        je public_4264d6
/*FIXUP push offset public_5c865c @0x42648c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x6C]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        lea edx, ss:[esp+0x148]
        push edx
/*FIXUP push offset public_5c865c @0x4264ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x110
/*FIXUP push offset public_5c999c @0x4264c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
/*FIXUP push offset public_5c99dc @0x4264c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99dc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        jmp public_4264e9
        public_4264d6 : nop
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        public_4264e9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        public_4264f1 : nop
        lea ecx, ss:[esp+0x5B0]
        call dword ptr ds : [public_5c669c]
        test al, al
        mov edi, dword ptr ds : [public_5c6cf4]
        jne public_425cc4
        xor ebx, ebx
        jmp public_42698c
/*FIXUP public_426513 : nop
        push offset public_5c9ae8 @0x426513*/
  FIXUP public_426513 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ae8
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_42698c
        lea ecx, ss:[esp+0x5B0]
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ss : [esp+0x24C], ebx
        mov byte ptr ss : [esp+0x250], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x44], 0xBF800000
        mov dword ptr ss : [esp+0x34], 0xBF800000
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        mov dword ptr ss : [esp+0x40], 0xBF800000
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4267fa
        nop 
/*FIXUP public_426590 : nop
        push offset public_5c9ca4 @0x426590*/
  FIXUP public_426590 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ca4
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        jne public_4267a5
/*FIXUP push offset public_5c7998 @0x4265a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7998
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        jne public_4267a5
/*FIXUP push offset public_5c9ae4 @0x4265bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ae4
        lea ecx, ss:[esp+0x5B4]
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_4265e5
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        jmp public_4267e5
/*FIXUP public_4265e5 : nop
        push offset public_5c9ae0 @0x4265e5*/
  FIXUP public_4265e5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ae0
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_426607
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x38]
        jmp public_4267e5
/*FIXUP public_426607 : nop
        push offset public_5c9adc @0x426607*/
  FIXUP public_426607 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9adc
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_426629
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x30]
        jmp public_4267e5
/*FIXUP public_426629 : nop
        push offset public_5c9ad8 @0x426629*/
  FIXUP public_426629 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ad8
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_42664b
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x3C]
        jmp public_4267e5
/*FIXUP public_42664b : nop
        push offset public_5c9acc @0x42664b*/
  FIXUP public_42664b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9acc
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_426680
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x44]
        push 1
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x34]
        jmp public_4267e5
/*FIXUP public_426680 : nop
        push offset public_5c9ac0 @0x426680*/
  FIXUP public_426680 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ac0
        call edi
        test al, al
        lea ecx, ss:[esp+0x5B0]
        je public_4266c1
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fadd qword ptr ds : [public_5c89b8]
        push 1
        lea ecx, ss:[esp+0x5B4]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c6cfc]
        fadd qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp+0x40]
        jmp public_4267e5
/*FIXUP public_4266c1 : nop
        push offset public_5c9bb0 @0x4266c1*/
  FIXUP public_4266c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9bb0
        call edi
        test al, al
        je public_426770
        push ebx
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        push 1
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x38]
        push 2
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x30]
        push 3
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x3C]
        push 4
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x44]
        push 5
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x34]
        push 6
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x2C]
        push 7
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x40]
        jmp public_4267e5
        lea esp, ss:[esp]
/*FIXUP public_426770 : nop
        push offset public_5c865c @0x426770*/
  FIXUP public_426770 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c865c @0x426784*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x1CF
/*FIXUP push offset public_5c999c @0x42678e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100002
/*FIXUP push offset public_5c9a8c @0x426798*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9a8c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_4267e5
        public_4267a5 : nop
        push ebx
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        jne public_4267c8
        mov dword ptr ss : [esp+0x24C], ebx
        mov byte ptr ss : [esp+0x250], 0
        jmp public_4267e5
        public_4267c8 : nop
        push eax
        lea edx, ss:[esp+0x254]
        push 0x104
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x24C], eax
        public_4267e5 : nop
        lea ecx, ss:[esp+0x5B0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_426590
        public_4267fa : nop
        mov al, byte ptr ss : [esp+0x250]
        test al, al
        jne public_42683c
/*FIXUP push offset public_5c865c @0x426805*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
/*FIXUP push offset public_5c865c @0x426813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x1D4
/*FIXUP push offset public_5c999c @0x42681d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9a58 @0x426827*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9a58
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_42698c
        public_42683c : nop
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_42687a
/*FIXUP push offset public_5c865c @0x426842*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c9a48 @0x426856*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9a48
        push 0x1DA
/*FIXUP push offset public_5c999c @0x426860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x42686a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_42698c
        public_42687a : nop
        lea edx, ss:[esp+0x250]
        push edx
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xBC], ebx
        mov byte ptr ss : [esp+0xC0], 0
        call public_427020
        mov dword ptr ss : [esp+0xE0], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xDC], ebx
        lea eax, ss:[esp+0xDC]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea ecx, ss:[esp+0x464]
        mov byte ptr ss : [esp+0x1D34], 2
        call public_427160
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        lea edx, ss:[esp+0xD8]
        push edx
        mov byte ptr ss : [esp+0x1D34], 3
        call public_427080
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x478]
        mov byte ptr ss : [esp+0x1D2C], 2
        call public_426de0
        lea ecx, ss:[esp+0xDC]
        mov byte ptr ss : [esp+0x1D2C], 0
        call public_426de0
        mov eax, dword ptr ds : [esi+0x28]
        add esi, 0x28
        cmp eax, ebx
        jne public_4269a3
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        cmp dword ptr ds : [esi], ebx
        je public_42695d
        push 0xBF800000
        push 0xBF800000
        push 0xBF800000
        push 0xBF800000
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, esi
        call public_4256c0
        public_42695d : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_4256c0
        public_42698c : nop
        lea ecx, ss:[esp+0x5B0]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_425c91
        jmp public_426a01
/*FIXUP public_4269a3 : nop
        push offset public_5c865c @0x4269a3*/
  FIXUP public_4269a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x5B4]
        call ebp
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x250]
        push ecx
/*FIXUP push offset public_5c865c @0x4269bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0x1E0
/*FIXUP push offset public_5c999c @0x4269c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9c00 @0x4269d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9c00
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        jmp public_42698c
        public_4269e0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x1EB
/*FIXUP push offset public_5c999c @0x4269ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c9a10 @0x4269f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9a10
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_426a01 : nop
        mov esi, dword ptr ds : [public_667a10]
        cmp esi, dword ptr ds : [public_667a14]
        je public_426a32
        nop 
        public_426a10 : nop
        mov eax, dword ptr ds : [public_5c6d4c]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_667a14]
        add esi, 4
        cmp esi, eax
        jne public_426a10
        mov esi, dword ptr ds : [public_667a10]
        public_426a32 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [public_5c6d4c]
        push edx
        mov dword ptr ds : [public_667a14], esi
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        lea edx, ss:[esp+0x19D8]
        mov dword ptr ss : [esp+0x1D2C], 4
        mov dword ptr ss : [esp+0x64], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x19DC]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1D2C], 5
        je public_426ac6
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_426ac6
        cmp cl, 0xFF
        je public_426ac6
        push 1
        lea ecx, ss:[esp+0x19DC]
        mov esi, eax
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x19E0]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x19DC]
        public_426ac6 : nop
        mov ecx, dword ptr ss : [esp+0x19E0]
        cmp ecx, ebp
        jae public_426ad3
        mov ebp, ecx
        public_426ad3 : nop
        mov ebx, dword ptr ds : [public_5c709c]
        xor edi, edi
        cmp ebp, edi
        jbe public_426b21
        sub ecx, ebp
        push ecx
        lea edx, ds:[eax+ebp]
        push edx
        push eax
        call ebx
        mov esi, dword ptr ss : [esp+0x19EC]
        add esp, 0xC
        push edi
        sub esi, ebp
        push esi
        lea ecx, ss:[esp+0x19E0]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_426b1a
        mov ecx, dword ptr ss : [esp+0x19DC]
        mov dword ptr ss : [esp+0x19E0], esi
        mov byte ptr ds : [ecx+esi], 0
        public_426b1a : nop
        mov eax, dword ptr ss : [esp+0x19DC]
        public_426b21 : nop
        mov ecx, dword ptr ss : [esp+0x19E8]
        mov esi, dword ptr ds : [public_5c6ef8]
        or ebp, 0xFFFFFFFF
        cmp ecx, ebp
        je public_426b87
        cmp dword ptr ss : [esp+0x19EC], edi
        je public_426b6f
        mov eax, dword ptr ss : [esp+0x19F0]
        cmp eax, edi
        je public_426b5e
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x19F0], edi
        mov dword ptr ss : [esp+0x19F4], edi
        public_426b5e : nop
        mov edx, dword ptr ss : [esp+0x19EC]
        push edx
        call esi
        mov dword ptr ss : [esp+0x19EC], edi
        public_426b6f : nop
        mov eax, dword ptr ss : [esp+0x19E8]
        push eax
        call esi
        mov eax, dword ptr ss : [esp+0x19DC]
        mov dword ptr ss : [esp+0x19E8], ebp
        public_426b87 : nop
        mov ecx, dword ptr ss : [esp+0x19F0]
        cmp ecx, edi
        je public_426bb1
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x19E0]
        add esp, 4
        mov dword ptr ss : [esp+0x19F0], edi
        mov dword ptr ss : [esp+0x19F4], edi
        public_426bb1 : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x19F8], edi
        je public_426bd8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_426bcf
        cmp cl, 0xFF
        je public_426bcf
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_426bd8
        public_426bcf : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_426bd8 : nop
        xor ebp, ebp
        mov dword ptr ss : [esp+0x19DC], ebp
        mov dword ptr ss : [esp+0x19E0], ebp
        mov dword ptr ss : [esp+0x19E4], ebp
        mov eax, dword ptr ss : [esp+0x5B4]
        cmp eax, ebp
        mov ecx, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1D2C], 6
        je public_426c4a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_426c4a
        cmp cl, 0xFF
        je public_426c4a
        push 1
        lea ecx, ss:[esp+0x5B4]
        mov esi, eax
        call dword ptr ds : [public_5c7084]
        push esi
        call dword ptr ds : [public_5c6f94]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x5B8]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x5B4]
        public_426c4a : nop
        mov ecx, dword ptr ss : [esp+0x5B8]
        cmp ecx, edi
        jae public_426c57
        mov edi, ecx
        public_426c57 : nop
        cmp edi, ebp
        jbe public_426d04
        sub ecx, edi
        push ecx
        lea edx, ds:[eax+edi]
        push edx
        push eax
        call ebx
        mov esi, dword ptr ss : [esp+0x5C4]
        add esp, 0xC
        lea ecx, ss:[esp+0x5B0]
        sub esi, edi
        call dword ptr ds : [public_5c6f90]
        cmp eax, esi
        jae public_426c8c
        call dword ptr ds : [public_5c7070]
        public_426c8c : nop
        mov eax, dword ptr ss : [esp+0x5B4]
        cmp eax, ebp
        je public_426cbc
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_426cbc
        cmp cl, 0xFF
        je public_426cbc
        cmp esi, ebp
        jne public_426cdd
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c7084]
        jmp public_426cfd
        public_426cbc : nop
        cmp esi, ebp
        jne public_426cd4
        cmp eax, ebp
        je public_426d04
        push ebp
        lea ecx, ss:[esp+0x5B4]
        call dword ptr ds : [public_5c706c]
        jmp public_426cfd
        public_426cd4 : nop
        cmp dword ptr ss : [esp+0x5BC], esi
        jae public_426cf2
        public_426cdd : nop
        lea ecx, ss:[esp+0x5B0]
        push esi
        call dword ptr ds : [public_5c7074]
        mov eax, dword ptr ss : [esp+0x5B4]
        public_426cf2 : nop
        mov dword ptr ss : [esp+0x5B8], esi
        mov byte ptr ds : [eax+esi], 0
        public_426cfd : nop
        mov eax, dword ptr ss : [esp+0x5B4]
        public_426d04 : nop
        mov ecx, dword ptr ss : [esp+0x5C0]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_426d6c
        cmp dword ptr ss : [esp+0x5C4], ebp
        je public_426d50
        mov eax, dword ptr ss : [esp+0x5C8]
        cmp eax, ebp
        je public_426d3b
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x5C8], ebp
        mov dword ptr ss : [esp+0x5CC], ebp
        public_426d3b : nop
        mov eax, dword ptr ss : [esp+0x5C4]
        push eax
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x5C4], ebp
        public_426d50 : nop
        mov ecx, dword ptr ss : [esp+0x5C0]
        push ecx
        call dword ptr ds : [public_5c6ef8]
        mov eax, dword ptr ss : [esp+0x5B4]
        mov dword ptr ss : [esp+0x5C0], esi
        public_426d6c : nop
        mov ecx, dword ptr ss : [esp+0x5C8]
        cmp ecx, ebp
        je public_426d96
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x5B8]
        add esp, 4
        mov dword ptr ss : [esp+0x5C8], ebp
        mov dword ptr ss : [esp+0x5CC], ebp
        public_426d96 : nop
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x5C8], ebp
        cmp eax, ebp
        pop ebp
        pop ebx
        je public_426dc1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_426db8
        cmp cl, 0xFF
        je public_426db8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_426dc1
        public_426db8 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_426dc1 : nop
        mov ecx, dword ptr ss : [esp+0x1D14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1D20
        ret 8
        UNREACHABLE_TRAP(0x425b30)
    }
}

#undef public_425ba9
#undef public_425c19
#undef public_425c30
#undef public_425c3a
#undef public_425c91
#undef public_425cc4
#undef public_425e30
#undef public_425e6a
#undef public_425e8d
#undef public_425f06
#undef public_425f38
#undef public_425f55
#undef public_425fc4
#undef public_425ff3
#undef public_425ffc
#undef public_426054
#undef public_4260db
#undef public_4260ee
#undef public_426158
#undef public_426190
#undef public_4261e4
#undef public_426222
#undef public_426293
#undef public_426299
#undef public_4262bd
#undef public_4262c3
#undef public_4262e7
#undef public_4262ed
#undef public_426311
#undef public_426317
#undef public_426355
#undef public_4263b7
#undef public_4263f1
#undef public_42642c
#undef public_426449
#undef public_4264d6
#undef public_4264e9
#undef public_4264f1
#undef public_426513
#undef public_426590
#undef public_4265e5
#undef public_426607
#undef public_426629
#undef public_42664b
#undef public_426680
#undef public_4266c1
#undef public_426770
#undef public_4267a5
#undef public_4267c8
#undef public_4267e5
#undef public_4267fa
#undef public_42683c
#undef public_42687a
#undef public_42695d
#undef public_42698c
#undef public_4269a3
#undef public_4269e0
#undef public_426a01
#undef public_426a10
#undef public_426a32
#undef public_426ac6
#undef public_426ad3
#undef public_426b1a
#undef public_426b21
#undef public_426b5e
#undef public_426b6f
#undef public_426b87
#undef public_426bb1
#undef public_426bcf
#undef public_426bd8
#undef public_426c4a
#undef public_426c57
#undef public_426c8c
#undef public_426cbc
#undef public_426cd4
#undef public_426cdd
#undef public_426cf2
#undef public_426cfd
#undef public_426d04
#undef public_426d3b
#undef public_426d50
#undef public_426d6c
#undef public_426d96
#undef public_426db8
#undef public_426dc1
