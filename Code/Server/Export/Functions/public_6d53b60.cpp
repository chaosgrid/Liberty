#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53b60);

PROC_DECLARE(0x6d53b60, internal_6d53b60, public_6d53b60);
extern "C" NAKED register_t __cdecl internal_6d53b60()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ss : [esp+8]
        shl ecx, 4
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, ecx
        xor edx, esi
        and edx, 0xF
        xor edx, ecx
        mov dword ptr ds : [eax], edx
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d53b60)
    }
}
