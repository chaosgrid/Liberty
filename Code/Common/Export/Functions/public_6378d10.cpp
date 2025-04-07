#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378c30);
CLANG_FORWARD_PROC_SYMBOL(public_6378d10);

#define public_6378d43 _public_6378d43
#define public_6378d4b _public_6378d4b
#define public_6378d99 _public_6378d99
#define public_6378dc3 _public_6378dc3
#define public_6378df4 _public_6378df4
#define public_6378dfd _public_6378dfd
#define public_6378e4a _public_6378e4a
#define public_6378e6c _public_6378e6c
#define public_6378e76 _public_6378e76
#define public_6378e81 _public_6378e81

PROC_DECLARE(0x6378d10, internal_6378d10, public_6378d10);
extern "C" NAKED register_t __cdecl internal_6378d10()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x10]
        sub esp, 8
        fabs 
        fcomp dword ptr ds : [public_63a5990]
        fnstsw ax
        test ah, 0x41
        jne public_6378dc3
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6378d43
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp public_6378d4b
        public_6378d43 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        public_6378d4b : nop
        fadd dword ptr ds : [public_63a5990]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp], edx
        fld dword ptr ss : [esp]
        mov edx, dword ptr ds : [eax+0xC]
        fsub dword ptr ds : [public_63a5990]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx]
        fcom dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        je public_6378d99
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6378e6c
        public_6378d99 : nop
        fcomp dword ptr ss : [esp]
        fnstsw ax
        test ah, 1
        jne public_6378e76
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp]
        fnstsw ax
        test ah, 1
        jne public_6378e76
        xor eax, eax
        add esp, 8
        ret 4
        public_6378dc3 : nop
        fld dword ptr ds : [ecx+0x14]
        fabs 
        fcomp dword ptr ds : [public_63a5990]
        fnstsw ax
        test ah, 0x41
        jne public_6378e81
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6378df4
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+0xC]
        jmp public_6378dfd
        public_6378df4 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        public_6378dfd : nop
        fadd dword ptr ds : [public_63a5990]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        mov ecx, dword ptr ds : [eax+4]
        fsub dword ptr ds : [public_63a5990]
        mov dword ptr ss : [esp+0xC], ecx
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [edx+4]
        fcom dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        je public_6378e4a
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6378e6c
        public_6378e4a : nop
        fcomp dword ptr ss : [esp]
        fnstsw ax
        test ah, 1
        jne public_6378e76
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp]
        fnstsw ax
        test ah, 1
        jne public_6378e76
        xor eax, eax
        add esp, 8
        ret 4
        public_6378e6c : nop
        fstp st(0)
        xor eax, eax
        add esp, 8
        ret 4
        public_6378e76 : nop
        mov eax, 1
        add esp, 8
        ret 4
        public_6378e81 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6378c30
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6378d10)
    }
}

#undef public_6378d43
#undef public_6378d4b
#undef public_6378d99
#undef public_6378dc3
#undef public_6378df4
#undef public_6378dfd
#undef public_6378e4a
#undef public_6378e6c
#undef public_6378e76
#undef public_6378e81
