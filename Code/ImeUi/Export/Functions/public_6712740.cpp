#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712740);

PROC_DECLARE(0x6712740, internal_6712740, public_6712740);
extern "C" NAKED register_t __cdecl internal_6712740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x78], edx
        ret 8
        UNREACHABLE_TRAP(0x6712740)
    }
}
