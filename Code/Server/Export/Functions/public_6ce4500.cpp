#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);

PROC_DECLARE(0x6ce4500, internal_6ce4500, public_6ce4500);
extern "C" NAKED register_t __cdecl internal_6ce4500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ecx+4]
        mov word ptr ds : [ecx+eax*2], 0
        ret 4
        UNREACHABLE_TRAP(0x6ce4500)
    }
}
