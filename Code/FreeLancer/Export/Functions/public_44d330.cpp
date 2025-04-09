#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_43bab0);

#define public_44d37a _public_44d37a

PROC_DECLARE(0x44d330, internal_44d330, public_44d330);
extern "C" NAKED register_t __cdecl internal_44d330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_44d37a
        mov dword ptr ds : [esi+0xC], 1
        mov dword ptr ds : [esi+0x14], 0
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        push ecx
        fstp dword ptr ss : [esp]
        push 0x3F800000
        call public_412050
        push 0
        call public_41dda0
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        push eax
        mov ecx, offset public_668708
        call public_43bab0
        public_44d37a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x44d330)
    }
}

#undef public_44d37a
