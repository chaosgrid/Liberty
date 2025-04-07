#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7170);

PROC_DECLARE(0x6eb7170, internal_6eb7170, public_6eb7170);
extern "C" NAKED register_t __cdecl internal_6eb7170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push edx
        push ecx
        call dword ptr ds : [public_6fb3660]
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6eb7170)
    }
}
