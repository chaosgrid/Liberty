#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626da30);
CLANG_FORWARD_PROC_SYMBOL(public_62f3e30);

PROC_DECLARE(0x626da30, internal_626da30, public_626da30);
extern "C" NAKED register_t __cdecl internal_626da30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62f3e30
        mov dword ptr ds : [esi], offset public_6399a80
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626da30)
    }
}
