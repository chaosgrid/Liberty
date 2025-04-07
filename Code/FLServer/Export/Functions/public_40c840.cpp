#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a92);

PROC_DECLARE(0x40c840, internal_40c840, public_40c840);
extern "C" NAKED register_t __cdecl internal_40c840()
{
    __asm
    {
        push esi
        push 0
        push 0x64
        mov esi, ecx
        call public_418a92
        mov dword ptr ds : [esi], offset public_41d1d0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40c840)
    }
}
