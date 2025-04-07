#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413b70);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);

PROC_DECLARE(0x413b70, internal_413b70, public_413b70);
extern "C" NAKED register_t __cdecl internal_413b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        push 0x90
        mov esi, ecx
        call public_418a92
        mov dword ptr ds : [esi], offset public_41e1a8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x413b70)
    }
}
