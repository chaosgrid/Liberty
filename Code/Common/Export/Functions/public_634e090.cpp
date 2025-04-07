#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e090);

PROC_DECLARE(0x634e090, internal_634e090, public_634e090);
extern "C" NAKED register_t __cdecl internal_634e090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dx, word ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x14], eax
        mov word ptr ds : [ecx+0x1A], dx
        ret 8
        UNREACHABLE_TRAP(0x634e090)
    }
}
