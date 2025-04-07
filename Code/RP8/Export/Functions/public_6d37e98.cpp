#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d37eb8 _public_6d37eb8
#define public_6d37efe _public_6d37efe
#define public_6d37f04 _public_6d37f04

PROC_DECLARE(0x6d37e98, internal_6d37e98, public_6d37e98);
extern "C" NAKED register_t __cdecl internal_6d37e98()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1058]
        push esi
        mov esi, dword ptr ss : [esp+8]
        shl eax, 4
        add eax, esi
        cmp esi, eax
        jae public_6d37f04
        sub eax, esi
        dec eax
        shr eax, 4
        inc eax
        lea edx, ds:[esi+8]
        mov esi, eax
        public_6d37eb8 : nop
        fld dword ptr ds : [edx-8]
        fcomp dword ptr ds : [ecx+0x1C]
        fnstsw ax
        test ah, 0x44
        jp public_6d37efe
        fld dword ptr ds : [edx-4]
        fcomp dword ptr ds : [ecx+0x20]
        fnstsw ax
        test ah, 0x44
        jp public_6d37efe
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [ecx+0x24]
        fnstsw ax
        test ah, 0x44
        jp public_6d37efe
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        test ah, 0x44
        jp public_6d37efe
        fldz 
        fstp dword ptr ds : [edx+4]
        fldz 
        fstp dword ptr ds : [edx]
        fldz 
        fstp dword ptr ds : [edx-4]
        fldz 
        fstp dword ptr ds : [edx-8]
        public_6d37efe : nop
        add edx, 0x10
        dec esi
        jne public_6d37eb8
        public_6d37f04 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d37e98)
    }
}

#undef public_6d37eb8
#undef public_6d37efe
#undef public_6d37f04
