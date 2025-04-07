#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c53d0);

PROC_DECLARE(0x65c3ac0, internal_65c3ac0, public_65c3ac0);
extern "C" NAKED register_t __cdecl internal_65c3ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        call public_65c53d0
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x65c3ac0)
    }
}
