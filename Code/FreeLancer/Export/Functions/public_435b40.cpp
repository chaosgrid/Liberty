#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435b40);

#define public_435b4e _public_435b4e
#define public_435b57 _public_435b57
#define public_435b60 _public_435b60
#define public_435b69 _public_435b69
#define public_435b72 _public_435b72

PROC_DECLARE(0x435b40, internal_435b40, public_435b40);
extern "C" NAKED register_t __cdecl internal_435b40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        xor al, al
        test edx, edx
        je public_435b4e
        mov al, 1
        public_435b4e : nop
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_435b57
        mov al, 1
        public_435b57 : nop
        mov edx, dword ptr ds : [ecx+8]
        test edx, edx
        je public_435b60
        mov al, 1
        public_435b60 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        test edx, edx
        je public_435b69
        mov al, 1
        public_435b69 : nop
        mov edx, dword ptr ds : [ecx+0x30]
        test edx, edx
        jle public_435b72
        mov al, 1
        public_435b72 : nop
        ret 
        UNREACHABLE_TRAP(0x435b40)
    }
}

#undef public_435b4e
#undef public_435b57
#undef public_435b60
#undef public_435b69
#undef public_435b72
