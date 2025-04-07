#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244f90);

PROC_DECLARE(0x6212ae0, internal_6212ae0, public_6212ae0);
extern "C" NAKED register_t __cdecl internal_6212ae0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_6244f90
        mov eax, dword ptr ds : [edi+0x9C]
        pop edi
        mov dword ptr ds : [esi+0x9C], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6212ae0)
    }
}
