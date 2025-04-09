#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539d80);

#define public_53ead1 _public_53ead1

PROC_DECLARE(0x53eaa0, internal_53eaa0, public_53eaa0);
extern "C" NAKED register_t __cdecl internal_53eaa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        je public_53ead1
        lea eax, ds:[edx+0xC]
        test eax, eax
        je public_53ead1
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53ead1
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x67
        cmp al, 0x67
        jne public_53ead1
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], edx
        jmp public_539d80
        public_53ead1 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x53eaa0)
    }
}

#undef public_53ead1
