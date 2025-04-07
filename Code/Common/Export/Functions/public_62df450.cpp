#include "Common-PCH.h"


#define public_62df470 _public_62df470
#define public_62df48e _public_62df48e
#define public_62df49f _public_62df49f
#define public_62df4a7 _public_62df4a7

PROC_DECLARE(0x62df450, internal_62df450, public_62df450);
extern "C" NAKED register_t __cdecl internal_62df450()
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
        jle public_62df49f
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_639902c]
        mov eax, dword ptr ds : [public_63fca1c]
        xor esi, esi
        public_62df470 : nop
        lea eax, ds:[esi+eax+8]
        push ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        mov eax, dword ptr ds : [public_63fca1c]
        jne public_62df48e
        mov ecx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [esi+eax+4], ecx
        je public_62df4a7
        public_62df48e : nop
        mov ecx, dword ptr ds : [public_63fca18]
        inc edi
        add esi, 0x72C
        cmp edi, ecx
        jl public_62df470
        public_62df49f : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_62df4a7 : nop
        imul edi, 0x72C
        mov eax, dword ptr ds : [edi+eax]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62df450)
    }
}

#undef public_62df470
#undef public_62df48e
#undef public_62df49f
#undef public_62df4a7
