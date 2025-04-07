#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_68027e0);
CLANG_FORWARD_PROC_SYMBOL(public_6803540);

PROC_DECLARE(0x68027e0, internal_68027e0, public_68027e0);
extern "C" NAKED register_t __cdecl internal_68027e0()
{
    __asm
    {
        push 1
        call public_6801c50
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        sub edx, 0x10
        push edx
        call public_6803540
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        add edx, 0xFFFFFFF0
        add esp, 0xC
        mov dword ptr ds : [ecx], edx
        ret 
        UNREACHABLE_TRAP(0x68027e0)
    }
}
