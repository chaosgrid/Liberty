#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303550);

PROC_DECLARE(0x6303550, internal_6303550, public_6303550);
extern "C" NAKED register_t __cdecl internal_6303550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        inc dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x6303550)
    }
}
