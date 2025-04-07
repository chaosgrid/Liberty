#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1680);

#define public_62e16ec _public_62e16ec
#define public_62e1704 _public_62e1704

PROC_DECLARE(0x62e1680, internal_62e1680, public_62e1680);
extern "C" NAKED register_t __cdecl internal_62e1680()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp], ecx
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e16ec
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        jmp public_62e1704
        public_62e16ec : nop
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        public_62e1704 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e1680)
    }
}

#undef public_62e16ec
#undef public_62e1704
