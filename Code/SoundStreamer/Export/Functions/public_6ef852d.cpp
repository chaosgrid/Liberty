#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef852d);

#define public_6ef8532 _public_6ef8532
#define public_6ef8540 _public_6ef8540
#define public_6ef8545 _public_6ef8545

PROC_DECLARE(0x6ef852d, internal_6ef852d, public_6ef852d);
extern "C" NAKED register_t __cdecl internal_6ef852d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_6ef8532 : nop
        cmp esi, dword ptr ss : [esp+0xC]
        jae public_6ef8545
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ef8540
        call eax
        public_6ef8540 : nop
        add esi, 4
        jmp public_6ef8532
        public_6ef8545 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef852d)
    }
}

#undef public_6ef8532
#undef public_6ef8540
#undef public_6ef8545
