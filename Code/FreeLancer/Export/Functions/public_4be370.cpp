#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bdea0);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);

#define public_4be384 _public_4be384

PROC_DECLARE(0x4be370, internal_4be370, public_4be370);
extern "C" NAKED register_t __cdecl internal_4be370()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67244c]
        test ecx, ecx
        je public_4be384
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4bdea0
        public_4be384 : nop
        ret 
        UNREACHABLE_TRAP(0x4be370)
    }
}

#undef public_4be384
