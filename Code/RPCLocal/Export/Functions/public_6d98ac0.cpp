#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d98ac0);

PROC_DECLARE(0x6d98ac0, internal_6d98ac0, public_6d98ac0);
extern "C" NAKED register_t __cdecl internal_6d98ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 8
        mov dword ptr ds : [ecx+0x28], eax
        ret 4
        UNREACHABLE_TRAP(0x6d98ac0)
    }
}
