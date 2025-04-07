#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f8b00);

PROC_DECLARE(0x65f8b00, internal_65f8b00, public_65f8b00);
extern "C" NAKED register_t __cdecl internal_65f8b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi+4], 1
        call dword ptr ds : [public_660100c]
        mov cl, byte ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x6C], eax
        mov byte ptr ds : [esi+0x60], cl
        add esp, 4
        mov dword ptr ds : [esi], offset public_660135c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f8b00)
    }
}
