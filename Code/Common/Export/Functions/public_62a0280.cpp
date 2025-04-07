#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0280);

PROC_DECLARE(0x62a0280, internal_62a0280, public_62a0280);
extern "C" NAKED register_t __cdecl internal_62a0280()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov dx, word ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+4]
        mov word ptr ds : [eax], dx
        fld dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        fidiv dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x62a0280)
    }
}
