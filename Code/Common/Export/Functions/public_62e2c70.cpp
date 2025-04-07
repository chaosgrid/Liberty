#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e2c70);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62e2cb0 _public_62e2cb0
#define public_62e2f00 _public_62e2f00
#define public_62e2f19 _public_62e2f19
#define public_62e2f8c _public_62e2f8c
#define public_62e2fa5 _public_62e2fa5
#define public_62e2fd4 _public_62e2fd4
#define public_62e301c _public_62e301c
#define public_62e304b _public_62e304b
#define public_62e3064 _public_62e3064
#define public_62e309d _public_62e309d
#define public_62e30b6 _public_62e30b6
#define public_62e30ce _public_62e30ce
#define public_62e30e9 _public_62e30e9
#define public_62e3116 _public_62e3116
#define public_62e312c _public_62e312c
#define public_62e314f _public_62e314f
#define public_62e3157 _public_62e3157
#define public_62e3318 _public_62e3318
#define public_62e331a _public_62e331a
#define public_62e3331 _public_62e3331
#define public_62e337c _public_62e337c
#define public_62e33a9 _public_62e33a9
#define public_62e33ca _public_62e33ca

PROC_DECLARE(0x62e2c70, internal_62e2c70, public_62e2c70);
extern "C" NAKED register_t __cdecl internal_62e2c70()
{
    __asm
    {
        sub esp, 0xB8
        push ebx
        mov ebx, dword ptr ss : [esp+0xC4]
        test ebx, ebx
        jne public_62e2cb0
        mov eax, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0xC8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xCC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xD0]
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xB8
        ret 
        public_62e2cb0 : nop
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x8C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x8C]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_628b030
        lea ecx, ss:[esp+0xD4]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        call public_62e1680
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_62e1680
        lea edx, ss:[esp+0x34]
        lea eax, ss:[esp+0x90]
        push edx
        push eax
        call public_62e1630
        fstp dword ptr ss : [esp+0x2C]
        add esp, 0x18
        lea ecx, ss:[esp+0xD4]
        call public_6347e60
        fmul dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6288830
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        add esp, 0xC
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x9C]
        push eax
        mov dword ptr ss : [esp+0x8C], edx
        mov edx, dword ptr ss : [esp+0x94]
        push ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_628b030
        lea eax, ss:[esp+0xD4]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_62e1680
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_62e1680
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        call public_62e1630
        add esp, 0x18
        lea ecx, ss:[esp+0xD4]
        fstp dword ptr ss : [esp+0x14]
        call public_6347e60
        fmul dword ptr ss : [esp+0x14]
        push ecx
        lea eax, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6288830
        mov esi, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0xA0]
        add esp, 0xC
        push esi
        push edi
        mov dword ptr ss : [esp+0x60], ecx
        push ebp
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], eax
        call public_628b030
        lea edx, ss:[esp+0xD4]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_62e1680
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_62e1680
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_62e1630
        fstp dword ptr ss : [esp+0x2C]
        add esp, 0x18
        lea ecx, ss:[esp+0xD4]
        call public_6347e60
        fmul dword ptr ss : [esp+0x14]
        push ecx
        lea edx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6288830
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push esi
        push edi
        mov dword ptr ss : [esp+0x64], ecx
        push ebp
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], eax
        call public_628b030
        mov esi, dword ptr ss : [esp+0xE0]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_628b030
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        call public_62c47a0
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e2f00
        mov dword ptr ss : [esp+0x10], 0x3F800000
        jmp public_62e2f19
        public_62e2f00 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e2f19
        mov dword ptr ss : [esp+0x10], 0xBF800000
        public_62e2f19 : nop
        fld dword ptr ss : [esp+0x10]
        call public_6391fc2
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0x90]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_628b030
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_628b030
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_62c47a0
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        fnstsw ax
        test ah, 0x41
        jne public_62e2f8c
        mov dword ptr ss : [esp+4], 0x3F800000
        jmp public_62e2fa5
        public_62e2f8c : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e2fa5
        mov dword ptr ss : [esp+4], 0xBF800000
        public_62e2fa5 : nop
        fld dword ptr ss : [esp+4]
        call public_6391fc2
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0xA4]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e2fd4
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2fd4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA4]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jp public_62e301c
        mov dword ptr ss : [esp+4], 0
        public_62e301c : nop
        fld dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ss : [esp+0xD8]
        fcomp dword ptr ds : [public_6399408]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+8], ecx
        fnstsw ax
        test ah, 5
        jp public_62e304b
        mov dword ptr ss : [esp+0x30], 0
        public_62e304b : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e3064
        mov dword ptr ss : [esp+8], 0
        public_62e3064 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0xE4]
        fst dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], edx
        fnstsw ax
        test ah, 0x41
        jp public_62e309d
        fld dword ptr ds : [public_6399408]
        jmp public_62e30ce
        public_62e309d : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e30b6
        mov dword ptr ss : [esp+8], 0
        public_62e30b6 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ecx
        push edx
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+0xEC]
        public_62e30ce : nop
        fmul qword ptr ds : [public_63a0610]
        fcom dword ptr ds : [public_639e6c8]
        fnstsw ax
        test ah, 5
        jp public_62e30e9
        fstp st(0)
        fld dword ptr ds : [public_639e6c8]
        public_62e30e9 : nop
        fld dword ptr ss : [esp+0x3C]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62e312c
        fld dword ptr ss : [esp+0xD8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e3116
        mov dword ptr ss : [esp+0x34], 0
        jmp public_62e312c
        public_62e3116 : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0xF8]
        fstp dword ptr ss : [esp+0x34]
        public_62e312c : nop
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ss : [esp+0xDC]
        fnstsw ax
        test ah, 5
        jp public_62e314f
        fld dword ptr ss : [esp+0x3C]
        fdiv dword ptr ss : [esp+0xDC]
        fstp dword ptr ss : [esp+4]
        jmp public_62e3157
        public_62e314f : nop
        mov dword ptr ss : [esp+4], 0x3F800000
        public_62e3157 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x5C]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        call dword ptr ds : [edx+0x50]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x80]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call public_62e1680
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_62e1680
        lea edx, ss:[esp+0x28]
        lea eax, ss:[esp+0x1C]
        push edx
        push eax
        call public_62e1630
        fstp dword ptr ss : [esp+0x20]
        add esp, 0x18
        lea ecx, ss:[esp+0x5C]
        call public_6347e60
        fmul dword ptr ss : [esp+8]
        push ecx
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6288830
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x90]
        push eax
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [esp+0x88]
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call public_628b030
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call public_62e1680
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_62e1680
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_62e1630
        fstp dword ptr ss : [esp+0x20]
        add esp, 0x18
        lea ecx, ss:[esp+0x5C]
        call public_6347e60
        fmul dword ptr ss : [esp+8]
        push ecx
        lea eax, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6288830
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], edx
        lea edx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x34], eax
        push edx
        lea eax, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x3C], ecx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_62887d0
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        call public_62887d0
        add esp, 0x24
        lea ecx, ss:[esp+0x68]
        call public_6347e60
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fadd dword ptr ds : [public_63a0620]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62e3318
        fadd dword ptr ds : [public_63a0620]
        fld dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62e3318
        fstp dword ptr ss : [esp+4]
        jmp public_62e331a
        public_62e3318 : nop
        fstp st(0)
        public_62e331a : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 0x41
        jne public_62e3331
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+4], edx
        public_62e3331 : nop
        mov al, byte ptr ss : [esp+0xE0]
        test al, al
        je public_62e33ca
        lea ecx, ss:[esp+0x50]
        call public_62c4780
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62e337c
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call public_62e1680
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x5C], ecx
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        mov dword ptr ss : [esp+0x58], edx
        public_62e337c : nop
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_639f5d0]
        fnstsw ax
        test ah, 5
        jp public_62e33a9
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_63a076c]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        jmp public_62e33ca
        public_62e33a9 : nop
        fld dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x38], 0x3F000000
        fcomp qword ptr ds : [public_639e2d8]
        fnstsw ax
        test ah, 5
        jnp public_62e33ca
        mov dword ptr ss : [esp+0x38], 0x3F800000
        public_62e33ca : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0xBC]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        call public_6288830
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_62887d0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6288830
        lea eax, ss:[esp+0xC8]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_62887d0
        mov eax, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x50]
        add esp, 0x30
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xB8
        ret 
        UNREACHABLE_TRAP(0x62e2c70)
    }
}

#undef public_62e2cb0
#undef public_62e2f00
#undef public_62e2f19
#undef public_62e2f8c
#undef public_62e2fa5
#undef public_62e2fd4
#undef public_62e301c
#undef public_62e304b
#undef public_62e3064
#undef public_62e309d
#undef public_62e30b6
#undef public_62e30ce
#undef public_62e30e9
#undef public_62e3116
#undef public_62e312c
#undef public_62e314f
#undef public_62e3157
#undef public_62e3318
#undef public_62e331a
#undef public_62e3331
#undef public_62e337c
#undef public_62e33a9
#undef public_62e33ca
