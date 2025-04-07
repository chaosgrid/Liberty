#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63449d0);

#define public_63449ea _public_63449ea
#define public_63449f6 _public_63449f6

PROC_DECLARE(0x63449d0, internal_63449d0, public_63449d0);
extern "C" NAKED register_t __cdecl internal_63449d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_63449f6
        test eax, eax
        je public_63449ea
        push eax
        call public_6343fb0
        add esp, 4
        public_63449ea : nop
        mov dword ptr ds : [esi+4], 0
        mov word ptr ds : [esi], 0
        public_63449f6 : nop
        mov word ptr ds : [esi+2], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63449d0)
    }
}

#undef public_63449ea
#undef public_63449f6
