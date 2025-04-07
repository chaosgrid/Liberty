#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237c00);

#define public_6237c20 _public_6237c20
#define public_6237c3f _public_6237c3f
#define public_6237c5e _public_6237c5e
#define public_6237c7d _public_6237c7d
#define public_6237c9c _public_6237c9c
#define public_6237cbb _public_6237cbb

PROC_DECLARE(0x6237c00, internal_6237c00, public_6237c00);
extern "C" NAKED register_t __cdecl internal_6237c00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFB7958C1
        jne public_6237c20
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax+0x5C]
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6237c20 : nop
        cmp eax, 0xE91467F1
        jne public_6237c3f
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 2
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6237c3f : nop
        cmp eax, 0xF9FEBF0D
        jne public_6237c5e
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 4
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6237c5e : nop
        cmp eax, 0xE2F60EEB
        jne public_6237c7d
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 3
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6237c7d : nop
        cmp eax, 0xF3D52EE4
        jne public_6237c9c
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6237c9c : nop
        cmp eax, 0xE8DC7F5E
        jne public_6237cbb
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xD
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6237cbb : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6237c00)
    }
}

#undef public_6237c20
#undef public_6237c3f
#undef public_6237c5e
#undef public_6237c7d
#undef public_6237c9c
#undef public_6237cbb
