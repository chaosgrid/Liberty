#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_502da6 _public_502da6
#define public_502dba _public_502dba
#define public_502dcd _public_502dcd

PROC_DECLARE(0x502d90, internal_502d90, public_502d90);
extern "C" NAKED register_t __cdecl internal_502d90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_502da6
        call public_4f7a90
        mov dword ptr ds : [esi+8], 0
        public_502da6 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_502dba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_502dba : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_502dcd
        call public_537ad0
        mov dword ptr ds : [esi+0xC], 0
        public_502dcd : nop
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x502d90)
    }
}

#undef public_502da6
#undef public_502dba
#undef public_502dcd
