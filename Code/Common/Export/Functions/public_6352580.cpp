#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352580);

#define public_635259e _public_635259e
#define public_63525ba _public_63525ba
#define public_63525ce _public_63525ce
#define public_63525d7 _public_63525d7

PROC_DECLARE(0x6352580, internal_6352580, public_6352580);
extern "C" NAKED register_t __cdecl internal_6352580()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, ebp
        and esi, edx
        lea ebx, ds:[eax+esi*8]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_63525ce
        public_635259e : nop
        mov ecx, dword ptr ds : [ebx]
        or ecx, 0x80000000
        cmp ecx, ebp
        jne public_63525ba
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        test eax, eax
        jne public_63525d7
        public_63525ba : nop
        mov edx, dword ptr ds : [edi+4]
        inc esi
        and esi, edx
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edx+esi*8+4]
        test eax, eax
        lea ebx, ds:[edx+esi*8]
        jne public_635259e
        public_63525ce : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_63525d7 : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6352580)
    }
}

#undef public_635259e
#undef public_63525ba
#undef public_63525ce
#undef public_63525d7
