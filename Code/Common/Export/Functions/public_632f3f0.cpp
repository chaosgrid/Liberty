#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f3f0);

#define public_632f420 _public_632f420
#define public_632f439 _public_632f439

PROC_DECLARE(0x632f3f0, internal_632f3f0, public_632f3f0);
extern "C" NAKED register_t __cdecl internal_632f3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fsub dword ptr ds : [ecx+0xC]
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_632f420
        fstp st(0)
        mov eax, 1
        ret 8
        public_632f420 : nop
        fld dword ptr ss : [esp+8]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_632f439
        mov eax, 2
        ret 8
        public_632f439 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x632f3f0)
    }
}

#undef public_632f420
#undef public_632f439
