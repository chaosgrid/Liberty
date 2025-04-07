#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1d10);

#define public_6ef1d21 _public_6ef1d21
#define public_6ef1d36 _public_6ef1d36
#define public_6ef1d40 _public_6ef1d40

PROC_DECLARE(0x6ef1d10, internal_6ef1d10, public_6ef1d10);
extern "C" NAKED register_t __cdecl internal_6ef1d10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x86]
        test al, al
        jne public_6ef1d21
        mov byte ptr ds : [ecx+0x86], 1
        public_6ef1d21 : nop
        mov eax, dword ptr ds : [ecx+0x80]
        cmp eax, 1
        je public_6ef1d36
        cmp eax, 8
        je public_6ef1d36
        cmp eax, 9
        jne public_6ef1d40
        public_6ef1d36 : nop
        mov dword ptr ds : [ecx+0x80], 2
        public_6ef1d40 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef1d10)
    }
}

#undef public_6ef1d21
#undef public_6ef1d36
#undef public_6ef1d40
