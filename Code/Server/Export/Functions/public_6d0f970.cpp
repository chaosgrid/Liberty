#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f970);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0f98a _public_6d0f98a
#define public_6d0f995 _public_6d0f995

PROC_DECLARE(0x6d0f970, internal_6d0f970, public_6d0f970);
extern "C" NAKED register_t __cdecl internal_6d0f970()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        je public_6d0f98a
        test eax, eax
        je public_6d0f995
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        public_6d0f98a : nop
        test eax, eax
        je public_6d0f995
        push eax
        call public_6d5ffb0
        pop ecx
        public_6d0f995 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d0f970)
    }
}

#undef public_6d0f98a
#undef public_6d0f995
