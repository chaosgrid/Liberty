#include "FreeLancer-PCH.h"


#define public_5327e6 _public_5327e6
#define public_5327f7 _public_5327f7

PROC_DECLARE(0x5327d0, internal_5327d0, public_5327d0);
extern "C" NAKED register_t __cdecl internal_5327d0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xA
        push esi
        mov esi, ecx
        jne public_5327f7
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_5327e6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5327e6 : nop
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_5c6938]
        mov dword ptr ds : [esi+4], 0
        public_5327f7 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5327d0)
    }
}

#undef public_5327e6
#undef public_5327f7
