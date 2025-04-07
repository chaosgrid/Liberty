#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378c30);

#define public_6378c69 _public_6378c69
#define public_6378c85 _public_6378c85
#define public_6378c87 _public_6378c87
#define public_6378c8f _public_6378c8f
#define public_6378cc5 _public_6378cc5
#define public_6378ce3 _public_6378ce3

PROC_DECLARE(0x6378c30, internal_6378c30, public_6378c30);
extern "C" NAKED register_t __cdecl internal_6378c30()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ds : [ecx+0x10]
        fabs 
        fst dword ptr ss : [esp]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6378c8f
        fld dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+4], 1
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_6378c69
        mov dword ptr ss : [esp+4], 0xFFFFFFFF
        public_6378c69 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fimul dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_63a547c]
        fnstsw ax
        test ah, 0x41
        je public_6378ce3
        public_6378c85 : nop
        fstp st(0)
        public_6378c87 : nop
        xor eax, eax
        add esp, 8
        ret 4
        public_6378c8f : nop
        fld dword ptr ds : [ecx+0x14]
        fabs 
        fst dword ptr ss : [esp]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6378c87
        fld dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [esp+4], 1
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_6378cc5
        mov dword ptr ss : [esp+4], 0xFFFFFFFF
        public_6378cc5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        fsub dword ptr ds : [edx+4]
        fimul dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_63a547c]
        fnstsw ax
        test ah, 0x41
        jne public_6378c85
        public_6378ce3 : nop
        fld dword ptr ss : [esp]
        fsub dword ptr ds : [public_63a547c]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6378c87
        mov eax, 1
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6378c30)
    }
}

#undef public_6378c69
#undef public_6378c85
#undef public_6378c87
#undef public_6378c8f
#undef public_6378cc5
#undef public_6378ce3
