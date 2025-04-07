#include "THORN-PCH.h"


#define public_6f3a3a6 _public_6f3a3a6
#define public_6f3a3c3 _public_6f3a3c3
#define public_6f3a3d0 _public_6f3a3d0
#define public_6f3a3e4 _public_6f3a3e4

PROC_DECLARE(0x6f3a380, internal_6f3a380, public_6f3a380);
extern "C" NAKED register_t __cdecl internal_6f3a380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6f3a3a6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6f3a3a6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x1C], 0
        public_6f3a3a6 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_6f3a3d0
        test eax, eax
        je public_6f3a3c3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x1C], 0
        public_6f3a3c3 : nop
        test edi, edi
        mov dword ptr ds : [esi+0x1C], edi
        je public_6f3a3d0
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6f3a3d0 : nop
        mov esi, dword ptr ds : [esi+0x1C]
        test esi, esi
        pop edi
        je public_6f3a3e4
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        xor eax, eax
        pop esi
        ret 8
        public_6f3a3e4 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f3a380)
    }
}

#undef public_6f3a3a6
#undef public_6f3a3c3
#undef public_6f3a3d0
#undef public_6f3a3e4
