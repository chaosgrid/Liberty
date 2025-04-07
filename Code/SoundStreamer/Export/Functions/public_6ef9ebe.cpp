#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9ebe);

#define public_6ef9eca _public_6ef9eca
#define public_6ef9ee5 _public_6ef9ee5
#define public_6ef9f17 _public_6ef9f17
#define public_6ef9f24 _public_6ef9f24

PROC_DECLARE(0x6ef9ebe, internal_6ef9ebe, public_6ef9ebe);
extern "C" NAKED register_t __cdecl internal_6ef9ebe()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_6ef9eca
        pop ebp
        ret 
        public_6ef9eca : nop
        cmp dword ptr ds : [public_6f012a8], 0
        jne public_6ef9ee5
        mov cx, word ptr ss : [ebp+0xC]
        cmp cx, 0xFF
        ja public_6ef9f17
        push 1
        mov byte ptr ds : [eax], cl
        pop eax
        pop ebp
        ret 
        public_6ef9ee5 : nop
        lea ecx, ss:[ebp+8]
        and dword ptr ss : [ebp+8], 0
        push ecx
        push 0
        push dword ptr ds : [public_6f00610]
        push eax
        lea eax, ss:[ebp+0xC]
        push 1
        push eax
        push 0x220
        push dword ptr ds : [public_6f012b8]
        call dword ptr ds : [public_6efc0e4]
        test eax, eax
        je public_6ef9f17
        cmp dword ptr ss : [ebp+8], 0
        je public_6ef9f24
        public_6ef9f17 : nop
        mov dword ptr ds : [public_6f010f0], 0x2A
        or eax, 0xFFFFFFFF
        public_6ef9f24 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef9ebe)
    }
}

#undef public_6ef9eca
#undef public_6ef9ee5
#undef public_6ef9f17
#undef public_6ef9f24
