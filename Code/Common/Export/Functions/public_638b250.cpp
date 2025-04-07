#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_638b250);
CLANG_FORWARD_PROC_SYMBOL(public_638b280);

PROC_DECLARE(0x638b250, internal_638b250, public_638b250);
extern "C" NAKED register_t __cdecl internal_638b250()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        call public_6370570
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_658b24c]
        push esi
        push eax
        push ecx
        push edx
        call public_638b280
        add esp, 0x18
        pop esi
        ret 
        UNREACHABLE_TRAP(0x638b250)
    }
}
