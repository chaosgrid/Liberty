#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bf60);

PROC_DECLARE(0x628bf60, internal_628bf60, public_628bf60);
extern "C" NAKED register_t __cdecl internal_628bf60()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fxch 
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x628bf60)
    }
}
