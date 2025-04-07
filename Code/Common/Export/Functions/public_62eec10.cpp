#include "Common-PCH.h"


#define public_62eec27 _public_62eec27
#define public_62eec33 _public_62eec33
#define public_62eec3f _public_62eec3f
#define public_62eec44 _public_62eec44

PROC_DECLARE(0x62eec10, internal_62eec10, public_62eec10);
extern "C" NAKED register_t __cdecl internal_62eec10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x18]
        push esi
        xor eax, eax
        cmp edx, 8
        push edi
        jge public_62eec3f
        test edx, edx
        mov edi, dword ptr ss : [esp+0xC]
        jle public_62eec33
        lea esi, ds:[ecx+0x1C]
        public_62eec27 : nop
        cmp dword ptr ds : [esi], edi
        je public_62eec44
        inc eax
        add esi, 4
        cmp eax, edx
        jl public_62eec27
        public_62eec33 : nop
        mov dword ptr ds : [ecx+edx*4+0x1C], edi
        inc dword ptr ds : [ecx+0x18]
        mov eax, 1
        public_62eec3f : nop
        pop edi
        pop esi
        ret 4
        public_62eec44 : nop
        pop edi
        pop esi
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62eec10)
    }
}

#undef public_62eec27
#undef public_62eec33
#undef public_62eec3f
#undef public_62eec44
