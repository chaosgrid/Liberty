#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_44fdd0);

PROC_DECLARE(0x451e50, internal_451e50, public_451e50);
extern "C" NAKED register_t __cdecl internal_451e50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x2C]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_44fdd0
        mov ecx, dword ptr ds : [esi+0x1C]
        push 1
        push ecx
        mov ecx, dword ptr ds : [edi+0x5C]
        call public_44f9a0
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x451e50)
    }
}
