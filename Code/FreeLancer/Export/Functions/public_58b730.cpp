#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_58b730);

PROC_DECLARE(0x58b730, internal_58b730, public_58b730);
extern "C" NAKED register_t __cdecl internal_58b730()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x32C], eax
        fld dword ptr ds : [ecx+0xB0]
        fadd dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x334]
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        push edx
        push eax
        call public_4145d0
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x58b730)
    }
}
