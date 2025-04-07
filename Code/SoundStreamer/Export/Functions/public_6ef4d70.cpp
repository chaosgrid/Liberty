#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4d70);

#define public_6ef4d91 _public_6ef4d91

PROC_DECLARE(0x6ef4d70, internal_6ef4d70, public_6ef4d70);
extern "C" NAKED register_t __cdecl internal_6ef4d70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test dword ptr ds : [ecx+4], 6
        mov eax, 1
        je public_6ef4d91
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, 3
        public_6ef4d91 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef4d70)
    }
}

#undef public_6ef4d91
