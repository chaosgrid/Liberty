#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5907);

#define public_6ef5917 _public_6ef5917
#define public_6ef592f _public_6ef592f
#define public_6ef5931 _public_6ef5931

PROC_DECLARE(0x6ef5907, internal_6ef5907, public_6ef5907);
extern "C" NAKED register_t __cdecl internal_6ef5907()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f02664]
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [public_6f02668]
        lea ecx, ds:[eax+ecx*4]
        public_6ef5917 : nop
        cmp eax, ecx
        jae public_6ef592f
        mov edx, dword ptr ss : [esp+4]
        sub edx, dword ptr ds : [eax+0xC]
        cmp edx, 0x100000
        jb public_6ef5931
        add eax, 0x14
        jmp public_6ef5917
        public_6ef592f : nop
        xor eax, eax
        public_6ef5931 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef5907)
    }
}

#undef public_6ef5917
#undef public_6ef592f
#undef public_6ef5931
