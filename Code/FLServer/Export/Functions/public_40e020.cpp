#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419032);

PROC_DECLARE(0x40e020, internal_40e020, public_40e020);
extern "C" NAKED register_t __cdecl internal_40e020()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax*4+public_425800]
        mov dword ptr ss : [esp+0x1C], ecx
        sub esp, 0x3C
        mov edi, esp
        mov ecx, 0xF
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x44], 0x3C
        mov dword ptr ss : [esp+0x48], 0x40000000
        rep movsd
        mov ecx, edx
        call public_419032
        pop edi
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x40e020)
    }
}
