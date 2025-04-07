#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44bc0);

PROC_DECLARE(0x6b44bc0, internal_6b44bc0, public_6b44bc0);
extern "C" NAKED register_t __cdecl internal_6b44bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6b44bc0)
    }
}
