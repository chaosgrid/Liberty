#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f1f0);

PROC_DECLARE(0x623f1f0, internal_623f1f0, public_623f1f0);
extern "C" NAKED register_t __cdecl internal_623f1f0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_6257bac]
        xor edx, edx
        mov ecx, eax
        mov dh, al
        and ecx, 0xFF00
        push esi
        xor edx, ecx
        mov ecx, dword ptr ds : [public_6257bb0]
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        xor esi, eax
        and esi, 0xFF
        or edx, esi
        mov esi, eax
        shr esi, 0xE
        and esi, 1
        and eax, 1
        xor esi, eax
        inc ecx
        mov dword ptr ds : [public_6257bb0], ecx
        xor ecx, ecx
        lea eax, ds:[esi+edx*2]
        pop esi
        mov edx, eax
        mov cl, ah
        and edx, 0xFF
        mov dword ptr ds : [public_6257bac], eax
        xor edx, ecx
        mov dword ptr ss : [esp], edx
        fild qword ptr ss : [esp]
        fmul dword ptr ds : [public_624bc98]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x623f1f0)
    }
}
