#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_4ffbb0);
CLANG_FORWARD_PROC_SYMBOL(public_4ffe50);
CLANG_FORWARD_PROC_SYMBOL(public_501c40);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4ffe91 _public_4ffe91
#define public_4ffe9e _public_4ffe9e
#define public_4ffef8 _public_4ffef8
#define public_4fff0f _public_4fff0f
#define public_4fff4a _public_4fff4a
#define public_4fff65 _public_4fff65
#define public_4fff69 _public_4fff69
#define public_4fff80 _public_4fff80
#define public_4fffa6 _public_4fffa6
#define public_4fffaf _public_4fffaf
#define public_4fffe2 _public_4fffe2
#define public_4fffea _public_4fffea
#define public_500010 _public_500010
#define public_50001d _public_50001d
#define public_500059 _public_500059
#define public_500070 _public_500070
#define public_5000b0 _public_5000b0
#define public_5000c7 _public_5000c7
#define public_5000d9 _public_5000d9
#define public_5000e4 _public_5000e4
#define public_500104 _public_500104
#define public_50014c _public_50014c
#define public_500173 _public_500173
#define public_50017e _public_50017e
#define public_50019e _public_50019e
#define public_5001e6 _public_5001e6
#define public_500252 _public_500252
#define public_50027b _public_50027b
#define public_5002a4 _public_5002a4
#define public_5002eb _public_5002eb
#define public_5002f6 _public_5002f6
#define public_50031a _public_50031a
#define public_500368 _public_500368
#define public_500376 _public_500376
#define public_500381 _public_500381
#define public_5003a8 _public_5003a8
#define public_5003f9 _public_5003f9
#define public_500407 _public_500407
#define public_500412 _public_500412
#define public_500439 _public_500439
#define public_50048a _public_50048a
#define public_500498 _public_500498
#define public_5004a3 _public_5004a3
#define public_5004c7 _public_5004c7
#define public_500515 _public_500515
#define public_500523 _public_500523
#define public_50052e _public_50052e
#define public_500552 _public_500552
#define public_5005a0 _public_5005a0
#define public_5005ae _public_5005ae
#define public_5005b9 _public_5005b9
#define public_5005d9 _public_5005d9
#define public_500621 _public_500621
#define public_5006aa _public_5006aa
#define public_5006b5 _public_5006b5
#define public_5006d5 _public_5006d5
#define public_50071b _public_50071b
#define public_500745 _public_500745
#define public_500750 _public_500750
#define public_500770 _public_500770
#define public_5007b6 _public_5007b6
#define public_5007f5 _public_5007f5
#define public_50085c _public_50085c
#define public_5008ab _public_5008ab
#define public_500a47 _public_500a47
#define public_500a6c _public_500a6c

PROC_DECLARE(0x4ffe50, internal_4ffe50, public_4ffe50);
extern "C" NAKED register_t __cdecl internal_4ffe50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x17C
        fld dword ptr ds : [public_5c75dc]
        push ebx
        push esi
        mov esi, ecx
        fdiv dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        push edi
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ds : [esi+0xA4]
        fstp dword ptr ss : [esp+0x88]
        jne public_4ffe91
        push 6
        push 5
        jmp public_4ffe9e
        public_4ffe91 : nop
        cmp eax, 1
        jne public_500a47
        push 6
        push 2
        public_4ffe9e : nop
        call public_4220c0
        mov edi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edx, ss:[esp+0x174]
        push edx
        mov edx, dword ptr ds : [edi]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        fld dword ptr ss : [ebp+8]
        fadd dword ptr ds : [esi+0x270]
        fld dword ptr ds : [public_5c75dc]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_4ffef8
        fld st(0)
        fld dword ptr ds : [public_5c7474]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_4ffef8
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        jmp public_4fff0f
        public_4ffef8 : nop
        fld dword ptr ds : [public_5c75dc]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4fff0f
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4fff0f : nop
        fst dword ptr ss : [esp+0x44]
        fld dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [esi+0x270]
        fld dword ptr ds : [public_5c75dc]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_4fff4a
        fld st(0)
        fld dword ptr ds : [public_5c7474]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_4fff4a
        fstp st(0)
        mov dword ptr ss : [esp+0x1C], 0
        jmp public_4fff69
        public_4fff4a : nop
        fld dword ptr ds : [public_5c75dc]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4fff65
        fstp st(0)
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        jmp public_4fff69
        public_4fff65 : nop
        fstp dword ptr ss : [esp+0x1C]
        public_4fff69 : nop
        fld dword ptr ss : [esp+0x1C]
        fsub st, st(1)
        fabs 
        fstp dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_4fff80 : nop
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x14]
        fnstsw ax
        fcomp dword ptr ss : [esp+0x1C]
        test ah, 0x41
        fnstsw ax
        jne public_4fffa6
        test ah, 5
        jp public_500a6c
        jmp public_4fffaf
        public_4fffa6 : nop
        test ah, 0x41
        jne public_500a6c
        public_4fffaf : nop
        fld dword ptr ds : [public_61326c]
        fmul dword ptr ss : [esp+0x48]
        fst dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x14]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [public_5c7474]
        fcomp dword ptr ss : [esp+0x58]
        fnstsw ax
        test ah, 0x41
        jne public_4fffe2
        mov dword ptr ss : [esp+0x10], 0
        jmp public_4fffea
        public_4fffe2 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x10], eax
        public_4fffea : nop
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x1C]
        fnstsw ax
        fcomp dword ptr ss : [esp+0x10]
        test ah, 0x41
        fnstsw ax
        jne public_500010
        test ah, 5
        jp public_50001d
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_50001d
        public_500010 : nop
        test ah, 0x41
        jne public_50001d
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], edx
        public_50001d : nop
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x270]
        fabs 
        fdiv dword ptr ss : [esp+0x50]
        fld qword ptr ds : [public_5c8ba8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_500059
        fld st(0)
        fld qword ptr ds : [public_5c89b8]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_500059
        fstp st(0)
        fld qword ptr ds : [public_5c89b8]
        jmp public_500070
        public_500059 : nop
        fld qword ptr ds : [public_5c8ba8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_500070
        fstp st(0)
        fld qword ptr ds : [public_5c8ba8]
        public_500070 : nop
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x270]
        fabs 
        fdiv dword ptr ss : [esp+0x50]
        fld qword ptr ds : [public_5c8ba8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_5000b0
        fld st(0)
        fld qword ptr ds : [public_5c89b8]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_5000b0
        fstp st(0)
        fld qword ptr ds : [public_5c89b8]
        jmp public_5000c7
        public_5000b0 : nop
        fld qword ptr ds : [public_5c8ba8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_5000c7
        fstp st(0)
        fld qword ptr ds : [public_5c8ba8]
        public_5000c7 : nop
        mov eax, dword ptr ds : [esi+0x154]
        fstp dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_5000d9
        xor ecx, ecx
        jmp public_5000e4
        public_5000d9 : nop
        mov ecx, dword ptr ds : [esi+0x158]
        sub ecx, eax
        sar ecx, 4
        public_5000e4 : nop
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_500104
        mov eax, dword ptr ds : [esi+0x144]
        fld dword ptr ds : [eax+ecx*4]
        jmp public_50014c
        public_500104 : nop
        fild dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0xC0]
        push ecx
        sub esp, 8
        fmul dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0xCC]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x154]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmulp 
        fadd dword ptr ds : [eax]
        public_50014c : nop
        fmul dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [esi+0x154]
        test eax, eax
        fld st(0)
        fmul dword ptr ds : [esi+0x90]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x4C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x7C]
        fstp st(0)
        jne public_500173
        xor ecx, ecx
        jmp public_50017e
        public_500173 : nop
        mov ecx, dword ptr ds : [esi+0x158]
        sub ecx, eax
        sar ecx, 4
        public_50017e : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_50019e
        mov edx, dword ptr ds : [esi+0x144]
        fld dword ptr ds : [edx+ecx*4]
        jmp public_5001e6
        public_50019e : nop
        fild dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0xD8]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0xE4]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x154]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmulp 
        fadd dword ptr ds : [eax]
        public_5001e6 : nop
        fmul dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea edx, ss:[esp+0x148]
        fld st(0)
        push edx
        fmul dword ptr ds : [esi+0x90]
        mov ecx, esi
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x28]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        call public_4ffbb0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x118]
        push ecx
        mov ecx, esi
        call public_4ffbb0
        fld dword ptr ds : [edi+0x14]
        fld dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [edi+0x18]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+0x54], edx
        fnstsw ax
        test ah, 5
        jp public_500252
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x54], eax
        public_500252 : nop
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x44]
        fabs 
        fdiv dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [public_613270]
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 5
        jnp public_50027b
        fstp st(0)
        fld qword ptr ds : [public_5c89b8]
        public_50027b : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x44]
        fabs 
        fdiv dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [public_613270]
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 5
        jnp public_5002a4
        fstp st(0)
        fld qword ptr ds : [public_5c89b8]
        public_5002a4 : nop
        fld dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [esi+0x1CC]
        test eax, eax
        fsub st, st(3)
        fst dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x18]
        fstp st(1)
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xA4]
        fstp st(0)
        jne public_5002eb
        xor ecx, ecx
        jmp public_5002f6
        public_5002eb : nop
        mov ecx, dword ptr ds : [esi+0x1D0]
        sub ecx, eax
        sar ecx, 4
        public_5002f6 : nop
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_50031a
        mov edx, dword ptr ds : [esi+0x1BC]
        fld dword ptr ds : [edx+ecx*4]
        fstp dword ptr ss : [esp+0x78]
        jmp public_500368
        public_50031a : nop
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x100]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0x10C]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x1CC]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x78]
        fstp st(0)
        public_500368 : nop
        mov eax, dword ptr ds : [esi+0x1CC]
        test eax, eax
        jne public_500376
        xor ecx, ecx
        jmp public_500381
        public_500376 : nop
        mov ecx, dword ptr ds : [esi+0x1D0]
        sub ecx, eax
        sar ecx, 4
        public_500381 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_5003a8
        mov edx, dword ptr ds : [esi+0x1BC]
        fld dword ptr ds : [edx+ecx*4]
        fstp dword ptr ss : [esp+0x84]
        jmp public_5003f9
        public_5003a8 : nop
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xE8]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0xF4]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x1CC]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x84]
        fstp st(0)
        public_5003f9 : nop
        mov eax, dword ptr ds : [esi+0x1F4]
        test eax, eax
        jne public_500407
        xor ecx, ecx
        jmp public_500412
        public_500407 : nop
        mov ecx, dword ptr ds : [esi+0x1F8]
        sub ecx, eax
        sar ecx, 4
        public_500412 : nop
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_500439
        mov edx, dword ptr ds : [esi+0x1E4]
        fld dword ptr ds : [edx+ecx*4]
        fstp dword ptr ss : [esp+0x80]
        jmp public_50048a
        public_500439 : nop
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x108]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0x114]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x1F4]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x80]
        fstp st(0)
        public_50048a : nop
        mov eax, dword ptr ds : [esi+0x1F4]
        test eax, eax
        jne public_500498
        xor ecx, ecx
        jmp public_5004a3
        public_500498 : nop
        mov ecx, dword ptr ds : [esi+0x1F8]
        sub ecx, eax
        sar ecx, 4
        public_5004a3 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_5004c7
        mov edx, dword ptr ds : [esi+0x1E4]
        fld dword ptr ds : [edx+ecx*4]
        fstp dword ptr ss : [esp+0x20]
        jmp public_500515
        public_5004c7 : nop
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xC8]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0xD4]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x1F4]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        public_500515 : nop
        mov eax, dword ptr ds : [esi+0x1CC]
        test eax, eax
        jne public_500523
        xor ecx, ecx
        jmp public_50052e
        public_500523 : nop
        mov ecx, dword ptr ds : [esi+0x1D0]
        sub ecx, eax
        sar ecx, 4
        public_50052e : nop
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_500552
        mov edx, dword ptr ds : [esi+0x1BC]
        fld dword ptr ds : [edx+ecx*4]
        fstp dword ptr ss : [esp+0x74]
        jmp public_5005a0
        public_500552 : nop
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xD0]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0xDC]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x1CC]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x74]
        fstp st(0)
        public_5005a0 : nop
        mov eax, dword ptr ds : [esi+0x1CC]
        test eax, eax
        jne public_5005ae
        xor ecx, ecx
        jmp public_5005b9
        public_5005ae : nop
        mov ecx, dword ptr ds : [esi+0x1D0]
        sub ecx, eax
        sar ecx, 4
        public_5005b9 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_5005d9
        mov edx, dword ptr ds : [esi+0x1BC]
        fld dword ptr ds : [edx+ecx*4]
        jmp public_500621
        public_5005d9 : nop
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xE0]
        push eax
        sub esp, 8
        fmul dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0xEC]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x1CC]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmulp 
        fadd dword ptr ds : [eax]
        public_500621 : nop
        lea eax, ds:[edi+8]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], edx
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], ecx
        fadd dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi+0x1A4]
        test eax, eax
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        jne public_5006aa
        xor ecx, ecx
        jmp public_5006b5
        public_5006aa : nop
        mov ecx, dword ptr ds : [esi+0x1A8]
        sub ecx, eax
        sar ecx, 4
        public_5006b5 : nop
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_5006d5
        mov eax, dword ptr ds : [esi+0x194]
        fld dword ptr ds : [eax+ecx*4]
        jmp public_50071b
        public_5006d5 : nop
        fild dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0xF0]
        push ecx
        sub esp, 8
        fmul dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        mov ebx, dword ptr ds : [esi+0x1A4]
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        fld qword ptr ss : [esp+0xFC]
        add esp, 0xC
        push edx
        call public_5b7ec0
        mov ecx, eax
        shl ecx, 4
        add ecx, ebx
        call public_501c40
        public_50071b : nop
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+0x1A4]
        test eax, eax
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        jne public_500745
        xor ecx, ecx
        jmp public_500750
        public_500745 : nop
        mov ecx, dword ptr ds : [esi+0x1A8]
        sub ecx, eax
        sar ecx, 4
        public_500750 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_500770
        mov eax, dword ptr ds : [esi+0x194]
        fld dword ptr ds : [eax+ecx*4]
        jmp public_5007b6
        public_500770 : nop
        fild dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0xF8]
        push ecx
        sub esp, 8
        fmul dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        mov ebx, dword ptr ds : [esi+0x1A4]
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        fld qword ptr ss : [esp+0x104]
        add esp, 0xC
        push edx
        call public_5b7ec0
        mov ecx, eax
        shl ecx, 4
        add ecx, ebx
        call public_501c40
        public_5007b6 : nop
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x174]
        fmul st, st(1)
        push eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x44]
        call public_4220a0
        push 5
        call public_421670
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov dword ptr ss : [esp+0x28], 0
        public_5007f5 : nop
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_674fb4]
        test eax, eax
        fmul dword ptr ds : [public_5da774]
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x64], 0
        fld st(0)
        fcos 
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x68]
        fxch 
        fsin 
        fstp qword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x7C]
        fmul qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fstp st(0)
        fld dword ptr ss : [esp+0x4C]
        fmul qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x60]
        jne public_50085c
        call public_5b73e0
        mov dword ptr ds : [public_674fb4], eax
        public_50085c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x68]
        push edx
        lea edx, ss:[esp+0x148]
        push edx
        lea edx, ss:[esp+0xBC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [public_674fb4]
        test eax, eax
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x70], edx
        jne public_5008ab
        call public_5b73e0
        mov dword ptr ds : [public_674fb4], eax
        public_5008ab : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x118]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi+0x30]
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xB0]
        fadd dword ptr ds : [edi+0x24]
        sub esp, 8
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ecx
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x6C], edx
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [edi+0x20]
        fstp dword ptr ss : [esp]
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        push ebx
        push eax
        push ecx
        push edx
        call public_421bd0
        fld dword ptr ss : [esp+0x180]
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x184]
        mov edx, dword ptr ss : [esp+0xA4]
        fadd dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0xA8]
        fld dword ptr ss : [esp+0x188]
        mov ecx, dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xAC]
        push eax
        push ecx
        push edx
        call public_421cc0
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+0x30]
        add esp, 0x1C
        fadd dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [edi+0x20]
        fstp dword ptr ss : [esp]
        call public_421ca0
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        push ecx
        push edx
        push eax
        call public_421bd0
        fld dword ptr ss : [esp+0x150]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0x154]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0xB4]
        fld dword ptr ss : [esp+0x158]
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ss : [esp+0xB0]
        push ecx
        push edx
        push eax
        call public_421cc0
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ds : [public_674fb8]
        add esp, 0x24
        inc eax
        fst dword ptr ss : [esp+0x28]
        mov dword ptr ds : [public_674fb8], eax
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jnp public_5007f5
        call public_421690
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_4fff80
        public_500a47 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5da740 @0x500a4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da740
        push 0x21E
/*FIXUP push offset public_5da560 @0x500a57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da560
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x500a61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_500a6c : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x4ffe50)
    }
}

#undef public_4ffe91
#undef public_4ffe9e
#undef public_4ffef8
#undef public_4fff0f
#undef public_4fff4a
#undef public_4fff65
#undef public_4fff69
#undef public_4fff80
#undef public_4fffa6
#undef public_4fffaf
#undef public_4fffe2
#undef public_4fffea
#undef public_500010
#undef public_50001d
#undef public_500059
#undef public_500070
#undef public_5000b0
#undef public_5000c7
#undef public_5000d9
#undef public_5000e4
#undef public_500104
#undef public_50014c
#undef public_500173
#undef public_50017e
#undef public_50019e
#undef public_5001e6
#undef public_500252
#undef public_50027b
#undef public_5002a4
#undef public_5002eb
#undef public_5002f6
#undef public_50031a
#undef public_500368
#undef public_500376
#undef public_500381
#undef public_5003a8
#undef public_5003f9
#undef public_500407
#undef public_500412
#undef public_500439
#undef public_50048a
#undef public_500498
#undef public_5004a3
#undef public_5004c7
#undef public_500515
#undef public_500523
#undef public_50052e
#undef public_500552
#undef public_5005a0
#undef public_5005ae
#undef public_5005b9
#undef public_5005d9
#undef public_500621
#undef public_5006aa
#undef public_5006b5
#undef public_5006d5
#undef public_50071b
#undef public_500745
#undef public_500750
#undef public_500770
#undef public_5007b6
#undef public_5007f5
#undef public_50085c
#undef public_5008ab
#undef public_500a47
#undef public_500a6c
