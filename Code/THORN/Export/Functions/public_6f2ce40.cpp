#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce40);

PROC_DECLARE(0x6f2ce40, internal_6f2ce40, public_6f2ce40);
extern "C" NAKED register_t __cdecl internal_6f2ce40()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x200
        push esi
        sub esp, 8
        fstp qword ptr ss : [esp]
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x10
        lea edx, ss:[esp+4]
        push edx
        mov ecx, esi
        call public_6f2cda0
        pop esi
        add esp, 0x200
        ret 8
        UNREACHABLE_TRAP(0x6f2ce40)
    }
}
