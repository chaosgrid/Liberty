#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231930);

#define public_6231952 _public_6231952
#define public_623196f _public_623196f

PROC_DECLARE(0x6231930, internal_6231930, public_6231930);
extern "C" NAKED register_t __cdecl internal_6231930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, 0xE34C3C55
        jne public_6231952
        mov al, byte ptr ds : [ecx+0xA0]
        mov ecx, dword ptr ss : [esp+0xC]
        and al, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 0xC
        public_6231952 : nop
        cmp eax, 0x49A6DBE
        jne public_623196f
        mov edx, dword ptr ds : [ecx+0xA0]
        mov eax, dword ptr ss : [esp+0xC]
        shr edx, 1
        and dl, 1
        mov byte ptr ds : [eax], dl
        xor eax, eax
        ret 0xC
        public_623196f : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6231930)
    }
}

#undef public_6231952
#undef public_623196f
