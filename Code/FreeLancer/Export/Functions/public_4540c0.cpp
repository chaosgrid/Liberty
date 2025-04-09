#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4540c0);

PROC_DECLARE(0x4540c0, internal_4540c0, public_4540c0);
extern "C" NAKED register_t __cdecl internal_4540c0()
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
        mov dword ptr ds : [esi], offset public_5cde3c
        mov dword ptr ds : [esi+4], offset public_5cde0c
        mov dword ptr ds : [esi+8], offset public_5cddf0
        mov dword ptr ds : [esi+0xC], offset public_5cddd0
        mov dword ptr ds : [esi+0x10], offset public_5cdd98
        mov dword ptr ds : [esi+0x14], offset public_5cdd70
        mov dword ptr ds : [esi+0x18], offset public_5cdd4c
        mov dword ptr ds : [esi+0x1C], offset public_5cdd14
        mov dword ptr ds : [esi+0x20], offset public_5cdcfc
        mov dword ptr ds : [esi+0x6C], 0
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4540c0)
    }
}
