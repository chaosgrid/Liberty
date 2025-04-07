#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235320);

#define public_6235342 _public_6235342
#define public_623535d _public_623535d
#define public_6235378 _public_6235378
#define public_6235392 _public_6235392

PROC_DECLARE(0x6235320, internal_6235320, public_6235320);
extern "C" NAKED register_t __cdecl internal_6235320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, 0xF9FEBF0D
        jne public_6235342
        mov eax, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ss : [esp+0xC]
        shr eax, 4
        and al, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 0xC
        public_6235342 : nop
        cmp eax, 0xE2F60EEB
        jne public_623535d
        mov edx, dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+0xC]
        shr edx, 3
        and dl, 1
        mov byte ptr ds : [eax], dl
        xor eax, eax
        ret 0xC
        public_623535d : nop
        cmp eax, 0xF3D52EE4
        jne public_6235378
        mov ecx, dword ptr ds : [ecx+0x60]
        mov edx, dword ptr ss : [esp+0xC]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6235378 : nop
        cmp eax, 0xE8DC7F5E
        jne public_6235392
        mov eax, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ss : [esp+0xC]
        shr eax, 0xD
        and al, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 0xC
        public_6235392 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6235320)
    }
}

#undef public_6235342
#undef public_623535d
#undef public_6235378
#undef public_6235392
