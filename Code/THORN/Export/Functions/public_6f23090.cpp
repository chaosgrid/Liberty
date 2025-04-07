#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23090);

PROC_DECLARE(0x6f23090, internal_6f23090, public_6f23090);
extern "C" NAKED register_t __cdecl internal_6f23090()
{
    __asm
    {
        fld dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+4]
        fchs 
        fld dword ptr ds : [ecx+4]
        fchs 
        fld dword ptr ds : [ecx]
        fchs 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6f23090)
    }
}
