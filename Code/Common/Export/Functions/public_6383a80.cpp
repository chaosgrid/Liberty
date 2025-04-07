#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6383a80);

#define public_6383a9e _public_6383a9e
#define public_6383aa4 _public_6383aa4
#define public_6383aea _public_6383aea

PROC_DECLARE(0x6383a80, internal_6383a80, public_6383a80);
extern "C" NAKED register_t __cdecl internal_6383a80()
{
    __asm
    {
        fld qword ptr ds : [public_658b888]
        sub esp, 8
        fcomp qword ptr ds : [public_658b6a0]
        fnstsw ax
        test ah, 1
        je public_6383a9e
        fld qword ptr ds : [public_658b6a0]
        jmp public_6383aa4
        public_6383a9e : nop
        fld qword ptr ds : [public_658b888]
        public_6383aa4 : nop
        fadd qword ptr ds : [public_658b6a0]
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, 4
        fst qword ptr ss : [esp]
        jl public_6383aea
        mov eax, dword ptr ds : [public_658b88c]
        fstp st(0)
        mov ecx, dword ptr ds : [public_658b888]
        mov edx, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ss : [esp+4]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f7008 @0x6383ad7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7008
        push ecx
        call dword ptr ds : [public_63991e8]
        fld qword ptr ss : [esp+0x18]
        add esp, 0x18
        public_6383aea : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6383a80)
    }
}

#undef public_6383a9e
#undef public_6383aa4
#undef public_6383aea
