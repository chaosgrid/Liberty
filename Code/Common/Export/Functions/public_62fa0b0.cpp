#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0660);

PROC_DECLARE(0x62fa0b0, internal_62fa0b0, public_62fa0b0);
extern "C" NAKED register_t __cdecl internal_62fa0b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_62f0660
        test al, al
        setne al
        ret 4
        UNREACHABLE_TRAP(0x62fa0b0)
    }
}
