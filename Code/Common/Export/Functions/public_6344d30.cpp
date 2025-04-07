#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344d30);
CLANG_FORWARD_PROC_SYMBOL(public_6347c10);

PROC_DECLARE(0x6344d30, internal_6344d30, public_6344d30);
extern "C" NAKED register_t __cdecl internal_6344d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x98]
        push eax
        call public_6347c10
        ret 4
        UNREACHABLE_TRAP(0x6344d30)
    }
}
