#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab770);
CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb60);

PROC_DECLARE(0x6f6cb60, internal_6f6cb60, public_6f6cb60);
extern "C" NAKED register_t __cdecl internal_6f6cb60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_6fb366c]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6eac0c0
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 0xC
        push ecx
        mov ecx, eax
        call public_6eab770
        test eax, eax
        setne al
        ret 
        UNREACHABLE_TRAP(0x6f6cb60)
    }
}
