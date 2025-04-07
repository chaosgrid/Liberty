#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d7a0);

#define public_661e2fa _public_661e2fa

PROC_DECLARE(0x661e2e0, internal_661e2e0, public_661e2e0);
extern "C" NAKED register_t __cdecl internal_661e2e0()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+8]
        xor eax, eax
        test cl, cl
        mov ecx, dword ptr ss : [esp+4]
        je public_661e2fa
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        jns public_661e2fa
        or eax, 0xFFFFFFFF
        ret 0xC
        public_661e2fa : nop
        push eax
        call public_661d7a0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x661e2e0)
    }
}

#undef public_661e2fa
