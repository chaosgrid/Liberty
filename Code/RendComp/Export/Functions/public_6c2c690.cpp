#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c690);
CLANG_FORWARD_PROC_SYMBOL(public_6c34efc);

#define public_6c2c70f _public_6c2c70f
#define public_6c2c74c _public_6c2c74c
#define public_6c2c789 _public_6c2c789
#define public_6c2c7fe _public_6c2c7fe
#define public_6c2c873 _public_6c2c873
#define public_6c2c8ad _public_6c2c8ad
#define public_6c2c91d _public_6c2c91d
#define public_6c2c98b _public_6c2c98b
#define public_6c2c9c0 _public_6c2c9c0
#define public_6c2cb39 _public_6c2cb39
#define public_6c2cb4b _public_6c2cb4b
#define public_6c2cb51 _public_6c2cb51
#define public_6c2cb60 _public_6c2cb60
#define public_6c2cca3 _public_6c2cca3
#define public_6c2ccc1 _public_6c2ccc1
#define public_6c2ccdc _public_6c2ccdc
#define public_6c2cced _public_6c2cced
#define public_6c2cd10 _public_6c2cd10
#define public_6c2cd20 _public_6c2cd20
#define public_6c2ce89 _public_6c2ce89
#define public_6c2ce9e _public_6c2ce9e
#define public_6c2cea2 _public_6c2cea2
#define public_6c2d010 _public_6c2d010
#define public_6c2d151 _public_6c2d151
#define public_6c2d17c _public_6c2d17c
#define public_6c2d18a _public_6c2d18a
#define public_6c2d1a2 _public_6c2d1a2
#define public_6c2d1b0 _public_6c2d1b0
#define public_6c2d1f2 _public_6c2d1f2
#define public_6c2d244 _public_6c2d244
#define public_6c2d28e _public_6c2d28e
#define public_6c2d302 _public_6c2d302

PROC_DECLARE(0x6c2c690, internal_6c2c690, public_6c2c690);
extern "C" NAKED register_t __cdecl internal_6c2c690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xCC
        fld qword ptr ds : [public_6c363f8]
        mov eax, dword ptr ss : [esp+0xDC]
        fsqrt 
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], eax
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0x10], eax
        push edi
        fdivr dword ptr ds : [public_6c361ec]
        fst dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ss : [esp+0xE4]
        cmp eax, 5
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x64], ecx
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x74], ecx
        mov dword ptr ss : [esp+0x78], edx
        ja public_6c2c91d
/*FIXUP jmp dword ptr ds : [eax*4+public_6c2d310] @0x6c2c708*/
  JMPTB cmp eax, 0
  JMPTB je public_6c2c70f
  JMPTB cmp eax, 1
  JMPTB je public_6c2c74c
  JMPTB cmp eax, 2
  JMPTB je public_6c2c789
  JMPTB cmp eax, 3
  JMPTB je public_6c2c7fe
  JMPTB cmp eax, 4
  JMPTB je public_6c2c873
  JMPTB cmp eax, 5
  JMPTB je public_6c2c8ad
  JMPTB int 3
        public_6c2c70f : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x60]
        jmp public_6c2c91d
        public_6c2c74c : nop
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x78]
        jmp public_6c2c91d
        public_6c2c789 : nop
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x78]
        jmp public_6c2c91d
        public_6c2c7fe : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x70]
        jmp public_6c2c91d
        public_6c2c873 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x78]
        jmp public_6c2c91d
        public_6c2c8ad : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [public_6c363f0]
        fstp dword ptr ss : [esp+0x74]
        public_6c2c91d : nop
        mov edi, dword ptr ss : [esp+0xE8]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, edi
        mov eax, 1
        shl eax, cl
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        push edx
        call dword ptr ds : [public_6c36058]
        fild dword ptr ss : [esp+0xF0]
        add esp, 8
        mov dword ptr ds : [esi+0xC], eax
        fmul dword ptr ds : [public_6c361f0]
        call public_6c34efc
        fld dword ptr ds : [public_6c36320]
        mov ebp, 1
        mov ecx, eax
        shl ebp, cl
        and edi, 0x80000001
        mov dword ptr ss : [esp+0x7C], ebp
        fild dword ptr ss : [esp+0x7C]
        lea ebx, ss:[ebp+1]
        mov dword ptr ss : [esp+0x6C], ebx
        fdivr dword ptr ds : [public_6c361ec]
        fstp dword ptr ss : [esp+0x38]
        jns public_6c2c98b
        dec edi
        or edi, 0xFFFFFFFE
        inc edi
        public_6c2c98b : nop
        je public_6c2ce89
        fld dword ptr ss : [esp+0x38]
        lea eax, ds:[ebx+ebx-1]
        fmul dword ptr ds : [public_6c361f0]
        xor ecx, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x34], eax
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], ecx
        jle public_6c2cced
        mov edx, dword ptr ss : [esp+0xF4]
        lea esp, ss:[esp]
        public_6c2c9c0 : nop
        fld dword ptr ss : [esp+0x60]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x68]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ds : [public_6c361ec]
        fsub st, st(1)
        fld st(0)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(1)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xBC]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0xBC]
        fadd dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x5C]
        fld st(2)
        fmul dword ptr ss : [esp+0x70]
        fld st(3)
        fmul dword ptr ss : [esp+0x74]
        fld st(4)
        fmul dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(4)
        fld st(4)
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xA4]
        fxch st(4)
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xA8]
        fxch st(3)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0xA4]
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x28]
        fstp st(2)
        fstp st(1)
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6c361ec]
        fstp dword ptr ss : [esp+0x10]
        mov edi, ecx
        and edi, 0x80000001
        fmul dword ptr ss : [esp+0x10]
        mov eax, ebx
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6c361ec]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        jns public_6c2cb39
        dec edi
        or edi, 0xFFFFFFFE
        inc edi
        public_6c2cb39 : nop
        mov dword ptr ss : [esp+0x9C], edi
        je public_6c2cb4b
        fld dword ptr ss : [esp+0x14]
        lea eax, ds:[ebx-1]
        jmp public_6c2cb51
        public_6c2cb4b : nop
        fld dword ptr ds : [public_6c36320]
        public_6c2cb51 : nop
        test eax, eax
        jle public_6c2ccc1
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ds:[ecx]
        public_6c2cb60 : nop
        fld dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [esi+4]
        fmul st, st(1)
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [edx+4]
        fmul st, st(2)
        add eax, ebp
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ds:[eax+eax*2]
        fmul st, st(3)
        shl ecx, 2
        add edi, ecx
        fstp dword ptr ss : [esp+0xD8]
        fld dword ptr ds : [public_6c361ec]
        fsub st, st(3)
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x58]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xB4]
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fld dword ptr ss : [esp+0xB0]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0xB4]
        fadd dword ptr ss : [esp+0xD8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6c361ec]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0xE0]
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x4C]
        mov ebp, dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [edi], ebp
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [esp+0x94]
        fmul dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [edi+4], ebp
        fstp dword ptr ss : [esp+0x98]
        mov ebp, dword ptr ss : [esp+0x98]
        mov dword ptr ds : [edi+8], ebp
        mov edi, dword ptr ds : [edx+0x18]
        add edi, ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edi+4], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [edx+0x40]
        add eax, eax
        fst dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [edx+0x40]
        fld st(1)
        fstp dword ptr ds : [ecx+eax*4+4]
        fadd dword ptr ss : [esp+0x38]
        fcom dword ptr ds : [public_6c361ec]
        fnstsw ax
        test ah, 0x41
        jne public_6c2cca3
        fstp st(0)
        fld dword ptr ds : [public_6c361ec]
        public_6c2cca3 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        dec eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6c2cb60
        mov ecx, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x7C]
        public_6c2ccc1 : nop
        fstp st(0)
        fadd dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_6c361ec]
        fnstsw ax
        test ah, 0x41
        jne public_6c2ccdc
        fstp st(0)
        fld dword ptr ds : [public_6c361ec]
        public_6c2ccdc : nop
        mov eax, dword ptr ss : [esp+0x34]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x30], ecx
        jl public_6c2c9c0
        public_6c2cced : nop
        test ebp, ebp
        fstp st(0)
        jle public_6c2d302
        fild dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], 0
        fild dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x6C], ebp
        nop 
        lea esp, ss:[esp]
        public_6c2cd10 : nop
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], 0
        lea esp, ss:[esp]
        public_6c2cd20 : nop
        fild dword ptr ss : [esp+0x30]
        fld st(0)
        fadd st, st(2)
        fld dword ptr ds : [public_6c361ec]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x80]
        fld st(4)
        fadd st, st(2)
        fadd st, st(3)
        fst dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_6c361ec]
        fstp dword ptr ss : [esp+0x9C]
        fld st(3)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x38]
        call public_6c34efc
        fstp st(0)
        mov edx, dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x80]
        mov bx, ax
        mov eax, dword ptr ds : [esi+0xC]
        mov word ptr ds : [eax+edx*2], bx
        mov edx, dword ptr ds : [esi+0x10]
        inc edx
        mov dword ptr ds : [esi+0x10], edx
        mov edi, edx
        call public_6c34efc
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [esi+0xC]
        mov bp, ax
        mov word ptr ds : [ecx+edi*2], bp
        inc dword ptr ds : [esi+0x10]
        call public_6c34efc
        fld dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [esi+0xC]
        mov di, ax
        mov eax, dword ptr ds : [esi+0x10]
        mov word ptr ds : [edx+eax*2], di
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0xC]
        inc eax
        mov dword ptr ds : [esi+0x10], eax
        mov word ptr ds : [ecx+eax*2], bp
        mov ebp, dword ptr ds : [esi+0x10]
        inc ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6c34efc
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [edx+ebp*2], ax
        mov edx, dword ptr ds : [esi+0x10]
        inc edx
        mov dword ptr ds : [esi+0x10], edx
        mov ecx, edx
        mov edx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [edx+ecx*2], di
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov word ptr ds : [edx+ecx*2], ax
        mov ebp, dword ptr ds : [esi+0x10]
        inc ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6c34efc
        mov ecx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [ecx+ebp*2], ax
        mov edx, dword ptr ds : [esi+0x10]
        inc edx
        mov dword ptr ds : [esi+0x10], edx
        mov ecx, edx
        mov edx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [edx+ecx*2], di
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov word ptr ds : [edx+ecx*2], ax
        mov ebp, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0xC]
        inc ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov eax, ebp
        mov word ptr ds : [ecx+eax*2], bx
        mov ebx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x7C]
        inc ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, ebx
        mov word ptr ds : [edx+eax*2], di
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x30]
        inc edi
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ss : [esp+0x30], eax
        jl public_6c2cd20
        mov eax, dword ptr ss : [esp+0x34]
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x6C]
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x6C], eax
        jne public_6c2cd10
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebp
        pop ebx
        add esp, 0xCC
        ret 0x18
        public_6c2ce89 : nop
        test ebx, ebx
        jle public_6c2d18a
        mov edx, dword ptr ss : [esp+0xF4]
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_6c2cea2
        public_6c2ce9e : nop
        mov ebx, dword ptr ss : [esp+0x6C]
        public_6c2cea2 : nop
        fld dword ptr ss : [esp+0x60]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x68]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ds : [public_6c361ec]
        fsub st, st(1)
        fld st(0)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(1)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xB0]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0xB4]
        fadd dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0xB0]
        fadd dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0xB4]
        fadd dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x5C]
        fld st(2)
        fmul dword ptr ss : [esp+0x70]
        fld st(3)
        fmul dword ptr ss : [esp+0x74]
        fld st(4)
        fmul dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0xD8]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(4)
        fld st(4)
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xA4]
        fxch st(4)
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xA8]
        fxch st(3)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0xA4]
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x28]
        fstp st(2)
        fstp st(1)
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0xD8]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6c361ec]
        fstp dword ptr ss : [esp+0x34]
        mov edi, ebx
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6c361ec]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ds : [public_6c36320]
        mov edi, edi
        public_6c2d010 : nop
        fld dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [esi+4]
        fmul st, st(1)
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [edx+4]
        fmul st, st(2)
        add eax, ebp
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ds:[eax+eax*2]
        fmul st, st(3)
        shl ecx, 2
        add ebx, ecx
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ds : [public_6c361ec]
        fsub st, st(3)
        fld st(4)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x58]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xC0]
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fld dword ptr ss : [esp+0xBC]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [esp+0xCC]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6c361ec]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0xE0]
        fstp dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x4C]
        mov ebp, dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [ebx], ebp
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [ebx+4], ebp
        fstp dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ds : [edx+0x18]
        add ebx, ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ebx+4], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ds : [edx+0x40]
        add eax, eax
        fst dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [edx+0x40]
        fld st(2)
        fstp dword ptr ds : [ecx+eax*4+4]
        fadd dword ptr ss : [esp+0x38]
        fcom dword ptr ds : [public_6c361ec]
        fnstsw ax
        test ah, 0x41
        jne public_6c2d151
        fstp st(0)
        fld dword ptr ds : [public_6c361ec]
        public_6c2d151 : nop
        mov ecx, dword ptr ds : [esi+8]
        inc ecx
        dec edi
        mov dword ptr ds : [esi+8], ecx
        jne public_6c2d010
        fstp st(0)
        fstp st(0)
        fadd dword ptr ss : [esp+0x38]
        fcom dword ptr ds : [public_6c361ec]
        fnstsw ax
        test ah, 0x41
        jne public_6c2d17c
        fstp st(0)
        fld dword ptr ds : [public_6c361ec]
        public_6c2d17c : nop
        dec dword ptr ss : [esp+0x14]
        jne public_6c2ce9e
        mov ebp, dword ptr ss : [esp+0x7C]
        public_6c2d18a : nop
        xor eax, eax
        fstp st(0)
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], eax
        jle public_6c2d302
        fild dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x38], eax
        public_6c2d1a2 : nop
        fild dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x30], 0
        mov edi, edi
        public_6c2d1b0 : nop
        fild dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x30]
        add edx, eax
        and edx, 0x80000001
        fld st(0)
        fadd st, st(2)
        fst dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [public_6c361ec]
        fstp dword ptr ss : [esp+0x80]
        fld st(2)
        faddp 
        fadd st, st(1)
        fld dword ptr ds : [public_6c361ec]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x14]
        jns public_6c2d1f2
        dec edx
        or edx, 0xFFFFFFFE
        inc edx
        public_6c2d1f2 : nop
        fld dword ptr ss : [esp+0x34]
        je public_6c2d244
        call public_6c34efc
        fld dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [edx+ecx*2], ax
        mov ecx, dword ptr ds : [esi+0x10]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov ebx, ecx
        call public_6c34efc
        mov di, ax
        mov eax, dword ptr ds : [esi+0xC]
        mov word ptr ds : [eax+ebx*2], di
        mov eax, dword ptr ds : [esi+0x10]
        inc eax
        mov dword ptr ds : [esi+0x10], eax
        mov ebp, eax
        call public_6c34efc
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        mov bx, ax
        mov word ptr ds : [ecx+ebp*2], bx
        jmp public_6c2d28e
        public_6c2d244 : nop
        call public_6c34efc
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        mov di, ax
        mov eax, dword ptr ds : [esi+0x10]
        mov word ptr ds : [ecx+eax*2], di
        mov ecx, dword ptr ds : [esi+0x10]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov ebp, ecx
        call public_6c34efc
        mov edx, dword ptr ds : [esi+0xC]
        mov bx, ax
        mov word ptr ds : [edx+ebp*2], bx
        mov eax, dword ptr ds : [esi+0x10]
        inc eax
        mov dword ptr ds : [esi+0x10], eax
        mov ebp, eax
        call public_6c34efc
        fld dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [ecx+ebp*2], ax
        public_6c2d28e : nop
        mov ebp, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        inc ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov eax, ebp
        mov word ptr ds : [edx+eax*2], di
        mov edx, dword ptr ds : [esi+0x10]
        inc edx
        mov dword ptr ds : [esi+0x10], edx
        mov edi, edx
        call public_6c34efc
        mov ecx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [ecx+edi*2], ax
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        mov word ptr ds : [edx+eax*2], bx
        inc dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x30]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        jl public_6c2d1b0
        mov ecx, dword ptr ss : [esp+0x6C]
        fstp st(0)
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        add edx, ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x38], edx
        jl public_6c2d1a2
        fstp st(0)
        public_6c2d302 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xCC
        ret 0x18
        UNREACHABLE_TRAP(0x6c2c690)
        ASM_EXPORT_ENTRY_FIRST(0x6c2c70f, public_6c2c70f)
        ASM_EXPORT_ENTRY(0x6c2c74c, public_6c2c74c)
        ASM_EXPORT_ENTRY(0x6c2c789, public_6c2c789)
        ASM_EXPORT_ENTRY(0x6c2c7fe, public_6c2c7fe)
        ASM_EXPORT_ENTRY(0x6c2c873, public_6c2c873)
        ASM_EXPORT_ENTRY_LAST(0x6c2c8ad, public_6c2c8ad)
    }
}

#undef public_6c2c70f
#undef public_6c2c74c
#undef public_6c2c789
#undef public_6c2c7fe
#undef public_6c2c873
#undef public_6c2c8ad
#undef public_6c2c91d
#undef public_6c2c98b
#undef public_6c2c9c0
#undef public_6c2cb39
#undef public_6c2cb4b
#undef public_6c2cb51
#undef public_6c2cb60
#undef public_6c2cca3
#undef public_6c2ccc1
#undef public_6c2ccdc
#undef public_6c2cced
#undef public_6c2cd10
#undef public_6c2cd20
#undef public_6c2ce89
#undef public_6c2ce9e
#undef public_6c2cea2
#undef public_6c2d010
#undef public_6c2d151
#undef public_6c2d17c
#undef public_6c2d18a
#undef public_6c2d1a2
#undef public_6c2d1b0
#undef public_6c2d1f2
#undef public_6c2d244
#undef public_6c2d28e
#undef public_6c2d302

#pragma init_seg(compiler)
extern "C" void const* const public_6c2c70f = __AsmFindLabelExport(&internal_6c2c690, 0x6c2c70f);
extern "C" void const* const public_6c2c74c = __AsmFindLabelExport(&internal_6c2c690, 0x6c2c74c);
extern "C" void const* const public_6c2c789 = __AsmFindLabelExport(&internal_6c2c690, 0x6c2c789);
extern "C" void const* const public_6c2c7fe = __AsmFindLabelExport(&internal_6c2c690, 0x6c2c7fe);
extern "C" void const* const public_6c2c873 = __AsmFindLabelExport(&internal_6c2c690, 0x6c2c873);
extern "C" void const* const public_6c2c8ad = __AsmFindLabelExport(&internal_6c2c690, 0x6c2c8ad);
