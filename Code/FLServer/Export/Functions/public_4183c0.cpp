#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c54);

PROC_DECLARE(0x4183c0, internal_4183c0, public_4183c0);
extern "C" NAKED register_t __cdecl internal_4183c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x60]
        mov ecx, esi
        pop esi
        jmp public_418c54
        UNREACHABLE_TRAP(0x4183c0)
    }
}
