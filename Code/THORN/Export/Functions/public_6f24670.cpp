#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24670);

#define public_6f246e9 _public_6f246e9

PROC_DECLARE(0x6f24670, internal_6f24670, public_6f24670);
extern "C" NAKED register_t __cdecl internal_6f24670()
{
    __asm
    {
        sub esp, 0x10
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp]
        fsin 
        fcom dword ptr ds : [public_6f5a1ac]
        fnstsw ax
        test ah, 1
        mov eax, dword ptr ss : [esp+0x14]
        jne public_6f246e9
        fdiv dword ptr ss : [esp]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp]
        fcos 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0xC]
        add esp, 0x10
        ret 4
        public_6f246e9 : nop
        fstp st(0)
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp]
        fcos 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f24670)
    }
}

#undef public_6f246e9
