#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298e70);
CLANG_FORWARD_PROC_SYMBOL(public_62f6910);

#define public_6298ec0 _public_6298ec0
#define public_6298ecc _public_6298ecc

PROC_DECLARE(0x6298e70, internal_6298e70, public_6298e70);
extern "C" NAKED register_t __cdecl internal_6298e70()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+4], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6298ecc
        mov ecx, dword ptr ds : [esi+0x4C]
        cmp dword ptr ds : [ecx+0x90], 2
        jne public_6298ec0
        fld dword ptr ds : [ecx+0x98]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6298ec0
        fld dword ptr ds : [ecx+0x9C]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_6298ec0
        fld dword ptr ds : [ecx+0x98]
        pop esi
        pop ecx
        ret 
        public_6298ec0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        pop esi
        add esp, 4
        jmp public_62f6910
        public_6298ecc : nop
        fld dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6298e70)
    }
}

#undef public_6298ec0
#undef public_6298ecc
