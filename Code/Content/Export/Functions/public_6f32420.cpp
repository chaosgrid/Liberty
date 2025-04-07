#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32420);

PROC_DECLARE(0x6f32420, internal_6f32420, public_6f32420);
extern "C" NAKED register_t __cdecl internal_6f32420()
{
    __asm
    {
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[eax+eax*4]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        inc eax
        mov dword ptr ds : [ecx], eax
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6f32420)
    }
}
