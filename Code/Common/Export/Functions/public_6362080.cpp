#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361e80);
CLANG_FORWARD_PROC_SYMBOL(public_6362080);

PROC_DECLARE(0x6362080, internal_6362080, public_6362080);
extern "C" NAKED register_t __cdecl internal_6362080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        call public_6361e80
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x20], offset public_63a580c
        mov edx, ecx
        mov dword ptr ds : [esi], offset public_63a5800
        mov dword ptr ds : [esi+0x20], offset public_63a57fc
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi+0x24], edx
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6362080)
    }
}
