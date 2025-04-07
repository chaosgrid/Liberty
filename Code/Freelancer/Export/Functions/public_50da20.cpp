#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c750);
CLANG_FORWARD_PROC_SYMBOL(public_50da20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_50dab0 _public_50dab0
#define public_50dae4 _public_50dae4
#define public_50db01 _public_50db01
#define public_50db1e _public_50db1e
#define public_50db3b _public_50db3b
#define public_50db58 _public_50db58
#define public_50db62 _public_50db62
#define public_50db76 _public_50db76
#define public_50db78 _public_50db78
#define public_50db8e _public_50db8e
#define public_50dbb1 _public_50dbb1
#define public_50dd98 _public_50dd98
#define public_50dd9c _public_50dd9c
#define public_50ddcb _public_50ddcb
#define public_50dded _public_50dded
#define public_50ddf1 _public_50ddf1
#define public_50de1e _public_50de1e
#define public_50de45 _public_50de45
#define public_50de4c _public_50de4c
#define public_50de63 _public_50de63
#define public_50de76 _public_50de76
#define public_50de98 _public_50de98
#define public_50dea2 _public_50dea2
#define public_50deac _public_50deac
#define public_50deb3 _public_50deb3
#define public_50dec5 _public_50dec5
#define public_50deca _public_50deca
#define public_50ded2 _public_50ded2
#define public_50ded6 _public_50ded6
#define public_50df10 _public_50df10
#define public_50e099 _public_50e099
#define public_50e09d _public_50e09d
#define public_50e0c9 _public_50e0c9
#define public_50e0e7 _public_50e0e7
#define public_50e0e9 _public_50e0e9
#define public_50e102 _public_50e102
#define public_50e109 _public_50e109
#define public_50e126 _public_50e126
#define public_50e160 _public_50e160
#define public_50e1b7 _public_50e1b7
#define public_50e305 _public_50e305
#define public_50e323 _public_50e323
#define public_50e34f _public_50e34f
#define public_50e36d _public_50e36d
#define public_50e36f _public_50e36f
#define public_50e389 _public_50e389
#define public_50e3a7 _public_50e3a7
#define public_50e3ab _public_50e3ab
#define public_50e3d7 _public_50e3d7
#define public_50e3f5 _public_50e3f5
#define public_50e3f7 _public_50e3f7
#define public_50e40c _public_50e40c
#define public_50e413 _public_50e413
#define public_50e42c _public_50e42c
#define public_50e457 _public_50e457
#define public_50e46e _public_50e46e
#define public_50e49a _public_50e49a
#define public_50e4b8 _public_50e4b8
#define public_50e4ba _public_50e4ba
#define public_50e4d4 _public_50e4d4
#define public_50e4f2 _public_50e4f2
#define public_50e4f6 _public_50e4f6
#define public_50e52e _public_50e52e
#define public_50e532 _public_50e532
#define public_50e541 _public_50e541
#define public_50e562 _public_50e562
#define public_50e570 _public_50e570
#define public_50e59b _public_50e59b
#define public_50e5c0 _public_50e5c0
#define public_50e5ce _public_50e5ce
#define public_50e5f0 _public_50e5f0
#define public_50e601 _public_50e601
#define public_50e638 _public_50e638
#define public_50e64b _public_50e64b
#define public_50e672 _public_50e672
#define public_50e680 _public_50e680
#define public_50e6b7 _public_50e6b7
#define public_50e6c2 _public_50e6c2
#define public_50e6cc _public_50e6cc

PROC_DECLARE(0x50da20, internal_50da20, public_50da20);
extern "C" NAKED register_t __cdecl internal_50da20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x8C
        fld dword ptr ss : [esp+0x98]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fdiv dword ptr ds : [esi+0x2E8]
        mov ebp, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [ebp]
        push edi
        push ebp
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0xAC]
        fdiv dword ptr ds : [esi+0x2EC]
        fstp dword ptr ss : [esp+0x48]
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ss : [esp+0xA4]
        sub ecx, edi
        inc ecx
        mov dword ptr ss : [esp+0x8C], ecx
        sub edx, dword ptr ds : [eax+4]
        lea eax, ds:[ebx+0x7C]
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        inc edx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0x88]
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x74], edx
        lea eax, ds:[esi+0x14C]
        mov ecx, 0xC
        lea esp, ss:[esp]
        public_50dab0 : nop
        mov byte ptr ds : [eax-0x138], 0
        mov byte ptr ds : [eax], 0
        add eax, 0x18
        dec ecx
        jne public_50dab0
        fild dword ptr ds : [esi+0x2F8]
        mov byte ptr ds : [esi+0x134], 0
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_50dae4
        mov dword ptr ds : [esi+0x2B0], 0
        jmp public_50db62
        public_50dae4 : nop
        fild dword ptr ds : [esi+0x2FC]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_50db01
        mov dword ptr ds : [esi+0x2B0], 1
        jmp public_50db62
        public_50db01 : nop
        fild dword ptr ds : [esi+0x300]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_50db1e
        mov dword ptr ds : [esi+0x2B0], 2
        jmp public_50db62
        public_50db1e : nop
        fild dword ptr ds : [esi+0x304]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_50db3b
        mov dword ptr ds : [esi+0x2B0], 3
        jmp public_50db62
        public_50db3b : nop
        fild dword ptr ds : [esi+0x308]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_50db58
        mov dword ptr ds : [esi+0x2B0], 4
        jmp public_50db62
        public_50db58 : nop
        mov dword ptr ds : [esi+0x2B0], 5
        public_50db62 : nop
        mov eax, dword ptr ds : [esi+0x2B0]
        mov ecx, dword ptr ds : [esi+0x2B8]
        cmp eax, ecx
        jge public_50db76
        xor eax, eax
        jmp public_50db78
        public_50db76 : nop
        sub eax, ecx
        public_50db78 : nop
        mov ecx, dword ptr ds : [esi+0x2B4]
        cmp eax, ecx
        mov dword ptr ds : [esi+0x2B0], eax
        jle public_50db8e
        mov dword ptr ds : [esi+0x2B0], ecx
        public_50db8e : nop
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x2AC]
        fst dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_5d440c]
        fnstsw ax
        test ah, 5
        jp public_50dbb1
        mov dword ptr ss : [esp+0x40], 0x42480000
        public_50dbb1 : nop
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x54], ecx
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x58], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        fsub dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x2C], edi
        fld st(2)
        mov dword ptr ss : [esp+0x30], ecx
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        mov dword ptr ss : [esp+0x34], edx
        mov edi, 0x3F800000
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi]
        fadd dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+4]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x40]
        fchs 
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_50ddf1
        fild dword ptr ss : [esp+0x8C]
        fadd dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_50ddf1
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_50ddf1
        fild dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_50ddf1
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [eax+0x38]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        push ebp
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x9C]
        fxch 
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x84], edx
        lea edx, ss:[esp+0x84]
        push edx
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x8C], eax
        lea eax, ss:[esp+0x58]
        push eax
        fstp dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x74]
        push ebx
        mov dword ptr ss : [esp+0x98], ecx
        call public_50c750
        add esp, 0x10
        test al, al
        je public_50dd98
        fld dword ptr ds : [public_5c75dc]
        jmp public_50dd9c
        public_50dd98 : nop
        fld dword ptr ss : [esp+0x24]
        public_50dd9c : nop
        fsubr dword ptr ds : [public_5c75dc]
        mov byte ptr ds : [esi+0x14], 1
        fcom dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_50ddcb
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [esi+0x10]
        fst dword ptr ds : [esi+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_50dded
        fstp dword ptr ds : [esi+0x10]
        jmp public_50de4c
        public_50ddcb : nop
        fcom dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 5
        jp public_50dded
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [esi+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_50dded
        fstp dword ptr ds : [esi+0x10]
        jmp public_50de4c
        public_50dded : nop
        fstp st(0)
        jmp public_50de4c
        public_50ddf1 : nop
        fld dword ptr ds : [public_5c7474]
        mov byte ptr ds : [esi+0x14], 1
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_50de1e
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [esi+0x10]
        fst dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_50de4c
        jmp public_50de45
        public_50de1e : nop
        fld dword ptr ds : [public_5c7474]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 5
        jp public_50de4c
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_50de4c
        public_50de45 : nop
        mov dword ptr ds : [esi+0x10], 0
        public_50de4c : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_50de63
        mov dword ptr ds : [esi+0x10], 0
        public_50de63 : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_50de76
        mov dword ptr ds : [esi+0x10], edi
        public_50de76 : nop
        mov ecx, dword ptr ds : [esi+0x2B0]
        mov ebx, 0xE
        lea eax, ds:[ecx-1]
        cmp eax, 4
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x28], ebx
        ja public_50ded6
/*FIXUP jmp dword ptr ds : [eax*4+public_50e6dc] @0x50de91*/
  JMPTB cmp eax, 0
  JMPTB je public_50de98
  JMPTB cmp eax, 1
  JMPTB je public_50dea2
  JMPTB cmp eax, 2
  JMPTB je public_50deac
  JMPTB cmp eax, 3
  JMPTB je public_50deb3
  JMPTB cmp eax, 4
  JMPTB je public_50dec5
  JMPTB int 3
        public_50de98 : nop
        mov dword ptr ss : [esp+0x1C], 4
        jmp public_50ded2
        public_50dea2 : nop
        mov dword ptr ss : [esp+0x1C], 2
        jmp public_50ded2
        public_50deac : nop
        mov eax, 2
        jmp public_50deca
        public_50deb3 : nop
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x28], 2
        jmp public_50ded2
        public_50dec5 : nop
        mov eax, 1
        public_50deca : nop
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x28], eax
        public_50ded2 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_50ded6 : nop
        cmp ecx, 2
        jle public_50e126
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x28]
        fadd qword ptr ds : [public_5c89b8]
        lea eax, ds:[eax+eax*2]
        shl eax, 3
        mov dword ptr ss : [esp+0x5C], 0
        fmul qword ptr ds : [public_5c75e8]
        mov dword ptr ss : [esp+0x78], eax
        lea edi, ds:[esi+0x148]
        fstp dword ptr ss : [esp+0x24]
        mov edi, edi
        public_50df10 : nop
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [edi-0x10]
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x2C], ecx
        fmul dword ptr ds : [esi+0x2F4]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        fadd dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edi-0xC]
        fmul dword ptr ds : [esi+0x2F4]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_50e323
        fild dword ptr ss : [esp+0x8C]
        fadd dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_50e323
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_50e323
        fild dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_50e323
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x8C], 0
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        push ebp
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x9C]
        fxch 
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x84], eax
        lea eax, ss:[esp+0x84]
        push eax
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x8C], ecx
        lea ecx, ss:[esp+0x58]
        push ecx
        fstp dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x94], edx
        mov edx, dword ptr ss : [esp+0xB0]
        push edx
        call public_50c750
        add esp, 0x10
        test al, al
        je public_50e099
        fld dword ptr ds : [public_5c75dc]
        jmp public_50e09d
        public_50e099 : nop
        fld dword ptr ss : [esp+0x7C]
        public_50e09d : nop
        fsubr dword ptr ds : [public_5c75dc]
        mov byte ptr ds : [edi+4], 1
        fmul dword ptr ss : [esp+0x24]
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jne public_50e0c9
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [edi]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_50e0e7
        fstp dword ptr ds : [edi]
        jmp public_50e0e9
        public_50e0c9 : nop
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_50e0e7
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_50e0e7
        fstp dword ptr ds : [edi]
        jmp public_50e0e9
        public_50e0e7 : nop
        fstp st(0)
        public_50e0e9 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_50e305
        mov dword ptr ds : [edi], 0
        public_50e102 : nop
        mov ebp, dword ptr ss : [esp+0xA0]
        public_50e109 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x78]
        add eax, ecx
        add edi, edx
        cmp eax, 0xC
        mov dword ptr ss : [esp+0x5C], eax
        jl public_50df10
        public_50e126 : nop
        mov eax, dword ptr ds : [esi+0x2B0]
        test eax, eax
        jle public_50e42c
        fld dword ptr ds : [esi+0x10]
        lea eax, ds:[ebx+ebx*2]
        fadd qword ptr ds : [public_5c89b8]
        shl eax, 3
        mov dword ptr ss : [esp+0x5C], 1
        mov dword ptr ss : [esp+0x7C], eax
        fmul qword ptr ds : [public_5c75e8]
        lea edi, ds:[esi+0x28]
        fstp dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_50e160 : nop
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [edi-0x10]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x2C], eax
        fadd dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [esi+0x2B0]
        cmp eax, 2
        mov dword ptr ss : [esp+0x30], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], edx
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edi-0xC]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        jle public_50e1b7
        fld dword ptr ds : [edi+0x120]
        fadd qword ptr ds : [public_5c89b8]
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x24]
        public_50e1b7 : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_50e46e
        fild dword ptr ss : [esp+0x8C]
        fadd dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_50e46e
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_50e46e
        fild dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_50e46e
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        mov dword ptr ss : [esp+0x88], 0
        call dword ptr ds : [eax+0x38]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        push ebp
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x9C]
        fxch 
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x84], edx
        lea edx, ss:[esp+0x84]
        push edx
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x8C], eax
        lea eax, ss:[esp+0x58]
        push eax
        fstp dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x94], ecx
        mov ecx, dword ptr ss : [esp+0xB0]
        push ecx
        call public_50c750
        add esp, 0x10
        test al, al
        je public_50e3a7
        fld dword ptr ds : [public_5c75dc]
        jmp public_50e3ab
        public_50e305 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_50e102
        mov dword ptr ds : [edi], 0x3F800000
        jmp public_50e102
        public_50e323 : nop
        fld dword ptr ss : [esp+0x24]
        mov byte ptr ds : [edi+4], 1
        fmul dword ptr ds : [public_5c7474]
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jne public_50e34f
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [edi]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_50e36d
        fstp dword ptr ds : [edi]
        jmp public_50e36f
        public_50e34f : nop
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_50e36d
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_50e36d
        fstp dword ptr ds : [edi]
        jmp public_50e36f
        public_50e36d : nop
        fstp st(0)
        public_50e36f : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_50e389
        mov dword ptr ds : [edi], 0
        jmp public_50e109
        public_50e389 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_50e109
        mov dword ptr ds : [edi], 0x3F800000
        jmp public_50e109
        public_50e3a7 : nop
        fld dword ptr ss : [esp+0x78]
        public_50e3ab : nop
        fsubr dword ptr ds : [public_5c75dc]
        mov byte ptr ds : [edi+4], 1
        fmul dword ptr ss : [esp+0x24]
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jne public_50e3d7
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [edi]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_50e3f5
        fstp dword ptr ds : [edi]
        jmp public_50e3f7
        public_50e3d7 : nop
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_50e3f5
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_50e3f5
        fstp dword ptr ds : [edi]
        jmp public_50e3f7
        public_50e3f5 : nop
        fstp st(0)
        public_50e3f7 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_50e457
        mov dword ptr ds : [edi], 0
        public_50e40c : nop
        mov ebp, dword ptr ss : [esp+0xA0]
        public_50e413 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x7C]
        add eax, ebx
        add edi, edx
        cmp eax, 0xD
        mov dword ptr ss : [esp+0x5C], eax
        jl public_50e160
        public_50e42c : nop
        mov eax, dword ptr ds : [esi+0x2B0]
        test eax, eax
        je public_50e6b7
        jle public_50e6cc
        cmp eax, 4
        jg public_50e6cc
        cmp ebx, 1
        jle public_50e59b
        jmp public_50e4f6
        public_50e457 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_50e40c
        mov dword ptr ds : [edi], 0x3F800000
        jmp public_50e40c
        public_50e46e : nop
        fld dword ptr ss : [esp+0x24]
        mov byte ptr ds : [edi+4], 1
        fmul dword ptr ds : [public_5c7474]
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jne public_50e49a
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [edi]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_50e4b8
        fstp dword ptr ds : [edi]
        jmp public_50e4ba
        public_50e49a : nop
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_50e4b8
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [edi]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_50e4b8
        fstp dword ptr ds : [edi]
        jmp public_50e4ba
        public_50e4b8 : nop
        fstp st(0)
        public_50e4ba : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_50e4d4
        mov dword ptr ds : [edi], 0
        jmp public_50e413
        public_50e4d4 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_50e413
        mov dword ptr ds : [edi], 0x3F800000
        jmp public_50e413
        public_50e4f2 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_50e4f6 : nop
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov ebp, eax
        mov dword ptr ss : [esp+0x24], ebp
        lea ebp, ss:[ebp+ebp*2]
        lea ecx, ds:[ebx+ebx*2]
        lea edx, ds:[ebx+ebx*2+3]
        lea ebp, ds:[esi+ebp*8+0x28]
        shl ecx, 3
        mov eax, 1
        shl edx, 3
        lea edi, ds:[esi+0x28]
        mov dword ptr ss : [esp+0x38], ebp
        jmp public_50e532
        public_50e52e : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_50e532 : nop
        add ebx, eax
        cmp ebx, 0xC
        mov ebp, edx
        jle public_50e541
        lea ebp, ds:[edx-0x120]
        public_50e541 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [esi+ebp+0x10]
        fld dword ptr ds : [esi+ebp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_50e562
        fmul qword ptr ds : [public_5cf0f8]
        fld dword ptr ds : [edi]
        fmul qword ptr ds : [public_5c9858]
        jmp public_50e570
        public_50e562 : nop
        fmul qword ptr ds : [public_5c9858]
        fld dword ptr ds : [edi]
        fmul qword ptr ds : [public_5cf0f8]
        public_50e570 : nop
        mov ebp, dword ptr ss : [esp+0x38]
        faddp 
        mov eax, ebx
        add edx, ecx
        fstp dword ptr ss : [ebp]
        add ebp, ecx
        add edi, ecx
        cmp eax, 0xD
        mov dword ptr ss : [esp+0x38], ebp
        jl public_50e52e
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], eax
        jg public_50e4f2
        public_50e59b : nop
        cmp dword ptr ds : [esi+0x2B0], 2
        jne public_50e5f0
        mov ebx, 0xFFFFFDB0
        mov edi, 0xFFFFFED0
        xor ecx, ecx
        sub ebx, esi
        lea eax, ds:[esi+0x148]
        sub edi, esi
        lea ebx, ds:[ebx]
        public_50e5c0 : nop
        lea ebp, ds:[ecx+1]
        cmp ebp, 0xC
        lea edx, ds:[edi+eax]
        jle public_50e5ce
        lea edx, ds:[ebx+eax]
        public_50e5ce : nop
        fld dword ptr ds : [edx+esi+0x10]
        add ecx, 2
        fadd dword ptr ds : [esi+0x10]
        add eax, 0x30
        cmp ecx, 0xC
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ds : [eax-0x30]
        jl public_50e5c0
        cmp dword ptr ds : [esi+0x2B0], 2
        public_50e5f0 : nop
        jle public_50e6cc
        cmp dword ptr ss : [esp+0x28], 1
        jle public_50e6cc
        public_50e601 : nop
        fild dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov edi, eax
        mov dword ptr ss : [esp+0x24], edi
        lea ecx, ds:[ebx+ebx*2]
        lea edi, ds:[edi+edi*2]
        xor eax, eax
        shl ecx, 3
        lea edi, ds:[esi+edi*8+0x148]
        mov ebp, ecx
        lea edx, ds:[esi+0x148]
        mov dword ptr ss : [esp+0x38], edi
        public_50e638 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        add ebx, eax
        cmp ebx, 0xB
        mov edi, ebp
        jle public_50e64b
        lea edi, ss:[ebp-0x120]
        public_50e64b : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [edi+esi+0x148]
        fld dword ptr ds : [edi+esi+0x148]
        fnstsw ax
        test ah, 0x41
        jne public_50e672
        fmul qword ptr ds : [public_5cf0f8]
        fld dword ptr ds : [edx]
        fmul qword ptr ds : [public_5c9858]
        jmp public_50e680
        public_50e672 : nop
        fmul qword ptr ds : [public_5c9858]
        fld dword ptr ds : [edx]
        fmul qword ptr ds : [public_5cf0f8]
        public_50e680 : nop
        mov edi, dword ptr ss : [esp+0x38]
        faddp 
        mov eax, ebx
        add ebp, ecx
        fstp dword ptr ds : [edi]
        add edi, ecx
        add edx, ecx
        cmp eax, 0xC
        mov dword ptr ss : [esp+0x38], edi
        jl public_50e638
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 1
        mov dword ptr ss : [esp+0x28], eax
        jg public_50e601
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8C
        ret 0xC
        public_50e6b7 : nop
        fld dword ptr ds : [esi+0x10]
        add esi, 0x28
        mov eax, 0xC
        public_50e6c2 : nop
        fst dword ptr ds : [esi]
        add esi, 0x18
        dec eax
        jne public_50e6c2
        fstp st(0)
        public_50e6cc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8C
        ret 0xC
        UNREACHABLE_TRAP(0x50da20)
        ASM_EXPORT_ENTRY_SINGLE(0x50dec5, public_50dec5)
    }
}

#undef public_50dab0
#undef public_50dae4
#undef public_50db01
#undef public_50db1e
#undef public_50db3b
#undef public_50db58
#undef public_50db62
#undef public_50db76
#undef public_50db78
#undef public_50db8e
#undef public_50dbb1
#undef public_50dd98
#undef public_50dd9c
#undef public_50ddcb
#undef public_50dded
#undef public_50ddf1
#undef public_50de1e
#undef public_50de45
#undef public_50de4c
#undef public_50de63
#undef public_50de76
#undef public_50de98
#undef public_50dea2
#undef public_50deac
#undef public_50deb3
#undef public_50dec5
#undef public_50deca
#undef public_50ded2
#undef public_50ded6
#undef public_50df10
#undef public_50e099
#undef public_50e09d
#undef public_50e0c9
#undef public_50e0e7
#undef public_50e0e9
#undef public_50e102
#undef public_50e109
#undef public_50e126
#undef public_50e160
#undef public_50e1b7
#undef public_50e305
#undef public_50e323
#undef public_50e34f
#undef public_50e36d
#undef public_50e36f
#undef public_50e389
#undef public_50e3a7
#undef public_50e3ab
#undef public_50e3d7
#undef public_50e3f5
#undef public_50e3f7
#undef public_50e40c
#undef public_50e413
#undef public_50e42c
#undef public_50e457
#undef public_50e46e
#undef public_50e49a
#undef public_50e4b8
#undef public_50e4ba
#undef public_50e4d4
#undef public_50e4f2
#undef public_50e4f6
#undef public_50e52e
#undef public_50e532
#undef public_50e541
#undef public_50e562
#undef public_50e570
#undef public_50e59b
#undef public_50e5c0
#undef public_50e5ce
#undef public_50e5f0
#undef public_50e601
#undef public_50e638
#undef public_50e64b
#undef public_50e672
#undef public_50e680
#undef public_50e6b7
#undef public_50e6c2
#undef public_50e6cc

#pragma init_seg(compiler)
extern "C" void const* const public_50dec5 = __AsmFindLabelExport(&internal_50da20, 0x50dec5);
