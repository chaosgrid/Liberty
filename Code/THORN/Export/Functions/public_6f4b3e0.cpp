#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f480);

PROC_DECLARE(0x6f4b3e0, internal_6f4b3e0, public_6f4b3e0);
extern "C" NAKED register_t __cdecl internal_6f4b3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6f4f270
        push 1
        mov esi, eax
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [eax], 0xFFFFFFF0
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        push edx
        push esi
        call public_6f4f480
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b3e0)
    }
}
