#include "Common-PCH.h"


#define public_62df4f0 _public_62df4f0
#define public_62df511 _public_62df511
#define public_62df522 _public_62df522
#define public_62df52a _public_62df52a

PROC_DECLARE(0x62df4c0, internal_62df4c0, public_62df4c0);
extern "C" NAKED register_t __cdecl internal_62df4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca18]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        jle public_62df522
        mov eax, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_639902c]
        imul eax, 0x72C
        lea ebx, ds:[eax+8]
        mov eax, dword ptr ds : [public_63fca1c]
        xor esi, esi
        lea esp, ss:[esp]
        public_62df4f0 : nop
        lea ecx, ds:[ebx+eax]
        push ecx
        lea edx, ds:[esi+eax+8]
        push edx
        call ebp
        add esp, 8
        test eax, eax
        mov eax, dword ptr ds : [public_63fca1c]
        jne public_62df511
        mov ecx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [esi+eax+4], ecx
        je public_62df52a
        public_62df511 : nop
        mov ecx, dword ptr ds : [public_63fca18]
        inc edi
        add esi, 0x72C
        cmp edi, ecx
        jl public_62df4f0
        public_62df522 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_62df52a : nop
        imul edi, 0x72C
        mov eax, dword ptr ds : [edi+eax]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62df4c0)
    }
}

#undef public_62df4f0
#undef public_62df511
#undef public_62df522
#undef public_62df52a
