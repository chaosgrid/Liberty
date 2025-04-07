#include "RendComp-PCH.h"


#define public_6c2c3a4 _public_6c2c3a4
#define public_6c2c3af _public_6c2c3af
#define public_6c2c3b6 _public_6c2c3b6
#define public_6c2c3cb _public_6c2c3cb
#define public_6c2c3d5 _public_6c2c3d5

PROC_DECLARE(0x6c2c390, internal_6c2c390, public_6c2c390);
extern "C" NAKED register_t __cdecl internal_6c2c390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        push esi
        je public_6c2c3af
        mov esi, dword ptr ss : [esp+0xC]
        public_6c2c3a4 : nop
        cmp edx, esi
        je public_6c2c3b6
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6c2c3a4
        public_6c2c3af : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6c2c3b6 : nop
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [eax], ecx
        je public_6c2c3cb
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+4]
        public_6c2c3cb : nop
        test esi, esi
        je public_6c2c3d5
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_6c2c3d5 : nop
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c2c390)
    }
}

#undef public_6c2c3a4
#undef public_6c2c3af
#undef public_6c2c3b6
#undef public_6c2c3cb
#undef public_6c2c3d5
