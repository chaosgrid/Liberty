#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417790);

PROC_DECLARE(0x417790, internal_417790, public_417790);
extern "C" NAKED register_t __cdecl internal_417790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_616670]
        mov dword ptr ds : [public_616670], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x417790)
    }
}
