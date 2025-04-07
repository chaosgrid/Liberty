#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e04c0);

#define public_62e05a1 _public_62e05a1
#define public_62e065b _public_62e065b
#define public_62e0715 _public_62e0715
#define public_62e075b _public_62e075b
#define public_62e07a1 _public_62e07a1
#define public_62e07e7 _public_62e07e7
#define public_62e082c _public_62e082c
#define public_62e0871 _public_62e0871
#define public_62e08b6 _public_62e08b6
#define public_62e08fb _public_62e08fb
#define public_62e0940 _public_62e0940
#define public_62e0985 _public_62e0985
#define public_62e09ca _public_62e09ca
#define public_62e0a0f _public_62e0a0f
#define public_62e0a54 _public_62e0a54

PROC_DECLARE(0x62e04c0, internal_62e04c0, public_62e04c0);
extern "C" NAKED register_t __cdecl internal_62e04c0()
{
    __asm
    {
        sub esp, 0x60
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x64]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [edx+0x14]
        fld dword ptr ds : [edx+0xC]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [edx+0x10]
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edx+0x20]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [edx+0x1C]
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fld dword ptr ds : [edx+0x18]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edx+0x2C]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [edx+0x28]
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fld dword ptr ds : [edx+0x24]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x40]
        fabs 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x44]
        fabs 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp]
        fabs 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+0x34]
        faddp 
        fadd dword ptr ds : [ecx+0x30]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e05a1
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e05a1 : nop
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [edx+0x10]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [edx+0x14]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [edx+0x20]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [edx+0x1C]
        faddp 
        fld dword ptr ds : [edx+0x18]
        fmul dword ptr ds : [ecx+0x18]
        faddp 
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [edx+0x2C]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [edx+0x28]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [edx+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+0x1C]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0x18]
        faddp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fabs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x4C]
        fabs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x50]
        fabs 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+4]
        fabs 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edx+0x34]
        faddp 
        fadd dword ptr ds : [ecx+0x34]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e065b
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e065b : nop
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+0x10]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+0x14]
        faddp 
        fld dword ptr ds : [edx+0xC]
        fmul dword ptr ds : [ecx+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+0x20]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+0x1C]
        faddp 
        fld dword ptr ds : [edx+0x18]
        fmul dword ptr ds : [ecx+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+0x2C]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+0x28]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [edx+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+0x28]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0x24]
        faddp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        fabs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x58]
        fabs 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x5C]
        fabs 
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+8]
        fabs 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edx+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        fadd dword ptr ds : [ecx+0x38]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0715
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e0715 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+0x10]
        faddp 
        fabs 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx+0x30]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fadd dword ptr ds : [edx+0x30]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e075b
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e075b : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+0x1C]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edx+0x18]
        faddp 
        fabs 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fadd dword ptr ds : [edx+0x34]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e07a1
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e07a1 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+0x28]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edx+0x24]
        faddp 
        fabs 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fadd dword ptr ds : [edx+0x38]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e07e7
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e07e7 : nop
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+4]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e082c
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e082c : nop
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+4]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0871
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e0871 : nop
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+4]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edx+0x34]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e08b6
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e08b6 : nop
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x3C]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx+0x38]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e08fb
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e08fb : nop
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x40]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+0x38]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0940
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e0940 : nop
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x44]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+0x38]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx+0x34]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0985
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e0985 : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e09ca
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e09ca : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0a0f
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e0a0f : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp]
        fsubp 
        fabs 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0a54
        xor eax, eax
        add esp, 0x60
        ret 
        public_62e0a54 : nop
        mov eax, 1
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x62e04c0)
    }
}

#undef public_62e05a1
#undef public_62e065b
#undef public_62e0715
#undef public_62e075b
#undef public_62e07a1
#undef public_62e07e7
#undef public_62e082c
#undef public_62e0871
#undef public_62e08b6
#undef public_62e08fb
#undef public_62e0940
#undef public_62e0985
#undef public_62e09ca
#undef public_62e0a0f
#undef public_62e0a54
