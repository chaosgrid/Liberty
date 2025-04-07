#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb2b0);
CLANG_FORWARD_PROC_SYMBOL(public_62cbfe0);

PROC_DECLARE(0x62cbfe0, internal_62cbfe0, public_62cbfe0);
extern "C" NAKED register_t __cdecl internal_62cbfe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62cb2b0
        xor al, al
        mov byte ptr ds : [esi+0x280], al
        mov byte ptr ds : [esi+0x281], al
        mov byte ptr ds : [esi+0x2A8], al
        mov dword ptr ds : [esi], offset public_639fb64
        mov dword ptr ds : [esi+0x2A0], 0x43480000
        mov dword ptr ds : [esi+0x2A4], 0x43FA0000
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cbfe0)
    }
}
