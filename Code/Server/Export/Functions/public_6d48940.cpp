#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48940);

PROC_DECLARE(0x6d48940, internal_6d48940, public_6d48940);
extern "C" NAKED register_t __cdecl internal_6d48940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+eax*4+0x10], edx
        inc dword ptr ds : [ecx+0x30]
        ret 4
        UNREACHABLE_TRAP(0x6d48940)
    }
}
