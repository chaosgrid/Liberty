#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a15a0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62a15c9 _public_62a15c9
#define public_62a15df _public_62a15df
#define public_62a15e7 _public_62a15e7

PROC_DECLARE(0x62a15a0, internal_62a15a0, public_62a15a0);
extern "C" NAKED register_t __cdecl internal_62a15a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp byte ptr ds : [esi], 0
        push edi
        mov ebx, ecx
        je public_62a15c9
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        je public_62a15df
        mov byte ptr ds : [esi], 0
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        pop ebx
        ret 4
        public_62a15c9 : nop
        lea edi, ds:[esi+4]
        mov ecx, edi
        call public_63429f0
        mov ebx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_62a15e7
        mov byte ptr ds : [esi], 1
        public_62a15df : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_62a15e7 : nop
        mov eax, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a15a0)
    }
}

#undef public_62a15c9
#undef public_62a15df
#undef public_62a15e7
