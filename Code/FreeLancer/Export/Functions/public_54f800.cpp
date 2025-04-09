#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54f800);

#define public_54f810 _public_54f810
#define public_54f829 _public_54f829

PROC_DECLARE(0x54f800, internal_54f800, public_54f800);
extern "C" NAKED register_t __cdecl internal_54f800()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_54f829
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_54f810 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_54f810
        pop edi
        public_54f829 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x54f800)
    }
}

#undef public_54f810
#undef public_54f829
