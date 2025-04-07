#include "Alchemy-PCH.h"


#define public_62326c3 _public_62326c3
#define public_62326e2 _public_62326e2
#define public_6232701 _public_6232701
#define public_6232720 _public_6232720

PROC_DECLARE(0x62326a0, internal_62326a0, public_62326a0);
extern "C" NAKED register_t __cdecl internal_62326a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF9FEBF0D
        jne public_62326c3
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 4
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_62326c3 : nop
        cmp eax, 0xE2F60EEB
        jne public_62326e2
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 3
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_62326e2 : nop
        cmp eax, 0xF3D52EE4
        jne public_6232701
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6232701 : nop
        cmp eax, 0xE8DC7F5E
        jne public_6232720
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xD
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6232720 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62326a0)
    }
}

#undef public_62326c3
#undef public_62326e2
#undef public_6232701
#undef public_6232720
