#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6328f20);

PROC_DECLARE(0x6329440, internal_6329440, public_6329440);
extern "C" NAKED register_t __cdecl internal_6329440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ds : [ecx+8]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_6328f20
        add esp, 0x1C
        ret 0x14
        UNREACHABLE_TRAP(0x6329440)
    }
}
