#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fbb90);

#define public_65fbc24 _public_65fbc24
#define public_65fbc42 _public_65fbc42
#define public_65fbc68 _public_65fbc68

PROC_DECLARE(0x65fbb90, internal_65fbb90, public_65fbb90);
extern "C" NAKED register_t __cdecl internal_65fbb90()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x18]
        fld dword ptr ds : [eax+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_66013a8]
        fnstsw ax
        mov al, byte ptr ss : [esp+0x38]
        test ah, 0x41
        jne public_65fbc42
        fld dword ptr ss : [esp+0x20]
        test al, al
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        je public_65fbc24
        fchs 
        fpatan 
        fstp dword ptr ds : [eax]
        fxch 
        fchs 
        fxch 
        fchs 
        fpatan 
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+4]
        fld dword ptr ss : [esp]
        fchs 
        fpatan 
        fstp dword ptr ds : [edx]
        add esp, 0x24
        ret 
        public_65fbc24 : nop
        fpatan 
        fstp dword ptr ds : [eax]
        fxch 
        fchs 
        fxch 
        fpatan 
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+4]
        fld dword ptr ss : [esp]
        fpatan 
        fstp dword ptr ds : [edx]
        add esp, 0x24
        ret 
        public_65fbc42 : nop
        test al, al
        mov eax, dword ptr ss : [esp+0x28]
        je public_65fbc68
        fld dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fpatan 
        fstp dword ptr ds : [eax]
        fchs 
        fpatan 
        fstp dword ptr ds : [ecx]
        mov dword ptr ds : [edx], 0
        add esp, 0x24
        ret 
        public_65fbc68 : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fpatan 
        fstp dword ptr ds : [eax]
        fxch 
        fchs 
        fxch 
        fpatan 
        fstp dword ptr ds : [ecx]
        mov dword ptr ds : [edx], 0
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x65fbb90)
    }
}

#undef public_65fbc24
#undef public_65fbc42
#undef public_65fbc68
