#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_455d20);

PROC_DECLARE(0x44f9a0, internal_44f9a0, public_44f9a0);
extern "C" NAKED register_t __cdecl internal_44f9a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+ecx*4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x44]
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+0x34]
        push eax
        call public_455d20
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x44f9a0)
    }
}
