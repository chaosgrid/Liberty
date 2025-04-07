#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);

#define public_6ec1e4c _public_6ec1e4c
#define public_6ec1e5c _public_6ec1e5c
#define public_6ec1e63 _public_6ec1e63
#define public_6ec1e75 _public_6ec1e75
#define public_6ec1e77 _public_6ec1e77

PROC_DECLARE(0x6ec1e30, internal_6ec1e30, public_6ec1e30);
extern "C" NAKED register_t __cdecl internal_6ec1e30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor bl, bl
        test ecx, ecx
        je public_6ec1e63
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [ecx], eax
        je public_6ec1e4c
        test eax, 0x3FFFFFFF
        jne public_6ec1e75
        public_6ec1e4c : nop
        mov esi, dword ptr ds : [esi+0xC]
        cmp dword ptr ds : [ecx+4], esi
        je public_6ec1e5c
        test esi, 0x3FFFFFFF
        jne public_6ec1e75
        public_6ec1e5c : nop
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ec1e63 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+8]
        call public_6f478b0
        cmp eax, dword ptr ds : [esi+0x10]
        mov al, 1
        je public_6ec1e77
        public_6ec1e75 : nop
        mov al, bl
        public_6ec1e77 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec1e30)
    }
}

#undef public_6ec1e4c
#undef public_6ec1e5c
#undef public_6ec1e63
#undef public_6ec1e75
#undef public_6ec1e77
