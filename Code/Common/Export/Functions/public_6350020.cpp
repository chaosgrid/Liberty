#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350020);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

PROC_DECLARE(0x6350020, internal_6350020, public_6350020);
extern "C" NAKED register_t __cdecl internal_6350020()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        add ecx, 0x64
        call public_6363280
        mov ecx, dword ptr ds : [esi+0x38]
        push ecx
        mov ecx, dword ptr ds : [esi+0x44]
        add ecx, 0x64
        call public_6363280
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6350020)
    }
}
