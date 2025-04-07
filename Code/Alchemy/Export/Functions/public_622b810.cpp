#include "Alchemy-PCH.h"


#define public_622b833 _public_622b833
#define public_622b852 _public_622b852
#define public_622b871 _public_622b871
#define public_622b890 _public_622b890

PROC_DECLARE(0x622b810, internal_622b810, public_622b810);
extern "C" NAKED register_t __cdecl internal_622b810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF9FEBF0D
        jne public_622b833
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 6
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622b833 : nop
        cmp eax, 0xE2F60EEB
        jne public_622b852
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 3
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622b852 : nop
        cmp eax, 0xF3D52EE4
        jne public_622b871
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622b871 : nop
        cmp eax, 0xE8DC7F5E
        jne public_622b890
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xD
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622b890 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622b810)
    }
}

#undef public_622b833
#undef public_622b852
#undef public_622b871
#undef public_622b890
