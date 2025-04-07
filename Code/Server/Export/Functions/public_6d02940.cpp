#include "Server-PCH.h"


#define public_6d02972 _public_6d02972
#define public_6d02974 _public_6d02974
#define public_6d029a6 _public_6d029a6
#define public_6d029a8 _public_6d029a8
#define public_6d029b9 _public_6d029b9

PROC_DECLARE(0x6d02940, internal_6d02940, public_6d02940);
extern "C" NAKED register_t __cdecl internal_6d02940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        add eax, 0x1C0
        mov edx, edi
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6d02972
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d02974
        public_6d02972 : nop
        xor eax, eax
        public_6d02974 : nop
        mov esi, dword ptr ds : [eax+0xB4]
        test esi, esi
        je public_6d029b9
        mov eax, dword ptr ds : [ecx-4]
        add ecx, 0xFFFFFFFC
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+0xB0]
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6d029a6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        jmp public_6d029a8
        public_6d029a6 : nop
        xor eax, eax
        public_6d029a8 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push esi
        call dword ptr ds : [edx+0x1E4]
        public_6d029b9 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d02940)
    }
}

#undef public_6d02972
#undef public_6d02974
#undef public_6d029a6
#undef public_6d029a8
#undef public_6d029b9
