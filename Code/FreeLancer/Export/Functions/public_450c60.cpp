#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_450c60);

PROC_DECLARE(0x450c60, internal_450c60, public_450c60);
extern "C" NAKED register_t __cdecl internal_450c60()
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
        mov dword ptr ds : [esi], offset public_5ccd5c
        mov dword ptr ds : [esi+4], offset public_5ccd2c
        mov dword ptr ds : [esi+8], offset public_5ccd10
        mov dword ptr ds : [esi+0xC], offset public_5cccf0
        mov dword ptr ds : [esi+0x10], offset public_5cccb8
        mov dword ptr ds : [esi+0x14], offset public_5ccc90
        mov dword ptr ds : [esi+0x18], offset public_5ccc6c
        mov dword ptr ds : [esi+0x1C], offset public_5ccc34
        mov dword ptr ds : [esi+0x20], offset public_5ccc1c
        mov dword ptr ds : [esi+0x6C], 0
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x450c60)
    }
}
