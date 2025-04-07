#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c50);

#define public_6ce7c60 _public_6ce7c60
#define public_6ce7c6b _public_6ce7c6b
#define public_6ce7c70 _public_6ce7c70

PROC_DECLARE(0x6ce7c50, internal_6ce7c50, public_6ce7c50);
extern "C" NAKED register_t __cdecl internal_6ce7c50()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x64]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6ce7c6b
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[ecx]
        public_6ce7c60 : nop
        cmp dword ptr ds : [eax+0xC], edx
        je public_6ce7c70
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6ce7c60
        public_6ce7c6b : nop
        xor al, al
        ret 4
        public_6ce7c70 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6ce7c50)
    }
}

#undef public_6ce7c60
#undef public_6ce7c6b
#undef public_6ce7c70
