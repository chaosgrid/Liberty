#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afa90);
CLANG_FORWARD_PROC_SYMBOL(public_62b5850);

PROC_DECLARE(0x62afa90, internal_62afa90, public_62afa90);
extern "C" NAKED register_t __cdecl internal_62afa90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62b5850
        xor eax, eax
        mov dword ptr ds : [esi+0xE4], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi], offset public_639bb0c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62afa90)
    }
}
