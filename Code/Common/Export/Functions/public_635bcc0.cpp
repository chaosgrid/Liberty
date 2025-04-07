#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635bcc0);

PROC_DECLARE(0x635bcc0, internal_635bcc0, public_635bcc0);
extern "C" NAKED register_t __cdecl internal_635bcc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        add eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x635bcc0)
    }
}
