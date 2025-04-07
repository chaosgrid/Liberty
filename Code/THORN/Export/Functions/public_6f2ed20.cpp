#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ed20);

PROC_DECLARE(0x6f2ed20, internal_6f2ed20, public_6f2ed20);
extern "C" NAKED register_t __cdecl internal_6f2ed20()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6f2ed20)
    }
}
