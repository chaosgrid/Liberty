#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec0ce0 _public_6ec0ce0

PROC_DECLARE(0x6ec0cc0, internal_6ec0cc0, public_6ec0cc0);
extern "C" NAKED register_t __cdecl internal_6ec0cc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        lea eax, ds:[esi+0x18]
        mov dword ptr ds : [esi+0xC], 0
        je public_6ec0ce0
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x4C], eax
        public_6ec0ce0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec0cc0)
    }
}

#undef public_6ec0ce0
