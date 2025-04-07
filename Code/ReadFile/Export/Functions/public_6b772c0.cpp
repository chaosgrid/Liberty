#include "ReadFile-PCH.h"


#define public_6b772dc _public_6b772dc
#define public_6b772e9 _public_6b772e9
#define public_6b772fb _public_6b772fb
#define public_6b7732a _public_6b7732a

PROC_DECLARE(0x6b772c0, internal_6b772c0, public_6b772c0);
extern "C" NAKED register_t __cdecl internal_6b772c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        test ecx, ecx
        jne public_6b7732a
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6b772dc
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x10], ecx
        public_6b772dc : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [eax+0x10]
        cmp edx, ecx
        jbe public_6b772e9
        mov dword ptr ds : [eax+0x10], ecx
        public_6b772e9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        sub ecx, edi
        cmp edx, ecx
        jbe public_6b772fb
        mov edx, ecx
        public_6b772fb : nop
        mov esi, dword ptr ds : [eax+8]
        mov ecx, edx
        mov ebx, ecx
        add esi, edi
        mov edi, dword ptr ss : [esp+0x18]
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax+0x10]
        add ecx, edx
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, 1
        public_6b7732a : nop
        ret 0x18
        UNREACHABLE_TRAP(0x6b772c0)
    }
}

#undef public_6b772dc
#undef public_6b772e9
#undef public_6b772fb
#undef public_6b7732a
