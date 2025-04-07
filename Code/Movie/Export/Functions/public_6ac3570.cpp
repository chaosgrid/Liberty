#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3570);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4340);

#define public_6ac3598 _public_6ac3598
#define public_6ac359d _public_6ac359d

PROC_DECLARE(0x6ac3570, internal_6ac3570, public_6ac3570);
extern "C" NAKED register_t __cdecl internal_6ac3570()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, 1
        je public_6ac359d
        jle public_6ac3598
        cmp eax, 3
        jg public_6ac3598
        mov eax, dword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push 1
        push eax
        push ecx
        call public_6ac3140
        ret 0xC
        public_6ac3598 : nop
        xor eax, eax
        ret 0xC
        public_6ac359d : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push edx
        push eax
        push ecx
        call public_6ac4340
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3570)
    }
}

#undef public_6ac3598
#undef public_6ac359d
