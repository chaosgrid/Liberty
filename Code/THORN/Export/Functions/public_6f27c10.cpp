#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f27c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);

#define public_6f27c3e _public_6f27c3e

PROC_DECLARE(0x6f27c10, internal_6f27c10, public_6f27c10);
extern "C" NAKED register_t __cdecl internal_6f27c10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27c3e
        push esi
        call public_6f4b900
        fld dword ptr ss : [esp+0x10]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop esi
        jmp public_6f4b250
        public_6f27c3e : nop
        mov eax, dword ptr ds : [public_6f61de8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f27c10)
    }
}

#undef public_6f27c3e
