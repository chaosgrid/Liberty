#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378b40);

#define public_6378b57 _public_6378b57
#define public_6378b60 _public_6378b60
#define public_6378b79 _public_6378b79
#define public_6378b8b _public_6378b8b

PROC_DECLARE(0x6378b40, internal_6378b40, public_6378b40);
extern "C" NAKED register_t __cdecl internal_6378b40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jne public_6378b60
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ds : [ecx+8], eax
        je public_6378b57
        cmp dword ptr ds : [ecx+0xC], eax
        jne public_6378b8b
        public_6378b57 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6378b60 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+8]
        cmp eax, edx
        jne public_6378b79
        cmp dword ptr ds : [ecx+0xC], esi
        jne public_6378b79
        mov eax, 1
        pop esi
        ret 8
        public_6378b79 : nop
        cmp dword ptr ds : [ecx+0xC], edx
        jne public_6378b8b
        cmp eax, esi
        jne public_6378b8b
        mov eax, 1
        pop esi
        ret 8
        public_6378b8b : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6378b40)
    }
}

#undef public_6378b57
#undef public_6378b60
#undef public_6378b79
#undef public_6378b8b
