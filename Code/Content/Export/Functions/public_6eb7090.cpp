#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7090);

PROC_DECLARE(0x6eb7090, internal_6eb7090, public_6eb7090);
extern "C" NAKED register_t __cdecl internal_6eb7090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x6eb7090)
    }
}
