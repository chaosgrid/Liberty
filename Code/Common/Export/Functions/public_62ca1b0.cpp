#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ca1b0);

#define public_62ca1d0 _public_62ca1d0

PROC_DECLARE(0x62ca1b0, internal_62ca1b0, public_62ca1b0);
extern "C" NAKED register_t __cdecl internal_62ca1b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62ca1d0
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62ca1d0 : nop
        mov eax, dword ptr ds : [esi+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ca1b0)
    }
}

#undef public_62ca1d0
