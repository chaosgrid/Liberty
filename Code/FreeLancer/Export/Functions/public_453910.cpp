#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_453910);

PROC_DECLARE(0x453910, internal_453910, public_453910);
extern "C" NAKED register_t __cdecl internal_453910()
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
        mov dword ptr ds : [esi], offset public_5cda7c
        mov dword ptr ds : [esi+4], offset public_5cda4c
        mov dword ptr ds : [esi+8], offset public_5cda30
        mov dword ptr ds : [esi+0xC], offset public_5cda10
        mov dword ptr ds : [esi+0x10], offset public_5cd9d8
        mov dword ptr ds : [esi+0x14], offset public_5cd9b0
        mov dword ptr ds : [esi+0x18], offset public_5cd98c
        mov dword ptr ds : [esi+0x1C], offset public_5cd954
        mov dword ptr ds : [esi+0x20], offset public_5cd93c
        mov dword ptr ds : [esi+0x6C], 0
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x453910)
    }
}
