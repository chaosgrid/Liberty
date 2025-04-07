#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40b410);
CLANG_FORWARD_PROC_SYMBOL(public_40bd10);
CLANG_FORWARD_PROC_SYMBOL(public_419296);

PROC_DECLARE(0x4127a0, internal_4127a0, public_4127a0);
extern "C" NAKED register_t __cdecl internal_4127a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_427828]
        push edi
        call public_40bd10
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [public_41bbd8]
        push 0x111
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0x20]
        push 0x112
        push ecx
        call edi
        mov ecx, dword ptr ds : [public_427828]
        call public_40b410
        pop edi
        mov ecx, esi
        pop esi
        jmp public_419296
        UNREACHABLE_TRAP(0x4127a0)
    }
}
