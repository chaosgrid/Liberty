#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538390);

#define public_5383a0 _public_5383a0
#define public_5383b4 _public_5383b4

PROC_DECLARE(0x538390, internal_538390, public_538390);
extern "C" NAKED register_t __cdecl internal_538390()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_675570]
        test ecx, ecx
        je public_5383b4
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_5383a0 : nop
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+0xC8]
        push edi
        call dword ptr ds : [eax+0xC]
        test esi, esi
        mov ecx, esi
        jne public_5383a0
        pop edi
        pop esi
        public_5383b4 : nop
        ret 
        UNREACHABLE_TRAP(0x538390)
    }
}

#undef public_5383a0
#undef public_5383b4
