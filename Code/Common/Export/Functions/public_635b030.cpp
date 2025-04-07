#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b030);

PROC_DECLARE(0x635b030, internal_635b030, public_635b030);
extern "C" NAKED register_t __cdecl internal_635b030()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax+8]
        add eax, 0x1C
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax+0x24]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x28]
        fmul dword ptr ss : [esp+8]
        faddp 
        fadd dword ptr ds : [eax+0x38]
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+0x4C]
        add eax, 0x1C
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [eax+0x38]
        fld dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0x24]
        fmul st, st(1)
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x28]
        fmul st, st(1)
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x635b030)
    }
}
