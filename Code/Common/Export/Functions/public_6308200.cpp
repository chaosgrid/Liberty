#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6308200);

#define public_6308236 _public_6308236

PROC_DECLARE(0x6308200, internal_6308200, public_6308200);
extern "C" NAKED register_t __cdecl internal_6308200()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308236
        fild dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp]
        faddp 
        add esp, 8
        ret 
        public_6308236 : nop
        push esi
        mov esi, 0x100001
        call dword ptr ds : [public_6399110]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x630824e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308253*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push esi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6308200)
    }
}

#undef public_6308236
