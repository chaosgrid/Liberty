#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c276a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c276e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27780);

PROC_DECLARE(0x6c276e0, internal_6c276e0, public_6c276e0);
extern "C" NAKED register_t __cdecl internal_6c276e0()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        call public_6c276a0
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_6c27780
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c276e0)
    }
}
