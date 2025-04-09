#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4557d0);

#define public_53e392 _public_53e392

PROC_DECLARE(0x53e370, internal_53e370, public_53e370);
extern "C" NAKED register_t __cdecl internal_53e370()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_67334c], ecx
        mov ecx, dword ptr ds : [public_673350]
        test ecx, ecx
        mov dword ptr ds : [public_673348], eax
        je public_53e392
        call public_4557d0
        public_53e392 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x53e370)
    }
}

#undef public_53e392
