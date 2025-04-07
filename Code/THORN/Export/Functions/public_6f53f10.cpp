#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f533b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f53fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f53f28 _public_6f53f28
#define public_6f53f7b _public_6f53f7b
#define public_6f53f8e _public_6f53f8e
#define public_6f53f90 _public_6f53f90

PROC_DECLARE(0x6f53f10, internal_6f53f10, public_6f53f10);
extern "C" NAKED register_t __cdecl internal_6f53f10()
{
    __asm
    {
        push ecx
        fld qword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_6f5b430]
        fld qword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        je public_6f53f28
        fchs 
        public_6f53f28 : nop
        fld qword ptr ds : [public_6f5b430]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6f53f8e
        fcom qword ptr ds : [public_6f5b450]
        fnstsw ax
        test ah, 0x41
        je public_6f53f8e
        fld st(0)
        call public_6f57f16
        mov ecx, eax
        mov dword ptr ss : [esp], ecx
        fild dword ptr ss : [esp]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x40
        je public_6f53f90
        fld qword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_6f5b430]
        fnstsw ax
        test ah, 1
        mov eax, 9
        jne public_6f53f7b
        mov eax, 7
        public_6f53f7b : nop
        push 1
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6f52dd0
        add esp, 0x10
        pop ecx
        ret 
        public_6f53f8e : nop
        fstp st(0)
        public_6f53f90 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        call public_6f53fc0
        push eax
        push esi
        call public_6f533b0
        add esp, 0x14
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f53f10)
    }
}

#undef public_6f53f28
#undef public_6f53f7b
#undef public_6f53f8e
#undef public_6f53f90
