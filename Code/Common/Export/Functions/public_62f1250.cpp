#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1250);

PROC_DECLARE(0x62f1250, internal_62f1250, public_62f1250);
extern "C" NAKED register_t __cdecl internal_62f1250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x62f1250)
    }
}
