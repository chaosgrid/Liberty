#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f430);

#define public_6d4f441 _public_6d4f441
#define public_6d4f450 _public_6d4f450
#define public_6d4f457 _public_6d4f457

PROC_DECLARE(0x6d4f430, internal_6d4f430, public_6d4f430);
extern "C" NAKED register_t __cdecl internal_6d4f430()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x270]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6d4f457
        mov dx, word ptr ss : [esp+4]
        public_6d4f441 : nop
        cmp word ptr ds : [eax+8], dx
        je public_6d4f450
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d4f441
        ret 8
        public_6d4f450 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        public_6d4f457 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d4f430)
    }
}

#undef public_6d4f441
#undef public_6d4f450
#undef public_6d4f457
