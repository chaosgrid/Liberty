#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68360);

PROC_DECLARE(0x6f68360, internal_6f68360, public_6f68360);
extern "C" NAKED register_t __cdecl internal_6f68360()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6fb364c]
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call esi
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6fb365c]
        add esp, 0x1C
        neg eax
        sbb al, al
        inc al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f68360)
    }
}
