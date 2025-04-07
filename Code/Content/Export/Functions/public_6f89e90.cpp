#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb10a8);

#define public_6f89ed5 _public_6f89ed5
#define public_6f89eff _public_6f89eff
#define public_6f89f5b _public_6f89f5b
#define public_6f89f74 _public_6f89f74
#define public_6f89f76 _public_6f89f76
#define public_6f89f8b _public_6f89f8b
#define public_6f89fa0 _public_6f89fa0
#define public_6f89fb8 _public_6f89fb8
#define public_6f89fc0 _public_6f89fc0
#define public_6f89fcd _public_6f89fcd
#define public_6f89fe1 _public_6f89fe1
#define public_6f89ff1 _public_6f89ff1
#define public_6f8a001 _public_6f8a001
#define public_6f8a020 _public_6f8a020
#define public_6f8a02d _public_6f8a02d
#define public_6f8a038 _public_6f8a038
#define public_6f8a048 _public_6f8a048
#define public_6f8a065 _public_6f8a065
#define public_6f8a08d _public_6f8a08d
#define public_6f8a0a7 _public_6f8a0a7
#define public_6f8a0cc _public_6f8a0cc
#define public_6f8a0d3 _public_6f8a0d3
#define public_6f8a0e8 _public_6f8a0e8
#define public_6f8a129 _public_6f8a129
#define public_6f8a12c _public_6f8a12c
#define public_6f8a131 _public_6f8a131
#define public_6f8a138 _public_6f8a138
#define public_6f8a150 _public_6f8a150
#define public_6f8a191 _public_6f8a191
#define public_6f8a194 _public_6f8a194
#define public_6f8a199 _public_6f8a199
#define public_6f8a1a0 _public_6f8a1a0
#define public_6f8a1d8 _public_6f8a1d8
#define public_6f8a1ea _public_6f8a1ea
#define public_6f8a1f7 _public_6f8a1f7
#define public_6f8a264 _public_6f8a264
#define public_6f8a26e _public_6f8a26e
#define public_6f8a275 _public_6f8a275
#define public_6f8a2b5 _public_6f8a2b5
#define public_6f8a2c7 _public_6f8a2c7
#define public_6f8a2d8 _public_6f8a2d8
#define public_6f8a36e _public_6f8a36e
#define public_6f8a373 _public_6f8a373
#define public_6f8a37b _public_6f8a37b
#define public_6f8a380 _public_6f8a380
#define public_6f8a38c _public_6f8a38c
#define public_6f8a3b0 _public_6f8a3b0
#define public_6f8a3c4 _public_6f8a3c4
#define public_6f8a3e1 _public_6f8a3e1
#define public_6f8a3f5 _public_6f8a3f5
#define public_6f8a42a _public_6f8a42a
#define public_6f8a441 _public_6f8a441
#define public_6f8a453 _public_6f8a453
#define public_6f8a466 _public_6f8a466
#define public_6f8a480 _public_6f8a480
#define public_6f8a497 _public_6f8a497
#define public_6f8a4a0 _public_6f8a4a0
#define public_6f8a4b2 _public_6f8a4b2
#define public_6f8a4c0 _public_6f8a4c0
#define public_6f8a4d4 _public_6f8a4d4
#define public_6f8a4e5 _public_6f8a4e5
#define public_6f8a4f4 _public_6f8a4f4
#define public_6f8a500 _public_6f8a500
#define public_6f8a510 _public_6f8a510
#define public_6f8a51b _public_6f8a51b
#define public_6f8a535 _public_6f8a535

PROC_DECLARE(0x6f89e90, internal_6f89e90, public_6f89e90);
extern "C" NAKED register_t __cdecl internal_6f89e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb10a8 @0x6f89e98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb10a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        je public_6f8a048
        mov edi, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ds : [edi+0x40]
        dec eax
        cmp eax, 4
        ja public_6f89f74
/*FIXUP jmp dword ptr ds : [eax*4+public_6f8a53c] @0x6f89ece*/
  JMPTB cmp eax, 0
  JMPTB je public_6f89ed5
  JMPTB cmp eax, 1
  JMPTB je public_6f89eff
  JMPTB cmp eax, 2
  JMPTB je public_6f89fcd
  JMPTB cmp eax, 3
  JMPTB je public_6f8a001
  JMPTB cmp eax, 4
  JMPTB je public_6f89f8b
  JMPTB int 3
        public_6f89ed5 : nop
        mov dword ptr ds : [edi+4], 0
        mov eax, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+0x2C], 0x32D7
        mov al, 1
        jmp public_6f89f76
        public_6f89eff : nop
        push 0
        push 2
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x58]
        call public_6f86ae0
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        mov dword ptr ss : [esp+0x78], 0
        je public_6f89f5b
        lea edx, ss:[esp+0x84]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+0x48]
        lea ecx, ss:[esp+0x34]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], offset public_6fbc7cc
        call public_6f15350
        mov al, 1
        jmp public_6f89f76
        public_6f89f5b : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], offset public_6fbc7cc
        call public_6f15350
        public_6f89f74 : nop
        xor al, al
        public_6f89f76 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 0xC
        public_6f89f8b : nop
        mov esi, dword ptr ds : [esi+0x5C]
        add esi, 0x20
        mov esi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        je public_6f89f74
        mov ebx, 2
        nop 
        public_6f89fa0 : nop
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+0x44]
        fcomp dword ptr ds : [public_6fbc29c]
        fnstsw ax
        test ah, 0x41
        jne public_6f89fb8
        cmp dword ptr ds : [edx+0x3C], ebx
        je public_6f89fc0
        public_6f89fb8 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6f89fa0
        jmp public_6f89f74
        public_6f89fc0 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x48]
        mov dword ptr ds : [edi+4], eax
        mov al, 1
        jmp public_6f89f76
        public_6f89fcd : nop
        mov esi, dword ptr ds : [esi+0x5C]
        add esi, 0x20
        mov esi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6f89f74
        mov ebx, 2
        public_6f89fe1 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0x60], ebx
        je public_6f89ff1
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f89fe1
        jmp public_6f89f74
        public_6f89ff1 : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edx+0x48]
        mov dword ptr ds : [edi+4], eax
        mov al, 1
        jmp public_6f89f76
        public_6f8a001 : nop
        mov esi, dword ptr ds : [esi+0x5C]
        add esi, 0x20
        mov esi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6f89f74
        mov edx, 1
        mov ebx, 2
        mov edi, edi
        public_6f8a020 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0x60], edx
        jne public_6f8a02d
        cmp dword ptr ds : [ecx+0x3C], ebx
        je public_6f8a038
        public_6f8a02d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f8a020
        jmp public_6f89f74
        public_6f8a038 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+0x48]
        mov dword ptr ds : [edi+4], edx
        mov al, 1
        jmp public_6f89f76
        public_6f8a048 : nop
        mov ebx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ds : [ebx+0x44]
        add eax, 0xFFFFFFFA
        cmp eax, 5
        ja public_6f89f74
/*FIXUP jmp dword ptr ds : [eax*4+public_6f8a550] @0x6f8a05e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f8a065
  JMPTB cmp eax, 1
  JMPTB je public_6f8a08d
  JMPTB cmp eax, 2
  JMPTB je public_6f8a1a0
  JMPTB cmp eax, 3
  JMPTB je public_6f8a275
  JMPTB cmp eax, 4
  JMPTB je public_6f8a138
  JMPTB cmp eax, 5
  JMPTB je public_6f8a0d3
  JMPTB int 3
        public_6f8a065 : nop
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ebx+0x38]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ds:[ebx+0x30]
        push 1
        push eax
        call public_6f937c0
        mov al, 1
        jmp public_6f89f76
        public_6f8a08d : nop
        mov esi, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x74]
        mov edi, eax
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f8a0cc
        add ebx, 0x30
        public_6f8a0a7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        mov ecx, ebx
        call public_6f937c0
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6f8a0a7
        public_6f8a0cc : nop
        mov al, 1
        jmp public_6f89f76
        public_6f8a0d3 : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov ebp, eax
        mov edi, dword ptr ss : [ebp+4]
        cmp edi, dword ptr ss : [ebp+8]
        je public_6f8a131
        public_6f8a0e8 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f8a129
        call public_6f478c0
        mov ebx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        cmp ebx, eax
        je public_6f8a12c
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x1C]
        lea ecx, ds:[eax+0x30]
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        call public_6f937c0
        jmp public_6f8a12c
        public_6f8a129 : nop
        add edi, 4
        public_6f8a12c : nop
        cmp edi, dword ptr ss : [ebp+8]
        jne public_6f8a0e8
        public_6f8a131 : nop
        mov al, 1
        jmp public_6f89f76
        public_6f8a138 : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov ebp, eax
        mov edi, dword ptr ss : [ebp+4]
        cmp edi, dword ptr ss : [ebp+8]
        je public_6f8a199
        lea ecx, ds:[ecx]
        public_6f8a150 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f8a191
        call public_6f478c0
        mov ebx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        cmp ebx, eax
        jne public_6f8a194
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x20]
        lea ecx, ds:[eax+0x30]
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        call public_6f937c0
        jmp public_6f8a194
        public_6f8a191 : nop
        add edi, 4
        public_6f8a194 : nop
        cmp edi, dword ptr ss : [ebp+8]
        jne public_6f8a150
        public_6f8a199 : nop
        mov al, 1
        jmp public_6f89f76
        public_6f8a1a0 : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x88]
        test eax, eax
        mov edi, dword ptr ds : [ebx+4]
        je public_6f8a1d8
        mov eax, dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, eax
        call public_6eb70f0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+8]
        jmp public_6f8a1ea
        public_6f8a1d8 : nop
        add esi, 0x90
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x30], eax
        public_6f8a1ea : nop
        cmp edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        je public_6f8a26e
        public_6f8a1f7 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f8a264
        lea edx, ss:[esp+0x4C]
        push edx
        call public_6eb70f0
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x38]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_6fbc2ac]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jp public_6f8a264
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x84]
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ds:[edx+0x30]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        push 1
        push edx
        call public_6f937c0
        public_6f8a264 : nop
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6f8a1f7
        public_6f8a26e : nop
        mov al, 1
        jmp public_6f89f76
        public_6f8a275 : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x74]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x88]
        test eax, eax
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f8a2b5
        mov eax, dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, eax
        call public_6eb70f0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+8]
        jmp public_6f8a2c7
        public_6f8a2b5 : nop
        add esi, 0x90
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x30], eax
        public_6f8a2c7 : nop
        cmp ebx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        je public_6f8a535
        public_6f8a2d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f8a51b
        lea edx, ss:[esp+0x64]
        push edx
        call public_6eb70f0
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x38]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_6fbc2ac]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6f8a51b
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x84]
        mov esi, dword ptr ds : [ebx+0x38]
        mov eax, dword ptr ds : [ebx+0x3C]
        mov edx, dword ptr ds : [ecx+0xC]
        sub eax, esi
        sar eax, 2
        cmp eax, 1
        mov dword ptr ss : [esp+0x80], edx
        mov edi, esi
        jae public_6f8a441
        mov ecx, dword ptr ds : [ebx+0x34]
        test ecx, ecx
        je public_6f8a36e
        mov eax, esi
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja public_6f8a373
        public_6f8a36e : nop
        mov eax, 1
        public_6f8a373 : nop
        test ecx, ecx
        jne public_6f8a37b
        xor esi, esi
        jmp public_6f8a380
        public_6f8a37b : nop
        sub esi, ecx
        sar esi, 2
        public_6f8a380 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        jge public_6f8a38c
        xor eax, eax
        public_6f8a38c : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov ebp, dword ptr ds : [ebx+0x34]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x88], eax
        mov esi, eax
        je public_6f8a3c4
        lea esp, ss:[esp]
        public_6f8a3b0 : nop
        push ebp
        push esi
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add esi, 4
        cmp ebp, edi
        jne public_6f8a3b0
        public_6f8a3c4 : nop
        lea edx, ss:[esp+0x80]
        push edx
        push esi
        call public_6eb6740
        mov ebp, dword ptr ds : [ebx+0x38]
        add esp, 8
        cmp edi, ebp
        je public_6f8a3f5
        sub esi, edi
        add esi, 4
        public_6f8a3e1 : nop
        lea eax, ds:[esi+edi]
        push edi
        push eax
        call public_6eb6740
        add edi, 4
        add esp, 8
        cmp edi, ebp
        jne public_6f8a3e1
        public_6f8a3f5 : nop
        mov ecx, dword ptr ds : [ebx+0x34]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [ebx+0x3C], ecx
        mov ecx, dword ptr ds : [ebx+0x34]
        add esp, 4
        test ecx, ecx
        jne public_6f8a42a
        xor eax, eax
        lea eax, ds:[edx+eax*4+4]
        mov dword ptr ds : [ebx+0x38], eax
        mov dword ptr ds : [ebx+0x34], edx
        jmp public_6f8a51b
        public_6f8a42a : nop
        mov eax, dword ptr ds : [ebx+0x38]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edx+eax*4+4]
        mov dword ptr ds : [ebx+0x38], eax
        mov dword ptr ds : [ebx+0x34], edx
        jmp public_6f8a51b
        public_6f8a441 : nop
        mov ecx, esi
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        jae public_6f8a4b2
        cmp edi, esi
        mov eax, edi
        je public_6f8a466
        public_6f8a453 : nop
        lea ebp, ds:[eax+4]
        push eax
        push ebp
        call public_6eb6740
        mov eax, ebp
        add esp, 8
        cmp eax, esi
        jne public_6f8a453
        public_6f8a466 : nop
        mov ecx, dword ptr ds : [ebx+0x38]
        mov edx, ecx
        sub edx, edi
        sar edx, 2
        mov eax, 1
        sub eax, edx
        mov esi, ecx
        je public_6f8a497
        mov ebp, eax
        lea ecx, ds:[ecx]
        public_6f8a480 : nop
        lea eax, ss:[esp+0x80]
        push eax
        push esi
        call public_6eb6740
        add esp, 8
        add esi, 4
        dec ebp
        jne public_6f8a480
        public_6f8a497 : nop
        mov ebx, dword ptr ds : [ebx+0x38]
        cmp edi, ebx
        mov eax, edi
        je public_6f8a510
        public_6f8a4a0 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        cmp eax, ebx
        jne public_6f8a4a0
        jmp public_6f8a510
        public_6f8a4b2 : nop
        lea ebp, ds:[esi-4]
        cmp ebp, esi
        mov ebx, esi
        je public_6f8a4d4
        nop 
        lea esp, ss:[esp]
        public_6f8a4c0 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, esi
        jne public_6f8a4c0
        public_6f8a4d4 : nop
        mov edx, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ds : [edx+0x38]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f8a4f4
        public_6f8a4e5 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f8a4e5
        public_6f8a4f4 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f8a510
        lea ecx, ds:[ecx]
        public_6f8a500 : nop
        mov edx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f8a500
        public_6f8a510 : nop
        mov eax, dword ptr ss : [esp+0x84]
        add dword ptr ds : [eax+0x38], 4
        public_6f8a51b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+8]
        add eax, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f8a2d8
        public_6f8a535 : nop
        mov al, 1
        jmp public_6f89f76
        UNREACHABLE_TRAP(0x6f89e90)
        ASM_EXPORT_ENTRY_FIRST(0x6f89ed5, public_6f89ed5)
        ASM_EXPORT_ENTRY(0x6f89eff, public_6f89eff)
        ASM_EXPORT_ENTRY(0x6f89f8b, public_6f89f8b)
        ASM_EXPORT_ENTRY(0x6f89fcd, public_6f89fcd)
        ASM_EXPORT_ENTRY(0x6f8a001, public_6f8a001)
        ASM_EXPORT_ENTRY(0x6f8a065, public_6f8a065)
        ASM_EXPORT_ENTRY(0x6f8a08d, public_6f8a08d)
        ASM_EXPORT_ENTRY(0x6f8a0d3, public_6f8a0d3)
        ASM_EXPORT_ENTRY(0x6f8a138, public_6f8a138)
        ASM_EXPORT_ENTRY(0x6f8a1a0, public_6f8a1a0)
        ASM_EXPORT_ENTRY_LAST(0x6f8a275, public_6f8a275)
    }
}

#undef public_6f89ed5
#undef public_6f89eff
#undef public_6f89f5b
#undef public_6f89f74
#undef public_6f89f76
#undef public_6f89f8b
#undef public_6f89fa0
#undef public_6f89fb8
#undef public_6f89fc0
#undef public_6f89fcd
#undef public_6f89fe1
#undef public_6f89ff1
#undef public_6f8a001
#undef public_6f8a020
#undef public_6f8a02d
#undef public_6f8a038
#undef public_6f8a048
#undef public_6f8a065
#undef public_6f8a08d
#undef public_6f8a0a7
#undef public_6f8a0cc
#undef public_6f8a0d3
#undef public_6f8a0e8
#undef public_6f8a129
#undef public_6f8a12c
#undef public_6f8a131
#undef public_6f8a138
#undef public_6f8a150
#undef public_6f8a191
#undef public_6f8a194
#undef public_6f8a199
#undef public_6f8a1a0
#undef public_6f8a1d8
#undef public_6f8a1ea
#undef public_6f8a1f7
#undef public_6f8a264
#undef public_6f8a26e
#undef public_6f8a275
#undef public_6f8a2b5
#undef public_6f8a2c7
#undef public_6f8a2d8
#undef public_6f8a36e
#undef public_6f8a373
#undef public_6f8a37b
#undef public_6f8a380
#undef public_6f8a38c
#undef public_6f8a3b0
#undef public_6f8a3c4
#undef public_6f8a3e1
#undef public_6f8a3f5
#undef public_6f8a42a
#undef public_6f8a441
#undef public_6f8a453
#undef public_6f8a466
#undef public_6f8a480
#undef public_6f8a497
#undef public_6f8a4a0
#undef public_6f8a4b2
#undef public_6f8a4c0
#undef public_6f8a4d4
#undef public_6f8a4e5
#undef public_6f8a4f4
#undef public_6f8a500
#undef public_6f8a510
#undef public_6f8a51b
#undef public_6f8a535

#pragma init_seg(compiler)
extern "C" void const* const public_6f89ed5 = __AsmFindLabelExport(&internal_6f89e90, 0x6f89ed5);
extern "C" void const* const public_6f89eff = __AsmFindLabelExport(&internal_6f89e90, 0x6f89eff);
extern "C" void const* const public_6f89f8b = __AsmFindLabelExport(&internal_6f89e90, 0x6f89f8b);
extern "C" void const* const public_6f89fcd = __AsmFindLabelExport(&internal_6f89e90, 0x6f89fcd);
extern "C" void const* const public_6f8a001 = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a001);
extern "C" void const* const public_6f8a065 = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a065);
extern "C" void const* const public_6f8a08d = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a08d);
extern "C" void const* const public_6f8a0d3 = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a0d3);
extern "C" void const* const public_6f8a138 = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a138);
extern "C" void const* const public_6f8a1a0 = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a1a0);
extern "C" void const* const public_6f8a275 = __AsmFindLabelExport(&internal_6f89e90, 0x6f8a275);
