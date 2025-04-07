#include "Common-PCH.h"


#define public_6334741 _public_6334741
#define public_6334756 _public_6334756
#define public_6334764 _public_6334764

PROC_DECLARE(0x6334720, internal_6334720, public_6334720);
extern "C" NAKED register_t __cdecl internal_6334720()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        or eax, 0xFFFFFFFF
        xor esi, esi
        test ecx, ecx
        mov dword ptr ss : [esp+8], eax
        jle public_6334764
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [public_63991e4]
        public_6334741 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        push ebx
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6334756
        mov dword ptr ss : [esp+0x10], esi
        public_6334756 : nop
        mov eax, dword ptr ds : [edi+4]
        inc esi
        cmp esi, eax
        jl public_6334741
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        public_6334764 : nop
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6334720)
    }
}

#undef public_6334741
#undef public_6334756
#undef public_6334764
