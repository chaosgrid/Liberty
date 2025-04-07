#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e680);

#define public_622e6a2 _public_622e6a2
#define public_622e6bd _public_622e6bd
#define public_622e6d8 _public_622e6d8
#define public_622e6f2 _public_622e6f2

PROC_DECLARE(0x622e680, internal_622e680, public_622e680);
extern "C" NAKED register_t __cdecl internal_622e680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, 0xF9FEBF0D
        jne public_622e6a2
        mov eax, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ss : [esp+0xC]
        shr eax, 6
        and al, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 0xC
        public_622e6a2 : nop
        cmp eax, 0xE2F60EEB
        jne public_622e6bd
        mov edx, dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+0xC]
        shr edx, 3
        and dl, 1
        mov byte ptr ds : [eax], dl
        xor eax, eax
        ret 0xC
        public_622e6bd : nop
        cmp eax, 0xF3D52EE4
        jne public_622e6d8
        mov ecx, dword ptr ds : [ecx+0x60]
        mov edx, dword ptr ss : [esp+0xC]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622e6d8 : nop
        cmp eax, 0xE8DC7F5E
        jne public_622e6f2
        mov eax, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ss : [esp+0xC]
        shr eax, 0xD
        and al, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 0xC
        public_622e6f2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622e680)
    }
}

#undef public_622e6a2
#undef public_622e6bd
#undef public_622e6d8
#undef public_622e6f2
