#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef50fb);

#define public_6ef4ede _public_6ef4ede

PROC_DECLARE(0x6ef4ebd, internal_6ef4ebd, public_6ef4ebd);
extern "C" NAKED register_t __cdecl internal_6ef4ebd()
{
    __asm
    {
        push 0x80
        call public_6ef45cb
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6f02650], eax
        jne public_6ef4ede
        push 0x18
        call public_6ef50fb
        mov eax, dword ptr ds : [public_6f02650]
        pop ecx
        public_6ef4ede : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6f02650]
        mov dword ptr ds : [public_6f0264c], eax
        ret 
        UNREACHABLE_TRAP(0x6ef4ebd)
    }
}

#undef public_6ef4ede
