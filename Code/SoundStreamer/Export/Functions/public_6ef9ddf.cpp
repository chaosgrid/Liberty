#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9ddf);

#define public_6ef9dee _public_6ef9dee

PROC_DECLARE(0x6ef9ddf, internal_6ef9ddf, public_6ef9ddf);
extern "C" NAKED register_t __cdecl internal_6ef9ddf()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6f02640]
        jb public_6ef9dee
        xor eax, eax
        ret 
        public_6ef9dee : nop
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        mov ecx, dword ptr ds : [ecx*4+public_6f02540]
        mov al, byte ptr ds : [ecx+eax*8+4]
        and eax, 0x40
        ret 
        UNREACHABLE_TRAP(0x6ef9ddf)
    }
}

#undef public_6ef9dee
