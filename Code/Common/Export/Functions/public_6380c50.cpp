#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6380c50);
CLANG_FORWARD_PROC_SYMBOL(public_6384610);

#define public_6380c74 _public_6380c74
#define public_6380c88 _public_6380c88
#define public_6380cba _public_6380cba
#define public_6380ce8 _public_6380ce8

PROC_DECLARE(0x6380c50, internal_6380c50, public_6380c50);
extern "C" NAKED register_t __cdecl internal_6380c50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_658b24c]
        fld qword ptr ds : [public_63a58b0]
        mov ecx, eax
        fst qword ptr ss : [esp]
        dec eax
        test ecx, ecx
        je public_6380c88
        mov ecx, dword ptr ss : [esp+0xC]
        lea edx, ds:[eax+1]
        mov eax, dword ptr ss : [esp+0x10]
        public_6380c74 : nop
        fld qword ptr ds : [ecx]
        add eax, 8
        fmul qword ptr ds : [eax-8]
        add ecx, 8
        dec edx
        faddp 
        jne public_6380c74
        fst qword ptr ss : [esp]
        public_6380c88 : nop
        mov eax, dword ptr ds : [public_658b1a8]
        test eax, eax
        je public_6380cba
        fstp st(0)
        call public_6384610
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_63a5958]
        fsub qword ptr ds : [public_63a5940]
        fmul qword ptr ds : [public_658b1b0]
        fadd qword ptr ss : [esp]
        fst qword ptr ss : [esp]
        public_6380cba : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_6380ce8
        mov edx, dword ptr ss : [esp+4]
        fstp st(0)
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f672c @0x6380cd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f672c
        push ecx
        call dword ptr ds : [public_63991e8]
        fld qword ptr ss : [esp+0x10]
        add esp, 0x10
        public_6380ce8 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6380c50)
    }
}

#undef public_6380c74
#undef public_6380c88
#undef public_6380cba
#undef public_6380ce8
