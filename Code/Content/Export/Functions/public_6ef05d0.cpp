#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef05da _public_6ef05da
#define public_6ef05dc _public_6ef05dc

PROC_DECLARE(0x6ef05d0, internal_6ef05d0, public_6ef05d0);
extern "C" NAKED register_t __cdecl internal_6ef05d0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_6ef05da
        lea esi, ds:[ecx+4]
        jmp public_6ef05dc
        public_6ef05da : nop
        xor esi, esi
        public_6ef05dc : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef05d0)
    }
}

#undef public_6ef05da
#undef public_6ef05dc
