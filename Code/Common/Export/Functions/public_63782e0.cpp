#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63782e0);

PROC_DECLARE(0x63782e0, internal_63782e0, public_63782e0);
extern "C" NAKED register_t __cdecl internal_63782e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        sub eax, dword ptr ds : [ecx]
        ret 
        UNREACHABLE_TRAP(0x63782e0)
    }
}
