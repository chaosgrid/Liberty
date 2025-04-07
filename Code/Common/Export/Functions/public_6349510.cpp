#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349510);

PROC_DECLARE(0x6349510, internal_6349510, public_6349510);
extern "C" NAKED register_t __cdecl internal_6349510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov eax, edx
        fstp dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+4], edx
        fstp dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x6349510)
    }
}
