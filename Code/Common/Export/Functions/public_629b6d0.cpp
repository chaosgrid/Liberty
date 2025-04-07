#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);

#define public_629b6e0 _public_629b6e0
#define public_629b6ef _public_629b6ef
#define public_629b6f8 _public_629b6f8
#define public_629b707 _public_629b707
#define public_629b70e _public_629b70e

PROC_DECLARE(0x629b6d0, internal_629b6d0, public_629b6d0);
extern "C" NAKED register_t __cdecl internal_629b6d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push esi
        mov si, word ptr ss : [esp+8]
        push edi
        je public_629b6ef
        public_629b6e0 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp word ptr ds : [edi+8], si
        je public_629b70e
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_629b6e0
        public_629b6ef : nop
        mov ecx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_629b707
        public_629b6f8 : nop
        mov edx, dword ptr ds : [eax+8]
        cmp word ptr ds : [edx+8], si
        je public_629b70e
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_629b6f8
        public_629b707 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        public_629b70e : nop
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629b6d0)
    }
}

#undef public_629b6e0
#undef public_629b6ef
#undef public_629b6f8
#undef public_629b707
#undef public_629b70e
