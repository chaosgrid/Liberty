#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14210);

PROC_DECLARE(0x6d14210, internal_6d14210, public_6d14210);
extern "C" NAKED register_t __cdecl internal_6d14210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_6d6479c]
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d14210)
    }
}
