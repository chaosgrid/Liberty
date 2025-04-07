#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac400);
CLANG_FORWARD_PROC_SYMBOL(public_62b5850);

PROC_DECLARE(0x62ac400, internal_62ac400, public_62ac400);
extern "C" NAKED register_t __cdecl internal_62ac400()
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
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi+0xF0], eax
        mov dword ptr ds : [esi+0xF4], eax
        mov dword ptr ds : [esi+0xF8], eax
        mov byte ptr ds : [esi+0xFD], al
        mov dword ptr ds : [esi+0x100], eax
        mov byte ptr ds : [esi+0xFC], 1
        mov dword ptr ds : [esi], offset public_639d81c
        mov dword ptr ds : [esi+0xE0], 0x10000000
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ac400)
    }
}
