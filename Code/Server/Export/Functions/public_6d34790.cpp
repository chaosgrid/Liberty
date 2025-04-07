#include "Server-PCH.h"


#define public_6d347cb _public_6d347cb
#define public_6d347d0 _public_6d347d0
#define public_6d347d2 _public_6d347d2
#define public_6d347fb _public_6d347fb
#define public_6d3480e _public_6d3480e

PROC_DECLARE(0x6d34790, internal_6d34790, public_6d34790);
extern "C" NAKED register_t __cdecl internal_6d34790()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [esi+0x10]
        je public_6d347d0
        test ecx, ecx
        je public_6d347d0
        cmp eax, 0xFFFFFFFF
        je public_6d347cb
        cmp ecx, 0xFFFFFFFF
        je public_6d347cb
        imul eax, ecx
        mov edx, eax
        jmp public_6d347d2
        public_6d347cb : nop
        or edx, 0xFFFFFFFF
        jmp public_6d347d2
        public_6d347d0 : nop
        xor edx, edx
        public_6d347d2 : nop
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d3480e
        test esi, esi
        je public_6d3480e
        cmp ecx, 0xFFFFFFFF
        je public_6d347fb
        cmp esi, 0xFFFFFFFF
        je public_6d347fb
        mov eax, dword ptr ss : [esp+0x10]
        imul ecx, esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        pop esi
        add esp, 8
        ret 8
        public_6d347fb : nop
        mov eax, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        pop esi
        add esp, 8
        ret 8
        public_6d3480e : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d34790)
    }
}

#undef public_6d347cb
#undef public_6d347d0
#undef public_6d347d2
#undef public_6d347fb
#undef public_6d3480e
