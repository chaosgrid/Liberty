#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348070);

#define public_634807f _public_634807f
#define public_6348090 _public_6348090

PROC_DECLARE(0x6348070, internal_6348070, public_6348070);
extern "C" NAKED register_t __cdecl internal_6348070()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea edx, ds:[ecx+8]
        sub esi, ecx
        mov ecx, 3
        public_634807f : nop
        fld dword ptr ds : [esi+edx]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_6348090
        mov eax, dword ptr ds : [esi+edx]
        mov dword ptr ds : [edx], eax
        public_6348090 : nop
        sub edx, 4
        dec ecx
        jne public_634807f
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348070)
    }
}

#undef public_634807f
#undef public_6348090
