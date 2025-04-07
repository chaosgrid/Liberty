#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);

PROC_DECLARE(0x6f57c60, internal_6f57c60, public_6f57c60);
extern "C" NAKED register_t __cdecl internal_6f57c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3408]
        add esp, 8
        dec eax
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6f57c60)
    }
}
