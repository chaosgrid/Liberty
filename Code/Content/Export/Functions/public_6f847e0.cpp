#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f847e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f847e0, internal_6f847e0, public_6f847e0);
extern "C" NAKED register_t __cdecl internal_6f847e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb623c
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi], offset public_6fb6254
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f847e0)
    }
}
