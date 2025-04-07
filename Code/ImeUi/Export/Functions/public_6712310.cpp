#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712310);

#define public_6712358 _public_6712358
#define public_671236e _public_671236e
#define public_6712378 _public_6712378

PROC_DECLARE(0x6712310, internal_6712310, public_6712310);
extern "C" NAKED register_t __cdecl internal_6712310()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        mov dword ptr ss : [esp], 0
        push eax
/*FIXUP push offset public_6717804 @0x6712320*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717804
        push 1
        push 0
/*FIXUP push offset public_6717494 @0x6712329*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717494
        call dword ptr ds : [public_671712c]
        test eax, eax
        jl public_6712378
        mov eax, dword ptr ss : [esp]
        test eax, eax
        je public_6712378
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        jl public_6712358
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_671b3ec], eax
        public_6712358 : nop
        mov eax, dword ptr ds : [public_671b3ec]
        test ah, 8
        jne public_671236e
        mov eax, dword ptr ss : [esp]
        push 8
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x28]
        public_671236e : nop
        mov eax, dword ptr ss : [esp]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        public_6712378 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6712310)
    }
}

#undef public_6712358
#undef public_671236e
#undef public_6712378
