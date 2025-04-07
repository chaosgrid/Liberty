#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c666);

PROC_DECLARE(0x6d4c666, internal_6d4c666, public_6d4c666);
extern "C" NAKED register_t __cdecl internal_6d4c666()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6d4c666)
    }
}
