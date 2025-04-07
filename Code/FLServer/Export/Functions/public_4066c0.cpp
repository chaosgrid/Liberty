#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4066c0);
CLANG_FORWARD_PROC_SYMBOL(public_418bd6);

PROC_DECLARE(0x4066c0, internal_4066c0, public_4066c0);
extern "C" NAKED register_t __cdecl internal_4066c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_418bd6
        mov dword ptr ds : [esi], offset public_41c620
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4066c0)
    }
}
