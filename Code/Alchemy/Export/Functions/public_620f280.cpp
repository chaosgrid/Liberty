#include "Alchemy-PCH.h"


#define public_620f2a3 _public_620f2a3
#define public_620f2c2 _public_620f2c2
#define public_620f2e1 _public_620f2e1

PROC_DECLARE(0x620f280, internal_620f280, public_620f280);
extern "C" NAKED register_t __cdecl internal_620f280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xE2F60EEB
        jne public_620f2a3
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 3
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_620f2a3 : nop
        cmp eax, 0xF3D52EE4
        jne public_620f2c2
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_620f2c2 : nop
        cmp eax, 0xE8DC7F5E
        jne public_620f2e1
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xD
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_620f2e1 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620f280)
    }
}

#undef public_620f2a3
#undef public_620f2c2
#undef public_620f2e1
