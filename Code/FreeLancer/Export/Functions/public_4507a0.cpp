#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4507a0);

PROC_DECLARE(0x4507a0, internal_4507a0, public_4507a0);
extern "C" NAKED register_t __cdecl internal_4507a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_44fbe0
        mov dword ptr ds : [esi], offset public_5ccbbc
        mov dword ptr ds : [esi+4], offset public_5ccb8c
        mov dword ptr ds : [esi+8], offset public_5ccb70
        mov dword ptr ds : [esi+0xC], offset public_5ccb50
        mov dword ptr ds : [esi+0x10], offset public_5ccb18
        mov dword ptr ds : [esi+0x14], offset public_5ccaf0
        mov dword ptr ds : [esi+0x18], offset public_5ccacc
        mov dword ptr ds : [esi+0x1C], offset public_5cca94
        mov dword ptr ds : [esi+0x20], offset public_5cca7c
        mov dword ptr ds : [esi+0x6C], 0xFFFFFFFF
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4507a0)
    }
}
