#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e0cf0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0e10);

#define public_62e104e _public_62e104e
#define public_62e1056 _public_62e1056
#define public_62e10bb _public_62e10bb
#define public_62e1127 _public_62e1127
#define public_62e1129 _public_62e1129
#define public_62e116c _public_62e116c
#define public_62e116e _public_62e116e
#define public_62e1179 _public_62e1179
#define public_62e11c0 _public_62e11c0
#define public_62e11c2 _public_62e11c2
#define public_62e1232 _public_62e1232
#define public_62e1234 _public_62e1234
#define public_62e1238 _public_62e1238
#define public_62e1263 _public_62e1263
#define public_62e1278 _public_62e1278
#define public_62e127a _public_62e127a
#define public_62e12e4 _public_62e12e4
#define public_62e12e6 _public_62e12e6
#define public_62e12ec _public_62e12ec
#define public_62e12ff _public_62e12ff
#define public_62e1328 _public_62e1328
#define public_62e132a _public_62e132a

PROC_DECLARE(0x62e0e10, internal_62e0e10, public_62e0e10);
extern "C" NAKED register_t __cdecl internal_62e0e10()
{
    __asm
    {
        sub esp, 0x40
        fld dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x28], eax
        fmul dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, 0x5F3759DF
        mov edx, dword ptr ss : [esp+0x64]
        faddp 
        mov dword ptr ss : [esp+0x30], edx
        fld dword ptr ss : [esp+0x64]
        push 1
        fmul dword ptr ss : [esp+0x68]
        lea edx, ss:[esp+0x2C]
        push edx
        faddp 
        fld st(0)
        fst dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        fld dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x3C]
        fmul dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        call public_62e0cf0
        mov eax, dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax]
        add esp, 0x10
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x48]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x48], eax
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp]
        fstp st(0)
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x50]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld st(3)
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld st(3)
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x24]
        fabs 
        fcomp qword ptr ds : [public_63a0750]
        fnstsw ax
        test ah, 1
        jne public_62e1056
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62e104e
        fsqrt 
        mov eax, dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fmul dword ptr ss : [esp]
        fchs 
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fmul dword ptr ss : [esp]
        fstp dword ptr ds : [eax+4]
        mov eax, 2
        fstp st(0)
        add esp, 0x40
        ret 
        public_62e104e : nop
        fstp st(0)
        xor eax, eax
        add esp, 0x40
        ret 
        public_62e1056 : nop
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+8]
        fsubp 
        fst dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e10bb
        xor eax, eax
        add esp, 0x40
        ret 
        public_62e10bb : nop
        fld dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_6399408]
        xor ecx, ecx
        fnstsw ax
        test ah, 0x41
        jne public_62e1179
        fld dword ptr ss : [esp+0x44]
        fsqrt 
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fchs 
        fsub st, st(2)
        fmul st, st(1)
        fst dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62e1127
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_62e1129
        fld dword ptr ss : [esp+0x44]
        mov ecx, 1
        fmul dword ptr ss : [esp]
        fstp dword ptr ds : [edx]
        jmp public_62e1129
        public_62e1127 : nop
        fstp st(0)
        public_62e1129 : nop
        fxch 
        fsub dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62e116c
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_62e116e
        fld dword ptr ss : [esp+0x44]
        inc ecx
        fmul dword ptr ss : [esp]
        fstp dword ptr ds : [edx+ecx*4-4]
        jmp public_62e116e
        public_62e116c : nop
        fstp st(0)
        public_62e116e : nop
        cmp ecx, 2
        jne public_62e11c2
        mov eax, ecx
        add esp, 0x40
        ret 
        public_62e1179 : nop
        fld dword ptr ss : [esp+0x48]
        fdiv dword ptr ss : [esp+8]
        fchs 
        fst dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62e11c0
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_62e11c2
        fld dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp]
        mov eax, 1
        fstp dword ptr ds : [ecx]
        add esp, 0x40
        ret 
        public_62e11c0 : nop
        fstp st(0)
        public_62e11c2 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [esp+0x4C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e1263
        fsqrt 
        fld dword ptr ss : [esp+0x48]
        fchs 
        fsub st, st(1)
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62e1232
        fmul dword ptr ss : [esp]
        inc ecx
        cmp ecx, 2
        fstp dword ptr ds : [edx+ecx*4-4]
        jne public_62e1234
        fstp st(0)
        mov eax, ecx
        add esp, 0x40
        ret 
        public_62e1232 : nop
        fstp st(0)
        public_62e1234 : nop
        fsub dword ptr ss : [esp+0x48]
        public_62e1238 : nop
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62e1278
        fmul dword ptr ss : [esp]
        inc ecx
        cmp ecx, 2
        fstp dword ptr ds : [edx+ecx*4-4]
        jne public_62e127a
        mov eax, ecx
        add esp, 0x40
        ret 
        public_62e1263 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e127a
        fld dword ptr ss : [esp+0x48]
        fchs 
        jmp public_62e1238
        public_62e1278 : nop
        fstp st(0)
        public_62e127a : nop
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+4]
        fsubr dword ptr ss : [esp+0x48]
        fst dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x18]
        fadd st(0), st
        fsubr dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x4C]
        fsubp 
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e12ec
        fsqrt 
        fld dword ptr ss : [esp+0x48]
        fchs 
        fsub st, st(1)
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 1
        jne public_62e12e4
        fmul dword ptr ss : [esp]
        inc ecx
        cmp ecx, 2
        fstp dword ptr ds : [edx+ecx*4-4]
        jne public_62e12e6
        fstp st(0)
        mov eax, ecx
        add esp, 0x40
        ret 
        public_62e12e4 : nop
        fstp st(0)
        public_62e12e6 : nop
        fsub dword ptr ss : [esp+0x48]
        jmp public_62e12ff
        public_62e12ec : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e132a
        fld dword ptr ss : [esp+0x48]
        fchs 
        public_62e12ff : nop
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 1
        jne public_62e1328
        fmul dword ptr ss : [esp]
        inc ecx
        cmp ecx, 2
        fstp dword ptr ds : [edx+ecx*4-4]
        jne public_62e132a
        mov eax, ecx
        add esp, 0x40
        ret 
        public_62e1328 : nop
        fstp st(0)
        public_62e132a : nop
        mov eax, ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x62e0e10)
    }
}

#undef public_62e104e
#undef public_62e1056
#undef public_62e10bb
#undef public_62e1127
#undef public_62e1129
#undef public_62e116c
#undef public_62e116e
#undef public_62e1179
#undef public_62e11c0
#undef public_62e11c2
#undef public_62e1232
#undef public_62e1234
#undef public_62e1238
#undef public_62e1263
#undef public_62e1278
#undef public_62e127a
#undef public_62e12e4
#undef public_62e12e6
#undef public_62e12ec
#undef public_62e12ff
#undef public_62e1328
#undef public_62e132a
