#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211e10);

#define public_6211e32 _public_6211e32
#define public_6211e4d _public_6211e4d
#define public_6211e68 _public_6211e68

PROC_DECLARE(0x6211e10, internal_6211e10, public_6211e10);
extern "C" NAKED register_t __cdecl internal_6211e10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, 0xE2F60EEB
        jne public_6211e32
        mov eax, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ss : [esp+0xC]
        shr eax, 3
        and al, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 0xC
        public_6211e32 : nop
        cmp eax, 0xF3D52EE4
        jne public_6211e4d
        mov edx, dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+0xC]
        shr edx, 0xC
        and dl, 1
        mov byte ptr ds : [eax], dl
        xor eax, eax
        ret 0xC
        public_6211e4d : nop
        cmp eax, 0xE8DC7F5E
        jne public_6211e68
        mov ecx, dword ptr ds : [ecx+0x60]
        mov edx, dword ptr ss : [esp+0xC]
        shr ecx, 0xD
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6211e68 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6211e10)
    }
}

#undef public_6211e32
#undef public_6211e4d
#undef public_6211e68
