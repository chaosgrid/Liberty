#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4578a0);

PROC_DECLARE(0x4578a0, internal_4578a0, public_4578a0);
extern "C" NAKED register_t __cdecl internal_4578a0()
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
        mov dword ptr ds : [esi], offset public_5ce53c
        mov dword ptr ds : [esi+4], offset public_5ce508
        mov dword ptr ds : [esi+8], offset public_5ce4ec
        mov dword ptr ds : [esi+0xC], offset public_5ce4cc
        mov dword ptr ds : [esi+0x10], offset public_5ce494
        mov dword ptr ds : [esi+0x14], offset public_5ce46c
        mov dword ptr ds : [esi+0x18], offset public_5ce448
        mov dword ptr ds : [esi+0x1C], offset public_5ce410
        mov dword ptr ds : [esi+0x20], offset public_5ce3f8
        mov dword ptr ds : [esi+0x6C], 0
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4578a0)
    }
}
