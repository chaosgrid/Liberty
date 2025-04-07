#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9d9b);

#define public_6ef9dc4 _public_6ef9dc4
#define public_6ef9dd5 _public_6ef9dd5

PROC_DECLARE(0x6ef9d9b, internal_6ef9d9b, public_6ef9d9b);
extern "C" NAKED register_t __cdecl internal_6ef9d9b()
{
    __asm
    {
        inc dword ptr ds : [public_6f01280]
        push 0x1000
        call public_6ef45cb
        pop ecx
        mov ecx, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ds : [ecx+8], eax
        je public_6ef9dc4
        or dword ptr ds : [ecx+0xC], 8
        mov dword ptr ds : [ecx+0x18], 0x1000
        jmp public_6ef9dd5
        public_6ef9dc4 : nop
        or dword ptr ds : [ecx+0xC], 4
        lea eax, ds:[ecx+0x14]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0x18], 2
        public_6ef9dd5 : nop
        mov eax, dword ptr ds : [ecx+8]
        and dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x6ef9d9b)
    }
}

#undef public_6ef9dc4
#undef public_6ef9dd5
