#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8f14);
CLANG_FORWARD_PROC_SYMBOL(public_6efa04d);

#define public_6ef8f37 _public_6ef8f37
#define public_6ef8f54 _public_6ef8f54
#define public_6ef8f56 _public_6ef8f56

PROC_DECLARE(0x6ef8f14, internal_6ef8f14, public_6ef8f14);
extern "C" NAKED register_t __cdecl internal_6ef8f14()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_6ef8f37
        cmp dword ptr ds : [eax+0x10], 3
        jne public_6ef8f37
        cmp dword ptr ds : [eax+0x14], 0x19930520
        jne public_6ef8f37
        jmp public_6ef810c
        public_6ef8f37 : nop
        mov eax, dword ptr ds : [public_6f01248]
        test eax, eax
        je public_6ef8f54
        push eax
        call public_6efa04d
        test eax, eax
        pop ecx
        je public_6ef8f54
        push esi
        call dword ptr ds : [public_6f01248]
        jmp public_6ef8f56
        public_6ef8f54 : nop
        xor eax, eax
        public_6ef8f56 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef8f14)
    }
}

#undef public_6ef8f37
#undef public_6ef8f54
#undef public_6ef8f56
