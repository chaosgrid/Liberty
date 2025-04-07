#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6304230);

PROC_DECLARE(0x6304230, internal_6304230, public_6304230);
extern "C" NAKED register_t __cdecl internal_6304230()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ds : [eax]
        push esi
        fmul dword ptr ds : [public_639d210]
        push edi
        mov ecx, 9
        lea esi, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_639d210]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_639d210]
        mov edi, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fsin 
        fld dword ptr ss : [esp+0x14]
        fcos 
        fld dword ptr ss : [esp+0x18]
        fsin 
        fld dword ptr ss : [esp+0x18]
        fcos 
        fstp qword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fsin 
        fld dword ptr ss : [esp+0x1C]
        fcos 
        fld st(2)
        fmul st, st(5)
        fld st(2)
        fmul st, st(5)
        fstp dword ptr ss : [esp+8]
        fld st(1)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x4C]
        fld st(1)
        fmul qword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(2)
        fsub dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(4)
        fld st(3)
        fmul st, st(7)
        faddp 
        fstp dword ptr ss : [esp+0x28]
        fld st(2)
        fmul qword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+8]
        fmul st, st(3)
        fxch 
        fmul st, st(5)
        fsubp 
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fchs 
        fstp dword ptr ss : [esp+0x38]
        fld qword ptr ss : [esp+0xC]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x3C]
        fld qword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        rep movsd
        fstp st(0)
        fstp st(0)
        pop edi
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6304230)
    }
}
