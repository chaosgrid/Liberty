#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6353f10);
CLANG_FORWARD_PROC_SYMBOL(public_6355490);
CLANG_FORWARD_PROC_SYMBOL(public_6356560);

#define public_63565a6 _public_63565a6
#define public_63565af _public_63565af

PROC_DECLARE(0x6356560, internal_6356560, public_6356560);
extern "C" NAKED register_t __cdecl internal_6356560()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_658ab1c]
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+0x20]
        push 0x3F800000
        push ecx
        push edx
        mov ecx, esi
        call public_6353f10
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [public_658ab2c]
        fnstsw ax
        test ah, 1
        je public_63565a6
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0x54]
        and ecx, 0x300
        cmp ecx, 0x100
        jne public_63565af
        public_63565a6 : nop
        mov ecx, dword ptr ds : [edi+4]
        push esi
        call public_6355490
        public_63565af : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6356560)
    }
}

#undef public_63565a6
#undef public_63565af
