#include "FreeLancer-PCH.h"


#define public_4e79d6 _public_4e79d6

PROC_DECLARE(0x4e79b0, internal_4e79b0, public_4e79b0);
extern "C" NAKED register_t __cdecl internal_4e79b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x16C]
        test al, al
        jne public_4e79d6
        mov eax, dword ptr ds : [esi-0x364]
        lea ecx, ds:[esi-0x364]
        push 0
        call dword ptr ds : [eax+0x34]
        mov al, byte ptr ds : [esi+0x16C]
        test al, al
        public_4e79d6 : nop
        sete cl
        mov byte ptr ds : [esi+0x16C], cl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4e79b0)
    }
}

#undef public_4e79d6
