#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204af0);

#define public_6204b13 _public_6204b13
#define public_6204b32 _public_6204b32
#define public_6204b51 _public_6204b51
#define public_6204b6f _public_6204b6f
#define public_6204b8c _public_6204b8c

PROC_DECLARE(0x6204af0, internal_6204af0, public_6204af0);
extern "C" NAKED register_t __cdecl internal_6204af0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x8508C35
        jne public_6204b13
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 9
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6204b13 : nop
        cmp eax, 0xE8B8CDE7
        jne public_6204b32
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 8
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6204b32 : nop
        cmp eax, 0x1C65B7B9
        jne public_6204b51
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xA
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6204b51 : nop
        cmp eax, 0xF87B5FD5
        jne public_6204b6f
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 1
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6204b6f : nop
        cmp eax, 0x3503B61
        je public_6204b8c
        cmp eax, 0xE2F60EEB
        je public_6204b8c
        cmp eax, 0xABE0402
        je public_6204b8c
        mov eax, 0xFFFFFFF8
        ret 0xC
        public_6204b8c : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax], 0
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6204af0)
    }
}

#undef public_6204b13
#undef public_6204b32
#undef public_6204b51
#undef public_6204b6f
#undef public_6204b8c
