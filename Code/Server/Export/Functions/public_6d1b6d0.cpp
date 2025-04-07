#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b6d0);

PROC_DECLARE(0x6d1b6d0, internal_6d1b6d0, public_6d1b6d0);
extern "C" NAKED register_t __cdecl internal_6d1b6d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        xor edx, edx
        cmp ecx, eax
        sete dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x6d1b6d0)
    }
}
