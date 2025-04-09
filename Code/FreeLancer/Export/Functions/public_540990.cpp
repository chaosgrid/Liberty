#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540990);

#define public_5409c9 _public_5409c9

PROC_DECLARE(0x540990, internal_540990, public_540990);
extern "C" NAKED register_t __cdecl internal_540990()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        fld dword ptr ds : [eax+0x38]
        fcomp dword ptr ds : [public_613ec4]
        fnstsw ax
        test ah, 0x41
        jne public_5409c9
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        mov al, byte ptr ss : [esp+8]
        not al
        shr al, 7
        pop esi
        ret 
        public_5409c9 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x540990)
    }
}

#undef public_5409c9
