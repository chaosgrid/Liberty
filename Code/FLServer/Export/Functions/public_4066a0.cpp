#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418be2);

PROC_DECLARE(0x4066a0, internal_4066a0, public_4066a0);
extern "C" NAKED register_t __cdecl internal_4066a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
/*FIXUP push offset public_42543c @0x4066a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42543c
        mov ecx, esi
        call public_418be2
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4066a0)
    }
}
