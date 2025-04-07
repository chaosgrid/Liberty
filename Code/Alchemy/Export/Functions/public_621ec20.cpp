#include "Alchemy-PCH.h"


#define public_621ec31 _public_621ec31
#define public_621ec5a _public_621ec5a
#define public_621ec5d _public_621ec5d
#define public_621ec67 _public_621ec67
#define public_621ec70 _public_621ec70

PROC_DECLARE(0x621ec20, internal_621ec20, public_621ec20);
extern "C" NAKED register_t __cdecl internal_621ec20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edx+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        public_621ec31 : nop
        test esi, esi
        je public_621ec70
        mov eax, dword ptr ds : [edx+0x2C]
        sub eax, esi
        sar eax, 3
        cmp ecx, eax
        jae public_621ec70
        mov eax, dword ptr ds : [edx+0x28]
        mov ebx, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [eax+ecx*8]
        lea eax, ds:[eax+ecx*8]
        cmp ebx, ebp
        jne public_621ec5a
        mov ebx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [eax+4]
        cmp ebx, ebp
        je public_621ec5d
        public_621ec5a : nop
        inc ecx
        jmp public_621ec31
        public_621ec5d : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_621ec67
        mov dword ptr ds : [eax], ecx
        public_621ec67 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_621ec70 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621ec20)
    }
}

#undef public_621ec31
#undef public_621ec5a
#undef public_621ec5d
#undef public_621ec67
#undef public_621ec70
