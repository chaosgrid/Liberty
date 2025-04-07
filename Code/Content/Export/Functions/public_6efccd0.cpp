#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efccd0);

PROC_DECLARE(0x6efccd0, internal_6efccd0, public_6efccd0);
extern "C" NAKED register_t __cdecl internal_6efccd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x38]
        imul eax, 0x34
        mov al, byte ptr ds : [eax+ecx+0x30]
        ret 4
        UNREACHABLE_TRAP(0x6efccd0)
    }
}
