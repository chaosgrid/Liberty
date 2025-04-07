#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d72a2);

PROC_DECLARE(0x65dcfe9, internal_65dcfe9, public_65dcfe9);
extern "C" NAKED register_t __cdecl internal_65dcfe9()
{
    __asm
    {
        push ebp
        mov ecx, dword ptr ss : [esp+8]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+0x1C]
        push eax
        mov eax, dword ptr ds : [ecx+0x18]
        push eax
        call public_65d72a2
        add esp, 8
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x65dcfe9)
    }
}
