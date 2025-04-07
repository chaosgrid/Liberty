#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6335b10);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6335b58 _public_6335b58
#define public_6335ba5 _public_6335ba5
#define public_6335c34 _public_6335c34
#define public_6335c6f _public_6335c6f
#define public_6335d88 _public_6335d88
#define public_6335e7b _public_6335e7b
#define public_6335e7d _public_6335e7d
#define public_6335f8c _public_6335f8c
#define public_633608e _public_633608e
#define public_6336090 _public_6336090
#define public_6336188 _public_6336188
#define public_633624c _public_633624c
#define public_633624e _public_633624e
#define public_63362c4 _public_63362c4

PROC_DECLARE(0x6335b10, internal_6335b10, public_6335b10);
extern "C" NAKED register_t __cdecl internal_6335b10()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [edi+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6335b58
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6335b58 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edi+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6335ba5
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6335ba5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [edi+0x30]
        fmul qword ptr ds : [public_639df88]
        fst dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+0x34]
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x38]
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x14]
        fabs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335c34
        fld dword ptr ss : [esp+0x18]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335c34
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335c34
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        pop esi
        add esp, 0x3C
        ret 
        public_6335c34 : nop
        fld dword ptr ds : [esi+0x14]
        sub esp, 0xC
        fsub dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6335c6f
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6335c6f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        push edi
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+0x48], 0x40000000
        fnstsw ax
        test ah, 0x41
        jne public_6335d88
        fld dword ptr ss : [esp+0xC]
        fchs 
        fsub dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335e7b
        fdiv dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335e7d
        fld dword ptr ss : [esp+0x40]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335e7d
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x48], edx
        jmp public_6335e7d
        public_6335d88 : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6335e7d
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6335e7b
        fdiv dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335e7d
        fld dword ptr ss : [esp+0x40]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6335e7d
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x48], eax
        jmp public_6335e7d
        public_6335e7b : nop
        fstp st(0)
        public_6335e7d : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335f8c
        fld dword ptr ss : [esp+8]
        fchs 
        fsub dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_633608e
        fdiv dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_6336090
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        fabs 
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6336090
        fld dword ptr ss : [esp+0x40]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6336090
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_6336090
        public_6335f8c : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6336090
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_633608e
        fdiv dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_6336090
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        fabs 
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6336090
        fld dword ptr ss : [esp+0x40]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6336090
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x48], edx
        jmp public_6336090
        public_633608e : nop
        fstp st(0)
        public_6336090 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6336188
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fsub dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_633624c
        fdiv dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+0x4C]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_633624e
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x28]
        fadd st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        fabs 
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633624e
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633624e
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x48], eax
        jmp public_633624e
        public_6336188 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_633624e
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_633624c
        fdiv dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+0x4C]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_633624e
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x14]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fabs 
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633624c
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633624e
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_633624e
        public_633624c : nop
        fstp st(0)
        public_633624e : nop
        fld dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jp public_63362c4
        fld dword ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [esi]
        pop edi
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        fxch 
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        pop esi
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+8], eax
        mov al, 1
        add esp, 0x3C
        ret 
        public_63362c4 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6335b10)
    }
}

#undef public_6335b58
#undef public_6335ba5
#undef public_6335c34
#undef public_6335c6f
#undef public_6335d88
#undef public_6335e7b
#undef public_6335e7d
#undef public_6335f8c
#undef public_633608e
#undef public_6336090
#undef public_6336188
#undef public_633624c
#undef public_633624e
#undef public_63362c4
