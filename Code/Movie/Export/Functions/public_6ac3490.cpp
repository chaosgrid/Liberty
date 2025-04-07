#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac38d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4160);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9f60);

#define public_6ac34a5 _public_6ac34a5
#define public_6ac34c4 _public_6ac34c4
#define public_6ac34dc _public_6ac34dc

PROC_DECLARE(0x6ac3490, internal_6ac3490, public_6ac3490);
extern "C" NAKED register_t __cdecl internal_6ac3490()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        dec eax
        je public_6ac34dc
        dec eax
        je public_6ac34c4
        dec eax
        je public_6ac34a5
        xor eax, eax
        ret 0x10
        public_6ac34a5 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+8]
        add ecx, 0x24
        push eax
        mov eax, dword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        call public_6ac9f60
        ret 0x10
        public_6ac34c4 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        call public_6ac38d0
        ret 0x10
        public_6ac34dc : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        call public_6ac4160
        mov eax, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6ac3490)
    }
}

#undef public_6ac34a5
#undef public_6ac34c4
#undef public_6ac34dc
