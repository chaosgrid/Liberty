#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7440);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f190);

#define public_6d0f1a0 _public_6d0f1a0
#define public_6d0f1ae _public_6d0f1ae
#define public_6d0f1bb _public_6d0f1bb

PROC_DECLARE(0x6d0f190, internal_6d0f190, public_6d0f190);
extern "C" NAKED register_t __cdecl internal_6d0f190()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6d0f1bb
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[ecx]
        public_6d0f1a0 : nop
        cmp dword ptr ds : [eax+0x40], edx
        je public_6d0f1ae
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d0f1a0
        ret 8
        public_6d0f1ae : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea ecx, ds:[eax+8]
        call public_6cf7440
        public_6d0f1bb : nop
        ret 8
        UNREACHABLE_TRAP(0x6d0f190)
    }
}

#undef public_6d0f1a0
#undef public_6d0f1ae
#undef public_6d0f1bb
