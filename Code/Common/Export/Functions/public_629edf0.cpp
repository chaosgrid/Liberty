#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);

PROC_DECLARE(0x629edf0, internal_629edf0, public_629edf0);
extern "C" NAKED register_t __cdecl internal_629edf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_629af40
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [eax+0x74]
        UNREACHABLE_TRAP(0x629edf0)
    }
}
