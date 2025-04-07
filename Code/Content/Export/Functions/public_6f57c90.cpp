#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c90);

PROC_DECLARE(0x6f57c90, internal_6f57c90, public_6f57c90);
extern "C" NAKED register_t __cdecl internal_6f57c90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x168], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
        call dword ptr ds : [public_6fb354c]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f57c90)
    }
}
