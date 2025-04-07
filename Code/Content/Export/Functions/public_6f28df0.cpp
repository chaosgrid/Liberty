#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28df0);

PROC_DECLARE(0x6f28df0, internal_6f28df0, public_6f28df0);
extern "C" NAKED register_t __cdecl internal_6f28df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x118], eax
        mov byte ptr ds : [ecx+0x11C], dl
        ret 8
        UNREACHABLE_TRAP(0x6f28df0)
    }
}
