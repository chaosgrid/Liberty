#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efab32);

#define public_6efab48 _public_6efab48
#define public_6efab4b _public_6efab4b

PROC_DECLARE(0x6efab32, internal_6efab32, public_6efab32);
extern "C" NAKED register_t __cdecl internal_6efab32()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor eax, eax
        lea ecx, ds:[edx+esi]
        cmp ecx, edx
        jb public_6efab48
        cmp ecx, esi
        jae public_6efab4b
        public_6efab48 : nop
        push 1
        pop eax
        public_6efab4b : nop
        mov edx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [edx], ecx
        ret 
        UNREACHABLE_TRAP(0x6efab32)
    }
}

#undef public_6efab48
#undef public_6efab4b
