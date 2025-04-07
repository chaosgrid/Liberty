#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6377cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6382210);
CLANG_FORWARD_PROC_SYMBOL(public_6382930);

#define public_6382286 _public_6382286
#define public_638229a _public_638229a
#define public_638230a _public_638230a
#define public_638234d _public_638234d
#define public_6382390 _public_6382390
#define public_63823c8 _public_63823c8
#define public_63823e2 _public_63823e2
#define public_6382403 _public_6382403
#define public_6382424 _public_6382424
#define public_6382439 _public_6382439
#define public_6382492 _public_6382492
#define public_6382494 _public_6382494
#define public_63824bb _public_63824bb
#define public_63824bd _public_63824bd
#define public_63824da _public_63824da
#define public_6382511 _public_6382511
#define public_6382548 _public_6382548
#define public_6382553 _public_6382553
#define public_6382555 _public_6382555
#define public_6382569 _public_6382569
#define public_63825af _public_63825af
#define public_63825e7 _public_63825e7
#define public_6382608 _public_6382608
#define public_638261a _public_638261a
#define public_638264e _public_638264e
#define public_6382662 _public_6382662
#define public_638269f _public_638269f
#define public_63826f2 _public_63826f2
#define public_63826f4 _public_63826f4
#define public_6382708 _public_6382708
#define public_6382741 _public_6382741
#define public_6382743 _public_6382743
#define public_6382766 _public_6382766
#define public_6382768 _public_6382768
#define public_63827cf _public_63827cf

PROC_DECLARE(0x6382210, internal_6382210, public_6382210);
extern "C" NAKED register_t __cdecl internal_6382210()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
/*FIXUP push offset public_658b6c0 @0x6382219*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b6c0
        push 0
/*FIXUP push offset public_63f6c5c @0x6382220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6c5c
        call public_6377cf0
        mov eax, dword ptr ds : [public_658b1e4]
        add esp, 0xC
        test eax, eax
        jne public_638229a
        mov eax, dword ptr ds : [public_658b6bc]
        mov ecx, dword ptr ds : [public_658b6b8]
        mov edx, dword ptr ds : [public_658b6ac]
        push eax
        mov eax, dword ptr ds : [public_658b6a8]
        push ecx
        mov ecx, dword ptr ds : [public_658b24c]
        push edx
        push eax
        push ecx
        call public_6382930
        fstp qword ptr ds : [public_658b6a0]
        mov eax, dword ptr ds : [public_658b1a8]
        add esp, 0x14
        test eax, eax
        je public_6382286
        fld qword ptr ds : [public_658b1b0]
        fmul qword ptr ds : [public_658b6a8]
        fadd qword ptr ds : [public_658b6a0]
        fstp qword ptr ds : [public_658b6a0]
/*FIXUP public_6382286 : nop
        push offset public_658b6a0 @0x6382286*/
  FIXUP public_6382286 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b6a0
        push 0
/*FIXUP push offset public_63f6c4c @0x638228d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6c4c
        call public_6377cf0
        add esp, 0xC
        public_638229a : nop
        fld qword ptr ds : [public_658b6a8]
        mov ecx, dword ptr ds : [public_658b1a8]
        test ecx, ecx
        fmul qword ptr ds : [public_63a5a08]
        mov dword ptr ds : [public_658b6c8], 0
        mov dword ptr ds : [public_658b6cc], 0x100000
        fstp qword ptr ds : [public_658b6d0]
        fild dword ptr ds : [public_658b24c]
        fld st(0)
        fmul qword ptr ds : [public_63a5a08]
        fsqrt 
        fst qword ptr ds : [public_658b6d8]
        fmul qword ptr ds : [public_658b6a8]
        fstp qword ptr ds : [public_658b6e0]
        fmul qword ptr ds : [public_63a5a00]
        fstp qword ptr ds : [public_658b688]
        je public_638230a
        fld qword ptr ds : [public_658b688]
        fadd qword ptr ds : [public_658b1b0]
        fstp qword ptr ds : [public_658b688]
        public_638230a : nop
        fld qword ptr ds : [public_658b040]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_638234d
        test ecx, ecx
        fld qword ptr ds : [public_658b040]
        fsub qword ptr ds : [public_658b688]
        fstp qword ptr ds : [public_658b040]
        je public_638234d
/*FIXUP push offset public_658b040 @0x6382333*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b040
        push 0
/*FIXUP push offset public_63f6c30 @0x638233a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6c30
        call public_6377cf0
        mov ecx, dword ptr ds : [public_658b1a8]
        add esp, 0xC
        public_638234d : nop
        fld qword ptr ds : [public_658b048]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6382390
        test ecx, ecx
        fld qword ptr ds : [public_658b048]
        fsub qword ptr ds : [public_658b688]
        fstp qword ptr ds : [public_658b048]
        je public_6382390
/*FIXUP push offset public_658b048 @0x6382376*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b048
        push 0
/*FIXUP push offset public_63f6c14 @0x638237d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6c14
        call public_6377cf0
        mov ecx, dword ptr ds : [public_658b1a8]
        add esp, 0xC
        public_6382390 : nop
        test ecx, ecx
        fld qword ptr ds : [public_658b6a0]
        fadd st(0), st
        fld st(0)
        fadd qword ptr ds : [public_658b0b0]
        fstp qword ptr ds : [public_658b0b0]
        fadd qword ptr ds : [public_658b0b8]
        fstp qword ptr ds : [public_658b0b8]
        je public_6382403
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_63823c8
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        je public_63823e2
/*FIXUP public_63823c8 : nop
        push offset public_658b0b0 @0x63823c8*/
  FIXUP public_63823c8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b0b0
        push 0
/*FIXUP push offset public_63f6bf4 @0x63823cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6bf4
        call public_6377cf0
        mov ecx, dword ptr ds : [public_658b1a8]
        add esp, 0xC
        public_63823e2 : nop
        test ecx, ecx
        je public_6382403
        mov eax, dword ptr ds : [public_658b0e4]
        test eax, eax
        je public_6382403
/*FIXUP push offset public_658b0b8 @0x63823ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b0b8
        push 0
/*FIXUP push offset public_63f6bd4 @0x63823f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6bd4
        call public_6377cf0
        add esp, 0xC
        public_6382403 : nop
        fld qword ptr ds : [public_63a5940]
        fld qword ptr ds : [public_63a5940]
        fcomp qword ptr ds : [public_658b040]
        fnstsw ax
        test ah, 0x41
        jne public_6382424
        fstp st(0)
        fld qword ptr ds : [public_658b040]
        public_6382424 : nop
        fcom qword ptr ds : [public_658b048]
        fnstsw ax
        test ah, 0x41
        jne public_6382439
        fstp st(0)
        fld qword ptr ds : [public_658b048]
        public_6382439 : nop
        fild dword ptr ds : [public_658b24c]
        fstp qword ptr ss : [esp]
        fld st(0)
        fmul st, st(1)
        fsubr qword ptr ds : [public_63a5940]
        fsqrt 
        fld qword ptr ss : [esp]
        fsqrt 
        fmulp 
        fmul qword ptr ds : [public_658b6c0]
        fadd qword ptr ds : [public_658b6a0]
        fstp qword ptr ds : [public_658b700]
        fstp st(0)
        fld qword ptr ss : [esp]
        fmul qword ptr ds : [public_658b0b0]
        fadd qword ptr ds : [public_658b6a0]
        fld qword ptr ds : [public_658b700]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6382492
        fstp qword ptr ds : [public_658b700]
        jmp public_6382494
        public_6382492 : nop
        fstp st(0)
        public_6382494 : nop
        fld qword ptr ss : [esp]
        fmul qword ptr ds : [public_658b0b8]
        fadd qword ptr ds : [public_658b6a0]
        fld qword ptr ds : [public_658b700]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_63824bb
        fstp qword ptr ds : [public_658b700]
        jmp public_63824bd
        public_63824bb : nop
        fstp st(0)
        public_63824bd : nop
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        je public_63824da
/*FIXUP push offset public_658b700 @0x63824c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b700
        push 0
/*FIXUP push offset public_63f6bc8 @0x63824cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6bc8
        call public_6377cf0
        add esp, 0xC
        public_63824da : nop
        fld qword ptr ds : [public_658b700]
        fmul qword ptr ds : [public_63a59f8]
        fstp qword ptr ds : [public_658b6f8]
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6382548
        mov eax, dword ptr ds : [public_658b080]
        test eax, eax
        jne public_6382511
        mov eax, dword ptr ds : [public_658b084]
        test eax, eax
        je public_6382548
        public_6382511 : nop
        fild dword ptr ds : [public_658b24c]
        mov dword ptr ds : [public_658b248], 1
        fsqrt 
        fmul qword ptr ds : [public_658b878]
        fadd qword ptr ds : [public_658b6a0]
        fadd st(0), st
        fld qword ptr ds : [public_658b6f8]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6382553
        fstp qword ptr ds : [public_658b6f8]
        jmp public_6382555
        public_6382548 : nop
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_6382569
        jmp public_6382555
        public_6382553 : nop
        fstp st(0)
/*FIXUP public_6382555 : nop
        push offset public_658b6f8 @0x6382555*/
  FIXUP public_6382555 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b6f8
        push 0
/*FIXUP push offset public_63f6bb8 @0x638255c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6bb8
        call public_6377cf0
        add esp, 0xC
        public_6382569 : nop
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_658b6a0]
        fnstsw ax
        test ah, 1
        je public_63825af
        mov edx, dword ptr ds : [public_658b6a4]
        mov eax, dword ptr ds : [public_658b6a0]
        mov ecx, dword ptr ds : [public_658b87c]
        push edx
        mov edx, dword ptr ds : [public_658b878]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63f6b5c @0x6382597*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6b5c
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x20
        public_63825af : nop
        fld qword ptr ds : [public_658b0c8]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_6382662
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        jne public_63825e7
        mov eax, dword ptr ds : [public_658b6a0]
        mov ecx, dword ptr ds : [public_658b6a4]
        mov dword ptr ds : [public_658b0c8], eax
        mov dword ptr ds : [public_658b0cc], ecx
        jmp public_638261a
        public_63825e7 : nop
        cmp dword ptr ds : [public_658b24c], 3
        jg public_6382608
        mov edx, dword ptr ds : [public_658b0b0]
        mov eax, dword ptr ds : [public_658b0b4]
        mov dword ptr ds : [public_658b0c8], edx
        mov dword ptr ds : [public_658b0cc], eax
        jmp public_638261a
        public_6382608 : nop
        fld qword ptr ds : [public_658b0b0]
        fmul qword ptr ds : [public_63a59f0]
        fstp qword ptr ds : [public_658b0c8]
        public_638261a : nop
        mov eax, dword ptr ds : [public_658b018]
        test eax, eax
        je public_638264e
        fld qword ptr ds : [public_658b0c8]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 0x41
        jne public_638264e
        mov ecx, dword ptr ds : [public_658b020]
        mov edx, dword ptr ds : [public_658b024]
        mov dword ptr ds : [public_658b0c8], ecx
        mov dword ptr ds : [public_658b0cc], edx
/*FIXUP public_638264e : nop
        push offset public_658b0c8 @0x638264e*/
  FIXUP public_638264e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b0c8
        push 0
/*FIXUP push offset public_63f6b48 @0x6382655*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6b48
        call public_6377cf0
        add esp, 0xC
        public_6382662 : nop
        fld qword ptr ds : [public_658b098]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_638269f
        mov eax, dword ptr ds : [public_658b0c8]
        mov ecx, dword ptr ds : [public_658b0cc]
/*FIXUP push offset public_658b098 @0x6382680*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b098
        push 0
/*FIXUP push offset public_63f6b34 @0x6382687*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6b34
        mov dword ptr ds : [public_658b098], eax
        mov dword ptr ds : [public_658b09c], ecx
        call public_6377cf0
        add esp, 0xC
        public_638269f : nop
        mov eax, dword ptr ds : [public_658b018]
        test eax, eax
        jne public_6382708
        fld qword ptr ds : [public_658b0c8]
        fadd st(0), st
        fstp qword ptr ds : [public_658b020]
        fld qword ptr ds : [public_658b040]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_63826f4
        fld qword ptr ds : [public_63a5940]
        fsub qword ptr ds : [public_658b040]
        fmul qword ptr ds : [public_658b6a8]
        fld qword ptr ds : [public_658b020]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_63826f2
        fstp qword ptr ds : [public_658b020]
        jmp public_63826f4
        public_63826f2 : nop
        fstp st(0)
/*FIXUP public_63826f4 : nop
        push offset public_658b020 @0x63826f4*/
  FIXUP public_63826f4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b020
        push 0
/*FIXUP push offset public_63f6b24 @0x63826fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6b24
        call public_6377cf0
        add esp, 0xC
        public_6382708 : nop
        fld qword ptr ds : [public_658b098]
        mov eax, dword ptr ds : [public_658b024]
        fmul qword ptr ds : [public_63a59e8]
        mov edx, dword ptr ds : [public_658b020]
        fld qword ptr ds : [public_658b020]
        mov dword ptr ds : [public_658b714], eax
        mov dword ptr ds : [public_658b710], edx
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6382741
        fstp qword ptr ds : [public_658b710]
        jmp public_6382743
        public_6382741 : nop
        fstp st(0)
        public_6382743 : nop
        fld qword ptr ds : [public_658b0c8]
        fmul qword ptr ds : [public_63a59e8]
        fld qword ptr ds : [public_658b710]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6382766
        fstp qword ptr ds : [public_658b710]
        jmp public_6382768
        public_6382766 : nop
        fstp st(0)
/*FIXUP public_6382768 : nop
        push offset public_658b710 @0x6382768*/
  FIXUP public_6382768 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b710
        push 0
/*FIXUP push offset public_63f6b18 @0x638276f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6b18
        call public_6377cf0
        fld qword ptr ds : [public_658b020]
        fadd qword ptr ds : [public_63a59e0]
        add esp, 0xC
        fcomp qword ptr ds : [public_658b0c8]
        fnstsw ax
        test ah, 1
        je public_63827cf
        mov eax, dword ptr ds : [public_658b030]
        test eax, eax
        jne public_63827cf
        mov eax, dword ptr ds : [public_658b05c]
        test eax, eax
        jne public_63827cf
        mov ecx, dword ptr ds : [public_658b024]
        mov edx, dword ptr ds : [public_658b020]
        mov eax, dword ptr ds : [public_658b0cc]
        push ecx
        mov ecx, dword ptr ds : [public_658b0c8]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63f6aa4 @0x63827c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6aa4
        call public_6356960
        add esp, 0x14
        public_63827cf : nop
        fld qword ptr ds : [public_658b6a0]
        mov edx, dword ptr ds : [public_658b6a0]
        mov eax, dword ptr ds : [public_658b6a4]
        fchs 
        fstp qword ptr ds : [public_658b898]
        mov dword ptr ds : [public_658b890], edx
        mov dword ptr ds : [public_658b894], eax
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6382210)
    }
}

#undef public_6382286
#undef public_638229a
#undef public_638230a
#undef public_638234d
#undef public_6382390
#undef public_63823c8
#undef public_63823e2
#undef public_6382403
#undef public_6382424
#undef public_6382439
#undef public_6382492
#undef public_6382494
#undef public_63824bb
#undef public_63824bd
#undef public_63824da
#undef public_6382511
#undef public_6382548
#undef public_6382553
#undef public_6382555
#undef public_6382569
#undef public_63825af
#undef public_63825e7
#undef public_6382608
#undef public_638261a
#undef public_638264e
#undef public_6382662
#undef public_638269f
#undef public_63826f2
#undef public_63826f4
#undef public_6382708
#undef public_6382741
#undef public_6382743
#undef public_6382766
#undef public_6382768
#undef public_63827cf
