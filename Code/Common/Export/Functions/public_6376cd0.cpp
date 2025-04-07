#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6376cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6377cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6384610);
CLANG_FORWARD_PROC_SYMBOL(public_6384670);

#define public_6376d10 _public_6376d10
#define public_6376d8d _public_6376d8d
#define public_6376d9e _public_6376d9e
#define public_6376da6 _public_6376da6
#define public_6376dea _public_6376dea
#define public_6376e3e _public_6376e3e
#define public_6376e6d _public_6376e6d
#define public_6376e96 _public_6376e96
#define public_6376ec7 _public_6376ec7
#define public_6376eed _public_6376eed
#define public_6376ef5 _public_6376ef5
#define public_6376f05 _public_6376f05
#define public_6376f1b _public_6376f1b
#define public_6376f41 _public_6376f41
#define public_6376f5e _public_6376f5e
#define public_6376f92 _public_6376f92
#define public_6376fa0 _public_6376fa0
#define public_6376fa6 _public_6376fa6
#define public_6376fb6 _public_6376fb6
#define public_6376fbb _public_6376fbb
#define public_6376fc8 _public_6376fc8
#define public_6376fd6 _public_6376fd6
#define public_6376ffb _public_6376ffb
#define public_6377015 _public_6377015
#define public_637703c _public_637703c
#define public_6377067 _public_6377067
#define public_6377080 _public_6377080
#define public_6377093 _public_6377093
#define public_63770dc _public_63770dc
#define public_63770e2 _public_63770e2
#define public_6377119 _public_6377119
#define public_6377122 _public_6377122
#define public_6377138 _public_6377138
#define public_637715c _public_637715c
#define public_6377170 _public_6377170
#define public_6377176 _public_6377176
#define public_6377184 _public_6377184
#define public_63771b4 _public_63771b4
#define public_63771bf _public_63771bf
#define public_63771d0 _public_63771d0
#define public_63771e2 _public_63771e2
#define public_63771e8 _public_63771e8
#define public_63771ec _public_63771ec
#define public_637720a _public_637720a
#define public_6377251 _public_6377251
#define public_637728b _public_637728b
#define public_637728d _public_637728d
#define public_63772b8 _public_63772b8
#define public_6377305 _public_6377305
#define public_637732e _public_637732e
#define public_6377348 _public_6377348
#define public_637735c _public_637735c
#define public_6377369 _public_6377369
#define public_637737d _public_637737d
#define public_637738c _public_637738c
#define public_637739b _public_637739b
#define public_63773a7 _public_63773a7
#define public_63773b9 _public_63773b9
#define public_63773cc _public_63773cc
#define public_63773e3 _public_63773e3
#define public_63773ea _public_63773ea
#define public_63773f0 _public_63773f0
#define public_6377400 _public_6377400
#define public_6377412 _public_6377412
#define public_6377417 _public_6377417
#define public_637741f _public_637741f
#define public_6377458 _public_6377458
#define public_637745c _public_637745c
#define public_6377469 _public_6377469
#define public_6377486 _public_6377486
#define public_637749c _public_637749c
#define public_63774c5 _public_63774c5
#define public_6377511 _public_6377511
#define public_637752a _public_637752a
#define public_6377540 _public_6377540
#define public_637756a _public_637756a
#define public_6377589 _public_6377589
#define public_63775b7 _public_63775b7
#define public_63775cb _public_63775cb
#define public_63775db _public_63775db
#define public_63775ee _public_63775ee

PROC_DECLARE(0x6376cd0, internal_6376cd0, public_6376cd0);
extern "C" NAKED register_t __cdecl internal_6376cd0()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_63991e8]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6376d10
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_658b268 @0x6376cfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x6376d00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
/*FIXUP push offset public_63f2c88 @0x6376d05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2c88
        push eax
        call ebp
        add esp, 0x10
        public_6376d10 : nop
        cmp dword ptr ds : [public_658b0d4], ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [public_658b25c], edi
        mov dword ptr ds : [public_658b258], ecx
        mov dword ptr ds : [public_658b254], edx
        mov dword ptr ds : [public_658b250], esi
        mov dword ptr ds : [public_658b24c], esi
        jne public_6376da6
        cmp dword ptr ds : [public_658b0a0], ebx
        jne public_6376da6
        cmp dword ptr ds : [public_658b0e8], ebx
        jne public_6376da6
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_6376da6
        cmp esi, 4
        mov dword ptr ds : [public_658b0a8], 1
        jg public_6376d8d
        push ebx
        push ebx
        mov dword ptr ds : [public_658b0e8], 1
/*FIXUP push offset public_63f2c7c @0x6376d86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2c7c
        jmp public_6376d9e
        public_6376d8d : nop
        push ebx
        push ebx
        mov dword ptr ds : [public_658b0a0], 1
/*FIXUP push offset public_63f2c6c @0x6376d99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2c6c
        public_6376d9e : nop
        call public_6377cf0
        add esp, 0xC
        public_6376da6 : nop
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6376dea
        cmp dword ptr ds : [public_658b050], ebx
        je public_6376dea
        cmp dword ptr ds : [public_658b1dc], ebx
        jne public_6376dea
        cmp dword ptr ds : [public_658b1e0], ebx
        jne public_6376dea
        push ebx
        push ebx
/*FIXUP push offset public_63f2c5c @0x6376dd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2c5c
        mov dword ptr ds : [public_658b1e0], 1
        call public_6377cf0
        add esp, 0xC
        public_6376dea : nop
        cmp dword ptr ds : [public_658b0a8], ebx
        je public_6376e3e
        cmp dword ptr ds : [public_658b0e4], ebx
        jne public_6376e3e
        fld qword ptr ds : [public_658b040]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_6376e3e
        fld qword ptr ds : [public_658b0b0]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        je public_6376e3e
        push ebx
        mov eax, 1
        push ebx
/*FIXUP push offset public_63f2c4c @0x6376e27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2c4c
        mov dword ptr ds : [public_658b674], eax
        mov dword ptr ds : [public_658b8e8], eax
        call public_6377cf0
        add esp, 0xC
        public_6376e3e : nop
        cmp dword ptr ds : [public_658b07c], ebx
        jne public_6376e6d
        fld qword ptr ds : [public_658b090]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_6376e6d
        cmp dword ptr ds : [public_658b088], ebx
        jne public_6376e6d
        cmp dword ptr ds : [public_658b050], ebx
        je public_6376ef5
        public_6376e6d : nop
        cmp dword ptr ds : [public_658b0fc], ebx
        jne public_6376e96
        cmp dword ptr ds : [public_658b104], ebx
        jne public_6376e96
        push ebx
        push ebx
/*FIXUP push offset public_63f2c44 @0x6376e7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2c44
        mov dword ptr ds : [public_658b0fc], 1
        call public_6377cf0
        add esp, 0xC
        public_6376e96 : nop
        cmp dword ptr ds : [public_658b050], ebx
        je public_6376ef5
        cmp dword ptr ds : [public_658b080], ebx
        je public_6376ec7
        cmp dword ptr ds : [public_658b084], ebx
        jne public_6376ec7
        push ebx
        push ebx
/*FIXUP push offset public_63f1ba0 @0x6376eb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1ba0
        mov dword ptr ds : [public_658b084], 1
        call public_6377cf0
        add esp, 0xC
        public_6376ec7 : nop
        cmp dword ptr ds : [public_658b050], ebx
        je public_6376ef5
        cmp dword ptr ds : [public_658b074], ebx
        je public_6376eed
/*FIXUP push offset public_63f2be0 @0x6376ed7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2be0
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_6376eed : nop
        cmp dword ptr ds : [public_658b050], ebx
        jne public_6376f1b
        public_6376ef5 : nop
        cmp dword ptr ds : [public_658b21c], ebx
        jne public_6376f05
        cmp dword ptr ds : [public_658b028], ebx
        je public_6376f41
/*FIXUP public_6376f05 : nop
        push offset public_63f2b74 @0x6376f05*/
  FIXUP public_6376f05 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2b74
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_6376f1b : nop
        cmp dword ptr ds : [public_658b21c], ebx
        je public_6376f41
        cmp dword ptr ds : [public_658b028], ebx
        je public_6376f41
/*FIXUP push offset public_63f2b20 @0x6376f2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2b20
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_6376f41 : nop
        cmp dword ptr ds : [public_658b1e0], ebx
        je public_6376f5e
        cmp dword ptr ds : [public_658b050], ebx
        jne public_6376f5e
/*FIXUP push offset public_63f2ac4 @0x6376f51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2ac4
        call public_6356960
        add esp, 4
        public_6376f5e : nop
        cmp dword ptr ds : [public_658b05c], ebx
        jne public_6376fb6
        cmp dword ptr ds : [public_658b1e8], ebx
        jne public_6376fb6
        mov eax, dword ptr ds : [public_658b0a8]
        cmp eax, ebx
        je public_6376fbb
        cmp dword ptr ds : [public_658b084], ebx
        mov ecx, 1
        mov dword ptr ds : [public_658b238], ecx
        je public_6376f92
        cmp dword ptr ds : [public_658b080], ebx
        jne public_6376fa0
        public_6376f92 : nop
        cmp dword ptr ds : [public_658b0d0], ebx
        mov dword ptr ds : [public_658b248], ecx
        je public_6376fa6
        public_6376fa0 : nop
        mov dword ptr ds : [public_658b248], ebx
        public_6376fa6 : nop
        cmp eax, ebx
        je public_6376fc8
        mov dword ptr ds : [public_658b86c], 2
        jmp public_6376fd6
        public_6376fb6 : nop
        mov eax, dword ptr ds : [public_658b0a8]
        public_6376fbb : nop
        mov dword ptr ds : [public_658b238], ebx
        mov ecx, 1
        jmp public_6376fa0
        public_6376fc8 : nop
        cmp dword ptr ds : [public_658b228], ebx
        je public_6376fd6
        mov dword ptr ds : [public_658b86c], ecx
        public_6376fd6 : nop
        cmp dword ptr ds : [public_658b1fc], ebx
        je public_6376ffb
        cmp eax, ebx
        jne public_6376ffb
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f2a7c @0x6376fe7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2a7c
        push eax
        call ebp
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x14
        public_6376ffb : nop
        mov ecx, dword ptr ds : [public_658b1a0]
        cmp ecx, ebx
        jne public_6377015
        cmp dword ptr ds : [public_658b050], ebx
        je public_637703c
        cmp dword ptr ds : [public_658b19c], ebx
        je public_637703c
        public_6377015 : nop
        mov edx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ds : [public_658b050]
        sub edx, ecx
        cmp eax, ebx
        mov dword ptr ds : [public_658b24c], edx
        je public_637703c
        mov eax, edx
        inc eax
        mov dword ptr ds : [public_658b24c], eax
        mov dword ptr ss : [esp+0x18], 1
        public_637703c : nop
        mov eax, dword ptr ds : [public_658b24c]
        cmp eax, 1
        jg public_6377067
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f2a54 @0x637704d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2a54
        push ecx
        call ebp
        push ebx
        push ebx
        push 1
        call public_6378600
        mov ecx, dword ptr ds : [public_658b1a0]
        add esp, 0x18
        public_6377067 : nop
        mov edx, dword ptr ds : [public_658b24c]
        fld qword ptr ds : [public_63a5940]
        mov eax, 2
        cmp edx, eax
        mov dword ptr ss : [esp+0x40], eax
        jle public_6377093
        public_6377080 : nop
        mov edx, dword ptr ds : [public_658b24c]
        fimul dword ptr ss : [esp+0x40]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x40], eax
        jl public_6377080
        public_6377093 : nop
        fld qword ptr ds : [public_63a5940]
        mov edx, dword ptr ds : [public_658b078]
        cmp edx, 2
        fdiv st, st(1)
        fstp qword ptr ds : [public_658b230]
        fstp st(0)
        jl public_63770dc
        mov edx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edi
        push eax
        push esi
/*FIXUP push offset public_63f29ec @0x63770c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f29ec
        push ecx
        call ebp
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658b078]
        add esp, 0x1C
        jmp public_63770e2
        public_63770dc : nop
        mov ecx, dword ptr ds : [public_658b24c]
        public_63770e2 : nop
        lea eax, ds:[ecx*8]
        mov dword ptr ds : [public_658b804], eax
        add eax, 0xFFFFFFF8
        cmp ecx, 6
        mov dword ptr ds : [public_658b808], eax
        lea edi, ds:[ecx+1]
        jle public_6377119
        push ebx
        push ebx
/*FIXUP push offset public_63f29cc @0x6377100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f29cc
        mov dword ptr ds : [public_658b0c0], ebx
        call public_6377cf0
        mov edx, dword ptr ds : [public_658b078]
        add esp, 0xC
        public_6377119 : nop
        cmp dword ptr ds : [public_658b060], ebx
        je public_6377122
        inc edi
        public_6377122 : nop
        cmp dword ptr ds : [public_658b1d4], 1
        jle public_6377138
        cmp edx, 0xFFFFFFFF
        mov dword ptr ds : [public_658b204], edx
        je public_6377176
        jmp public_6377170
        public_6377138 : nop
        cmp dword ptr ds : [public_658b208], 0xFFFFFFFF
        jne public_637715c
        fld qword ptr ds : [public_658b210]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_637715c
        cmp dword ptr ds : [public_658b218], ebx
        je public_6377176
        public_637715c : nop
        cmp edx, ebx
        mov dword ptr ds : [public_658b200], edx
        jne public_6377170
        mov dword ptr ds : [public_658b200], 3
        public_6377170 : nop
        mov dword ptr ds : [public_658b078], ebx
        public_6377176 : nop
        mov eax, dword ptr ds : [public_658b1d8]
        cmp eax, ebx
        je public_6377184
        cmp eax, 0xFFFFFFFF
        jne public_63771d0
        public_6377184 : nop
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [public_639928c]
        mov ecx, dword ptr ds : [public_658b1d8]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        jne public_63771b4
        neg eax
        mov dword ptr ss : [esp+0x10], eax
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_63f18dc @0x63771ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f18dc
        jmp public_63771bf
        public_63771b4 : nop
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_63f29bc @0x63771ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f29bc
        public_63771bf : nop
        call public_6377cf0
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        mov dword ptr ds : [public_658b1d8], eax
        public_63771d0 : nop
        cmp eax, 0x80000000
        mov dword ptr ss : [esp+0x10], eax
        jne public_63771e2
        mov eax, 1
        jmp public_63771e8
        public_63771e2 : nop
        cmp eax, ebx
        jge public_63771ec
        neg eax
        public_63771e8 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_63771ec : nop
        push eax
        call public_6384670
        add esp, 4
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov esi, 0x3E8
        public_637720a : nop
        call public_6384610
        mov ecx, eax
        mov dword ptr ss : [esp+0x40], ecx
        fild dword ptr ss : [esp+0x40]
        fld st(0)
        fadd qword ptr ss : [esp+0x28]
        fstp qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_63a5978]
        fnstsw ax
        test ah, 0x41
        jne public_6377251
        push 0x41DFFFFF
        push 0xFF800000
        push ecx
/*FIXUP push offset public_63f295c @0x637723b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f295c
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x1C
        public_6377251 : nop
        dec esi
        jne public_637720a
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6384670
        fld qword ptr ss : [esp+0x2C]
        fmul qword ptr ds : [public_63a5970]
        add esp, 4
        fcom qword ptr ds : [public_63a5968]
        fst qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        jne public_637728b
        fcomp qword ptr ds : [public_63a5960]
        fnstsw ax
        test ah, 0x41
        jne public_63772b8
        jmp public_637728d
        public_637728b : nop
        fstp st(0)
        public_637728d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        push 0x41DFFFFF
        push 0xFF800000
        push 0x41CFFFFF
        push 0xFF800000
        push eax
        push ecx
/*FIXUP push offset public_63f28b4 @0x63772ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f28b4
        call public_6356960
        add esp, 0x1C
        public_63772b8 : nop
        fld qword ptr ds : [public_658b1b0]
        mov edx, dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_63a5958]
        mov eax, dword ptr ss : [esp+0x38]
        add edx, eax
        cmp edx, edi
        fstp qword ptr ds : [public_658b1b8]
        fld qword ptr ds : [public_63a5940]
        fsub qword ptr ds : [public_658b1b0]
        fstp qword ptr ds : [public_658b1c0]
        jge public_6377305
        push edi
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f2860 @0x63772f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2860
        push eax
        call ebp
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x1C
        public_6377305 : nop
        cmp dword ptr ds : [public_658b198], ebx
        je public_637735c
        cmp dword ptr ds : [public_658b24c], 4
        jne public_637732e
        cmp dword ptr ds : [public_658b050], ebx
        je public_637732e
        cmp dword ptr ds : [public_658b228], ebx
        jne public_637732e
        cmp dword ptr ds : [public_658b058], ebx
        jl public_6377348
        public_637732e : nop
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f280c @0x6377334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f280c
        push ecx
        call ebp
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x14
        public_6377348 : nop
        mov dword ptr ds : [public_658b058], 3
        mov dword ptr ds : [public_658b188], 1
        public_637735c : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, offset public_658b184
        public_6377369 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 7
        jne public_637737d
        mov dword ptr ss : [esp+0x14], 1
        jmp public_637741f
        public_637737d : nop
        cmp eax, 0xE
        jne public_637738c
        mov ebp, 1
        jmp public_637741f
        public_637738c : nop
        cmp eax, 3
        jne public_637739b
        mov edi, 1
        jmp public_637741f
        public_637739b : nop
        cmp eax, 0x13
        jne public_63773a7
        mov edi, 1
        jmp public_637741f
        public_63773a7 : nop
        cmp eax, 0x12
        jne public_63773cc
        cmp dword ptr ds : [public_658b074], ebx
        jne public_63773cc
/*FIXUP push offset public_63f27b4 @0x63773b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f27b4
        public_63773b9 : nop
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        jmp public_637741f
        public_63773cc : nop
        cmp eax, 0x18
        jne public_63773ea
        cmp dword ptr ds : [public_658b074], ebx
        jne public_63773e3
        mov ecx, dword ptr ds : [public_658b228]
        cmp ecx, ebx
        je public_63773f0
/*FIXUP public_63773e3 : nop
        push offset public_63f2754 @0x63773e3*/
  FIXUP public_63773e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2754
        jmp public_63773b9
        public_63773ea : nop
        mov ecx, dword ptr ds : [public_658b228]
        public_63773f0 : nop
        cmp eax, 4
        jne public_6377400
        cmp ecx, ebx
        je public_6377400
/*FIXUP push offset public_63f2708 @0x63773f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2708
        jmp public_63773b9
        public_6377400 : nop
        cmp eax, 0x19
        jne public_637741f
        cmp ecx, ebx
        push ebx
        push ebx
        je public_6377412
/*FIXUP push offset public_63f26fc @0x637740b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f26fc
        jmp public_6377417
/*FIXUP public_6377412 : nop
        push offset public_63f26f0 @0x6377412*/
  FIXUP public_6377412 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f26f0
        public_6377417 : nop
        call public_6377cf0
        add esp, 0xC
        public_637741f : nop
        mov edx, esi
        sub esi, 4
        cmp edx, offset public_658b118
        jne public_6377369
        cmp dword ptr ds : [public_658b080], ebx
        jne public_6377469
        cmp dword ptr ds : [public_658b084], ebx
        jne public_6377469
        cmp dword ptr ds : [public_658b0d8], ebx
        jne public_6377469
        cmp dword ptr ds : [public_658b0f0], ebx
        je public_6377458
        cmp dword ptr ds : [public_658b18c], ebx
        jne public_637745c
        public_6377458 : nop
        cmp edi, ebx
        je public_6377469
/*FIXUP public_637745c : nop
        push offset public_63f2680 @0x637745c*/
  FIXUP public_637745c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2680
        call public_6356960
        add esp, 4
        public_6377469 : nop
        cmp ebp, ebx
        je public_637749c
        cmp dword ptr ds : [public_658b24c], 3
        jg public_6377486
        cmp dword ptr ds : [public_658b228], ebx
        jne public_6377486
        cmp dword ptr ds : [public_658b074], ebx
        je public_637749c
/*FIXUP public_6377486 : nop
        push offset public_63f260c @0x6377486*/
  FIXUP public_6377486 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f260c
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_637749c : nop
        cmp dword ptr ss : [esp+0x14], ebx
        je public_6377589
        cmp dword ptr ds : [public_658b24c], 4
        jle public_63774c5
/*FIXUP push offset public_63f25c0 @0x63774af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f25c0
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_63774c5 : nop
        cmp dword ptr ds : [public_658b108], ebx
        je public_6377511
        mov eax, dword ptr ds : [public_658b0f8]
        mov ecx, dword ptr ds : [public_658b054]
        mov edi, dword ptr ds : [public_658b0ec]
        mov esi, dword ptr ds : [public_658b18c]
        mov edx, dword ptr ds : [public_658b0f0]
        add ecx, eax
        mov eax, dword ptr ds : [public_658b188]
        add ecx, edi
        add ecx, esi
        add ecx, edx
        add ecx, eax
        jne public_6377511
/*FIXUP push offset public_63f2588 @0x63774fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2588
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_6377511 : nop
        cmp dword ptr ds : [public_658b228], ebx
        je public_6377540
        cmp dword ptr ds : [public_658b24c], 3
        jg public_637752a
        cmp dword ptr ds : [public_658b058], ebx
        jl public_6377540
/*FIXUP public_637752a : nop
        push offset public_63f2540 @0x637752a*/
  FIXUP public_637752a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2540
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_6377540 : nop
        cmp dword ptr ds : [public_658b24c], 4
        jne public_6377589
        cmp dword ptr ds : [public_658b058], 0xFFFFFFFF
        jne public_6377589
        cmp dword ptr ds : [public_658b0f0], ebx
        jne public_637756a
        cmp dword ptr ds : [public_658b18c], ebx
        jne public_637756a
        cmp dword ptr ds : [public_658b0ec], ebx
        je public_6377589
/*FIXUP public_637756a : nop
        push offset public_63f24bc @0x637756a*/
  FIXUP public_637756a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f24bc
        call public_6356960
        add esp, 4
        mov dword ptr ds : [public_658b0ec], ebx
        mov dword ptr ds : [public_658b18c], ebx
        mov dword ptr ds : [public_658b0f0], ebx
        public_6377589 : nop
        mov ecx, dword ptr ds : [public_658b058]
        cmp ecx, ebx
        mov eax, dword ptr ds : [public_658b24c]
        pop edi
        mov dword ptr ds : [public_658b0f4], eax
        pop esi
        jl public_63775db
        cmp ecx, eax
        jge public_63775cb
        lea edx, ds:[eax-1]
        mov dword ptr ds : [public_658b0f4], edx
        cmp dword ptr ss : [esp+0xC], ebx
        je public_63775b7
        cmp eax, 3
        jge public_63775ee
        public_63775b7 : nop
        push ecx
/*FIXUP push offset public_63f2468 @0x63775b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2468
        call public_6356960
        add esp, 8
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_63775cb : nop
        pop ebp
        mov dword ptr ds : [public_658b058], 0xFFFFFFFF
        pop ebx
        add esp, 0x20
        ret 
        public_63775db : nop
        cmp dword ptr ds : [public_658b228], ebx
        je public_63775ee
        dec eax
        mov dword ptr ds : [public_658b058], eax
        mov dword ptr ds : [public_658b0f4], eax
        public_63775ee : nop
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6376cd0)
    }
}

#undef public_6376d10
#undef public_6376d8d
#undef public_6376d9e
#undef public_6376da6
#undef public_6376dea
#undef public_6376e3e
#undef public_6376e6d
#undef public_6376e96
#undef public_6376ec7
#undef public_6376eed
#undef public_6376ef5
#undef public_6376f05
#undef public_6376f1b
#undef public_6376f41
#undef public_6376f5e
#undef public_6376f92
#undef public_6376fa0
#undef public_6376fa6
#undef public_6376fb6
#undef public_6376fbb
#undef public_6376fc8
#undef public_6376fd6
#undef public_6376ffb
#undef public_6377015
#undef public_637703c
#undef public_6377067
#undef public_6377080
#undef public_6377093
#undef public_63770dc
#undef public_63770e2
#undef public_6377119
#undef public_6377122
#undef public_6377138
#undef public_637715c
#undef public_6377170
#undef public_6377176
#undef public_6377184
#undef public_63771b4
#undef public_63771bf
#undef public_63771d0
#undef public_63771e2
#undef public_63771e8
#undef public_63771ec
#undef public_637720a
#undef public_6377251
#undef public_637728b
#undef public_637728d
#undef public_63772b8
#undef public_6377305
#undef public_637732e
#undef public_6377348
#undef public_637735c
#undef public_6377369
#undef public_637737d
#undef public_637738c
#undef public_637739b
#undef public_63773a7
#undef public_63773b9
#undef public_63773cc
#undef public_63773e3
#undef public_63773ea
#undef public_63773f0
#undef public_6377400
#undef public_6377412
#undef public_6377417
#undef public_637741f
#undef public_6377458
#undef public_637745c
#undef public_6377469
#undef public_6377486
#undef public_637749c
#undef public_63774c5
#undef public_6377511
#undef public_637752a
#undef public_6377540
#undef public_637756a
#undef public_6377589
#undef public_63775b7
#undef public_63775cb
#undef public_63775db
#undef public_63775ee
