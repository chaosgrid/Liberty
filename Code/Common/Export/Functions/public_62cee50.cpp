#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cee50);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);

PROC_DECLARE(0x62cee50, internal_62cee50, public_62cee50);
extern "C" NAKED register_t __cdecl internal_62cee50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62d2020
        mov dword ptr ds : [esi], offset public_639fe44
        mov dword ptr ds : [esi+0x2C], offset public_639fe38
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cee50)
    }
}
