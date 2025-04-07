#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a850);

PROC_DECLARE(0x6c2a850, internal_6c2a850, public_6c2a850);
extern "C" NAKED register_t __cdecl internal_6c2a850()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6c2a850)
    }
}
