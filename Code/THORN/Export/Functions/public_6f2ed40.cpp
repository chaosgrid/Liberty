#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ed40);

PROC_DECLARE(0x6f2ed40, internal_6f2ed40, public_6f2ed40);
extern "C" NAKED register_t __cdecl internal_6f2ed40()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6f2ed40)
    }
}
