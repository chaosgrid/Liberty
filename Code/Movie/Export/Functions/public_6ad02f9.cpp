#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf712);

PROC_DECLARE(0x6ad02f9, internal_6ad02f9, public_6ad02f9);
extern "C" NAKED register_t __cdecl internal_6ad02f9()
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
        call public_6acf712
        add esp, 8
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ad02f9)
    }
}
