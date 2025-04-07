#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef28c0);

#define public_6ef28e1 _public_6ef28e1

PROC_DECLARE(0x6ef28c0, internal_6ef28c0, public_6ef28c0);
extern "C" NAKED register_t __cdecl internal_6ef28c0()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x18], 0xFFFFFFFF
        je public_6ef28e1
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ecx+0x20]
        add eax, edx
        cmp eax, esi
        pop esi
        ja public_6ef28e1
        mov eax, dword ptr ds : [ecx+0x1C]
        add eax, edx
        ret 8
        public_6ef28e1 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ef28c0)
    }
}

#undef public_6ef28e1
