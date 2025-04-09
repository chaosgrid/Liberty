#include "FreeLancer-PCH.h"


#define public_5b42cc _public_5b42cc
#define public_5b42f1 _public_5b42f1

PROC_DECLARE(0x5b42a0, internal_5b42a0, public_5b42a0);
extern "C" NAKED register_t __cdecl internal_5b42a0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_5c6d38]
        cmp dword ptr ds : [edx], 0
        je public_5b42f1
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], 1
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 0x41
        je public_5b42cc
        mov dword ptr ss : [esp+4], 0
        public_5b42cc : nop
        mov ecx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push esi
        lea esi, ss:[esp+8]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x30]
        pop esi
        public_5b42f1 : nop
        ret 4
        UNREACHABLE_TRAP(0x5b42a0)
    }
}

#undef public_5b42cc
#undef public_5b42f1
