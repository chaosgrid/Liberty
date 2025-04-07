#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb437);

#define public_6efb448 _public_6efb448
#define public_6efb46c _public_6efb46c
#define public_6efb479 _public_6efb479
#define public_6efb493 _public_6efb493
#define public_6efb49d _public_6efb49d

PROC_DECLARE(0x6efb437, internal_6efb437, public_6efb437);
extern "C" NAKED register_t __cdecl internal_6efb437()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        mov dword ptr ds : [public_6f010f4], ecx
        mov eax, offset public_6f00c68
        public_6efb448 : nop
        cmp ecx, dword ptr ds : [eax]
        je public_6efb46c
        add eax, 8
        inc edx
        cmp eax, offset public_6f00dd0
        jl public_6efb448
        cmp ecx, 0x13
        jb public_6efb479
        cmp ecx, 0x24
        ja public_6efb479
        mov dword ptr ds : [public_6f010f0], 0xD
        ret 
        public_6efb46c : nop
        mov eax, dword ptr ds : [edx*8+public_6f00c6c]
        mov dword ptr ds : [public_6f010f0], eax
        ret 
        public_6efb479 : nop
        cmp ecx, 0xBC
        jb public_6efb493
        cmp ecx, 0xCA
        mov dword ptr ds : [public_6f010f0], 8
        jbe public_6efb49d
        public_6efb493 : nop
        mov dword ptr ds : [public_6f010f0], 0x16
        public_6efb49d : nop
        ret 
        UNREACHABLE_TRAP(0x6efb437)
    }
}

#undef public_6efb448
#undef public_6efb46c
#undef public_6efb479
#undef public_6efb493
#undef public_6efb49d
