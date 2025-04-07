#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636b770);

#define public_636b787 _public_636b787
#define public_636b7ac _public_636b7ac
#define public_636b7b4 _public_636b7b4
#define public_636b7b9 _public_636b7b9

PROC_DECLARE(0x636b770, internal_636b770, public_636b770);
extern "C" NAKED register_t __cdecl internal_636b770()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor edx, edx
        test edi, edi
        jle public_636b7b4
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+8]
        public_636b787 : nop
        fld dword ptr ds : [ecx-8]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x40
        je public_636b7ac
        fld dword ptr ds : [ecx-4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x40
        je public_636b7ac
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x40
        jne public_636b7b9
        public_636b7ac : nop
        inc edx
        add ecx, 0x10
        cmp edx, edi
        jl public_636b787
        public_636b7b4 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_636b7b9 : nop
        pop edi
        mov eax, edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636b770)
    }
}

#undef public_636b787
#undef public_636b7ac
#undef public_636b7b4
#undef public_636b7b9
