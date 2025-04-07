#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317f3);

PROC_DECLARE(0x6d317f3, internal_6d317f3, public_6d317f3);
extern "C" NAKED register_t __cdecl internal_6d317f3()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+8]
        add dword ptr ds : [eax], ecx
        sub dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x6d317f3)
    }
}
