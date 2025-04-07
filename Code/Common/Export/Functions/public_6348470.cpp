#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348470);

PROC_DECLARE(0x6348470, internal_6348470, public_6348470);
extern "C" NAKED register_t __cdecl internal_6348470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x30]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        fsub dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [ecx+0x20]
        fmul st, st(1)
        fld dword ptr ds : [ecx+0x10]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ecx]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x24]
        fmul st, st(1)
        fld dword ptr ds : [ecx+0x14]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+0x28]
        fmul st, st(1)
        fld dword ptr ds : [ecx+0x18]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        ret 8
        UNREACHABLE_TRAP(0x6348470)
    }
}
