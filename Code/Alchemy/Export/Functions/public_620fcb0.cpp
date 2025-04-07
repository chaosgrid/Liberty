#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6208640);
CLANG_FORWARD_PROC_SYMBOL(public_620fcb0);
CLANG_FORWARD_PROC_SYMBOL(public_62107f0);
CLANG_FORWARD_PROC_SYMBOL(public_6210810);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6247c66);

#define public_620fddb _public_620fddb
#define public_620fe58 _public_620fe58
#define public_620fe89 _public_620fe89
#define public_620fe91 _public_620fe91
#define public_620feeb _public_620feeb
#define public_620fef3 _public_620fef3
#define public_620ff4b _public_620ff4b
#define public_620ff67 _public_620ff67
#define public_620ff77 _public_620ff77
#define public_620ff8d _public_620ff8d
#define public_621007c _public_621007c
#define public_621021a _public_621021a
#define public_6210231 _public_6210231
#define public_62103c6 _public_62103c6
#define public_62103cc _public_62103cc
#define public_6210439 _public_6210439
#define public_621043b _public_621043b
#define public_62104a8 _public_62104a8
#define public_62104aa _public_62104aa
#define public_6210518 _public_6210518
#define public_621051a _public_621051a
#define public_6210586 _public_6210586
#define public_621058a _public_621058a
#define public_62105b7 _public_62105b7
#define public_621066b _public_621066b
#define public_6210694 _public_6210694

PROC_DECLARE(0x620fcb0, internal_620fcb0, public_620fcb0);
extern "C" NAKED register_t __cdecl internal_620fcb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247c66 @0x620fcb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247c66
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF0
        push ebx
        mov ebx, dword ptr ds : [public_6257904]
        push ebp
        mov ebp, dword ptr ss : [esp+0x108]
        push esi
        lea eax, ss:[esp+0x24]
        lea esi, ss:[ebp+0xD8]
        inc ebx
        push eax
        mov ecx, esi
        mov dword ptr ds : [public_6257904], ebx
        call public_62107f0
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x104], 0
        push ecx
        mov ecx, esi
        call public_6210810
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x24]
        cmp edx, eax
        mov byte ptr ss : [esp+0x104], 1
        je public_6210694
        mov eax, dword ptr ds : [public_6257908]
        push edi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x40]
        mov ebx, eax
        lea edx, ss:[ebp+0x4C]
        lea eax, ss:[esp+0xD0]
        push edx
        push eax
        mov ecx, ebx
        call public_6208640
        mov eax, dword ptr ss : [ebp+0xAC]
        lea edi, ss:[ebp+0xEC]
        mov ecx, 0xC
        lea esi, ss:[esp+0xD0]
        rep movsd
        xor esi, esi
        lea edx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x6C], esi
        mov dword ptr ss : [esp+0x68], esi
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xD0]
        mov eax, dword ptr ss : [ebp+0xAC]
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xD4]
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x70], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x74], ecx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[ebp+0x120]
        lea ecx, ss:[esp+0x94]
        push eax
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x84], edx
        call public_6206c10
        mov eax, dword ptr ds : [public_62579c8]
        add esp, 0xC
        cmp eax, esi
        jne public_620fddb
        call public_623e830
        mov dword ptr ds : [public_62579c8], eax
        public_620fddb : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x94]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], eax
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x40], ecx
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x44]
        fdiv dword ptr ss : [ebp+0x11C]
        fcom dword ptr ds : [public_62559fc]
        fnstsw ax
        test ah, 5
        jp public_620fe58
        fdiv dword ptr ds : [public_62559fc]
        fsubr qword ptr ds : [public_624c370]
        fld st(0)
        fmul st, st(1)
        fsubr qword ptr ds : [public_624c370]
        fstp dword ptr ss : [esp+0x34]
        jmp public_620fe91
        public_620fe58 : nop
        fcom dword ptr ds : [public_6255a00]
        fnstsw ax
        test ah, 5
        jp public_620fe89
        fsub dword ptr ds : [public_62559fc]
        fld dword ptr ds : [public_6255a00]
        fsub dword ptr ds : [public_62559fc]
        fdivp 
        fld st(0)
        fmul st, st(1)
        fsubr dword ptr ds : [public_624bac4]
        fstp dword ptr ss : [esp+0x34]
        jmp public_620fe91
        public_620fe89 : nop
        mov dword ptr ss : [esp+0x34], 0
        public_620fe91 : nop
        fstp st(0)
        fld dword ptr ss : [ebp+0x12C]
        fsub dword ptr ss : [esp+0x44]
        fabs 
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6255a04]
        fnstsw ax
        and eax, 0x4100
        jne public_620fef3
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6255a08]
        fnstsw ax
        test ah, 5
        jp public_620feeb
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_6255a04]
        fld dword ptr ds : [public_6255a08]
        fsub dword ptr ds : [public_6255a04]
        fdivp 
        fsubr qword ptr ds : [public_624c370]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        jmp public_620fef3
        public_620feeb : nop
        mov dword ptr ss : [esp+0x34], 0
        public_620fef3 : nop
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x6C]
        push edx
        push eax
        push 4
        mov ecx, offset public_625797c
        call public_6240f50
        test al, al
        je public_621066b
        lea esi, ss:[ebp+0xBC]
        mov ecx, 5
        lea edi, ss:[esp+0x50]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0xE8]
        mov eax, dword ptr ds : [ecx+0x60]
        mov edx, eax
        and edx, 0x1000
        cmp edx, 0x1000
        jne public_620ff4b
        fld dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x54], ecx
        public_620ff4b : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_620ff67
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x58], edx
        public_620ff67 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp eax, ecx
        je public_62105b7
        public_620ff77 : nop
        lea esi, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_62579c8]
        test eax, eax
        jne public_620ff8d
        call public_623e830
        mov dword ptr ds : [public_62579c8], eax
        public_620ff8d : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0xEC]
        push esi
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_624c368]
        fnstsw ax
        and eax, 0x4100
        je public_6210586
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx+0x38]
        fcomp dword ptr ds : [public_624c368]
        fnstsw ax
        and eax, 0x4100
        je public_621058a
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ss : [ebp+0xE8]
        mov eax, dword ptr ds : [edx+0x70]
        mov edx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xE8]
        mov edx, dword ptr ss : [ebp+0x8C]
        fmul dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax+0x78]
        push esi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [ecx+0x1C]
        fmul qword ptr ds : [public_624bab0]
        mov al, byte ptr ds : [public_62579cc]
        test al, al
        fstp dword ptr ss : [esp+0x48]
        jne public_621007c
        mov eax, dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax+0x38]
        lea ecx, ss:[esp+0xC4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0xC0]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        public_621007c : nop
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x3C]
        mov ecx, 0x5F3759DF
        fsubp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x40]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x38]
        fsubp 
        fld dword ptr ss : [esp+0x24]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x24]
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmulp st(2), st
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fsubp st(2), st
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x64]
        sar eax, 1
        sub ecx, eax
        sub esp, 0xC
        mov dword ptr ss : [esp+0x38], ecx
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [public_62559f4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_62559f4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_62559f4]
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0xB8]
        call public_6206ab0
        fld dword ptr ss : [ebp+0x11C]
        fdivr dword ptr ds : [public_624bac4]
        sub esp, 0xC
        lea ecx, ss:[esp+0xAC]
        fld dword ptr ss : [esp+0xC0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xBC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xB8]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6206ab0
        fld dword ptr ss : [esp+0xA4]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xA8]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fmul qword ptr ds : [public_624bab0]
        fcom qword ptr ds : [public_624c360]
        fnstsw ax
        test ah, 5
        jp public_621021a
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0
        public_621021a : nop
        fcom dword ptr ds : [public_62559f8]
        fnstsw ax
        and eax, 0x4100
        jne public_6210231
        fstp st(0)
        fld dword ptr ds : [public_62559f8]
        public_6210231 : nop
        fadd dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x88]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ds : [public_624c358]
        sub esp, 0xC
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x8C]
        fmul dword ptr ds : [public_624c358]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [public_624c358]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ds : [public_624c354]
        sub esp, 0xC
        lea ecx, ss:[esp+0xD0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x8C]
        fmul dword ptr ds : [public_624c354]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [public_624c354]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x14]
        fchs 
        fld dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_624c350]
        fnstsw ax
        and eax, 0x4100
        jne public_6210586
        mov edx, dword ptr ss : [ebp+0xE8]
        push esi
        mov eax, dword ptr ds : [edx+0x74]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov esi, eax
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_624babc]
        call public_6246188
        mov edi, dword ptr ds : [public_6257980]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0xC8]
        shl eax, 0x18
        mov ecx, edi
        or esi, eax
        mov eax, dword ptr ds : [public_6257994]
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_62103c6
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [public_625798c]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x5C]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_625798c]
        mov ebx, dword ptr ds : [public_6257980]
        mov eax, dword ptr ds : [public_6257994]
        add ecx, 0x18
        inc word ptr ds : [public_6257980]
        mov edi, dword ptr ds : [public_6257980]
        mov dword ptr ds : [public_625798c], ecx
        jmp public_62103cc
        public_62103c6 : nop
        fstp st(0)
        fstp st(0)
        mov ebx, eax
        public_62103cc : nop
        mov edx, edi
        and edx, 0xFFFF
        cmp edx, eax
        jg public_6210439
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [public_625798c]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x5C]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_625798c]
        mov edx, dword ptr ds : [public_6257980]
        mov eax, dword ptr ds : [public_6257994]
        add ecx, 0x18
        inc word ptr ds : [public_6257980]
        mov edi, dword ptr ds : [public_6257980]
        mov dword ptr ds : [public_625798c], ecx
        jmp public_621043b
        public_6210439 : nop
        mov edx, eax
        public_621043b : nop
        mov ecx, edi
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_62104a8
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [public_625798c]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_625798c]
        mov eax, dword ptr ds : [public_6257994]
        add ecx, 0x18
        mov dword ptr ds : [public_625798c], ecx
        mov ecx, dword ptr ds : [public_6257980]
        inc word ptr ds : [public_6257980]
        mov edi, dword ptr ds : [public_6257980]
        jmp public_62104aa
        public_62104a8 : nop
        mov ecx, eax
        public_62104aa : nop
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x9C]
        and edi, 0xFFFF
        cmp edi, eax
        fstp dword ptr ss : [esp+0x30]
        jg public_6210518
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x94]
        mov eax, dword ptr ds : [public_625798c]
        mov edi, dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [public_625798c]
        mov eax, dword ptr ds : [public_6257980]
        add edi, 0x18
        inc word ptr ds : [public_6257980]
        mov dword ptr ds : [public_625798c], edi
        jmp public_621051a
        public_6210518 : nop
        fstp st(0)
        public_621051a : nop
        mov edi, dword ptr ds : [public_6257998]
        xor esi, esi
        mov si, word ptr ds : [public_6257982]
        add esi, 5
        cmp esi, edi
        jg public_6210586
        mov esi, dword ptr ds : [public_6257990]
        mov word ptr ds : [esi], ax
        mov eax, dword ptr ds : [public_6257990]
        mov word ptr ds : [eax+2], cx
        mov eax, dword ptr ds : [public_6257990]
        mov word ptr ds : [eax+4], dx
        mov eax, dword ptr ds : [public_6257990]
        mov word ptr ds : [eax+6], dx
        mov edx, dword ptr ds : [public_6257990]
        mov word ptr ds : [edx+8], cx
        mov eax, dword ptr ds : [public_6257990]
        mov word ptr ds : [eax+0xA], bx
        mov edx, dword ptr ds : [public_6257990]
        add word ptr ds : [public_6257982], 6
        add edx, 0xC
        add word ptr ds : [public_6257988], 2
        mov dword ptr ds : [public_6257990], edx
        public_6210586 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        public_621058a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, 0x30
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jne public_620ff77
        public_62105b7 : nop
        mov ecx, offset public_625797c
        call public_6241070
        test eax, eax
        je public_621066b
        mov edi, dword ptr ds : [public_62578e8]
        mov eax, dword ptr ds : [public_6257bc0]
        inc edi
        mov dword ptr ds : [public_62578e8], edi
        mov edx, dword ptr ss : [ebp+0xE8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+0x68]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [ebp+0xE8]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ss : [ebp+0xBC]
        push edx
        push 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x108]
        lea ecx, ss:[esp+0xD0]
        call public_6206c70
        mov eax, dword ptr ds : [public_6257bc0]
        lea edx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0xFC], 0
        mov dword ptr ss : [esp+0xF8], 0
        mov dword ptr ss : [esp+0xF4], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, offset public_625797c
        call public_6241180
        public_621066b : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [ebp+0x120], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [ebp+0x124], ecx
        mov dword ptr ss : [ebp+0x128], edx
        mov dword ptr ss : [ebp+0x12C], eax
        pop edi
        public_6210694 : nop
        mov ecx, dword ptr ss : [esp+0xFC]
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xFC
        ret 4
        UNREACHABLE_TRAP(0x620fcb0)
    }
}

#undef public_620fddb
#undef public_620fe58
#undef public_620fe89
#undef public_620fe91
#undef public_620feeb
#undef public_620fef3
#undef public_620ff4b
#undef public_620ff67
#undef public_620ff77
#undef public_620ff8d
#undef public_621007c
#undef public_621021a
#undef public_6210231
#undef public_62103c6
#undef public_62103cc
#undef public_6210439
#undef public_621043b
#undef public_62104a8
#undef public_62104aa
#undef public_6210518
#undef public_621051a
#undef public_6210586
#undef public_621058a
#undef public_62105b7
#undef public_621066b
#undef public_6210694
