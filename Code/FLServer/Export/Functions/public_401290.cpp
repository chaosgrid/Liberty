#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401290);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);

PROC_DECLARE(0x401290, internal_401290, public_401290);
extern "C" NAKED register_t __cdecl internal_401290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        push 0x91
        mov esi, ecx
        call public_418a92
        mov dword ptr ds : [esi], offset public_41bf88
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x401290)
    }
}
