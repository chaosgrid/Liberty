#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ebfd09 _public_6ebfd09

PROC_DECLARE(0x6ebfcf0, internal_6ebfcf0, public_6ebfcf0);
extern "C" NAKED register_t __cdecl internal_6ebfcf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        lea eax, ds:[esi+0x18]
        je public_6ebfd09
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x64], eax
        public_6ebfd09 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x60], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ebfcf0)
    }
}

#undef public_6ebfd09
