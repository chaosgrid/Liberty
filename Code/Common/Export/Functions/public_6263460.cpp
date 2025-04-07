#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

PROC_DECLARE(0x6263460, internal_6263460, public_6263460);
extern "C" NAKED register_t __cdecl internal_6263460()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push 0
        mov esi, ecx
        call public_63108f0
        fstp dword ptr ss : [esp+4]
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+8]
        push 2
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6263460)
    }
}
