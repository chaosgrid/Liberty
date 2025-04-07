#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);

#define public_6ef46bc _public_6ef46bc
#define public_6ef46d0 _public_6ef46d0

PROC_DECLARE(0x6ef46b0, internal_6ef46b0, public_6ef46b0);
extern "C" NAKED register_t __cdecl internal_6ef46b0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6ef46d0
        public_6ef46bc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6ef46bc
        public_6ef46d0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6ef46b0)
    }
}

#undef public_6ef46bc
#undef public_6ef46d0
