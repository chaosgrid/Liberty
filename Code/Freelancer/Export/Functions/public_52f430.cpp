#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x52f430, internal_52f430, public_52f430);
extern "C" NAKED register_t __cdecl internal_52f430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c68f4]
        fld dword ptr ds : [eax]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [public_5c68f0]
        fld dword ptr ds : [edx]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x52f430)
    }
}
