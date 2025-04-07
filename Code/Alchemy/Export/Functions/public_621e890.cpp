#include "Alchemy-PCH.h"


#define public_621e8a4 _public_621e8a4
#define public_621e8b0 _public_621e8b0
#define public_621e8b4 _public_621e8b4
#define public_621e8bc _public_621e8bc
#define public_621e8cb _public_621e8cb
#define public_621e8f3 _public_621e8f3
#define public_621e904 _public_621e904
#define public_621e912 _public_621e912
#define public_621e91e _public_621e91e
#define public_621e932 _public_621e932
#define public_621e936 _public_621e936
#define public_621e93b _public_621e93b

PROC_DECLARE(0x621e890, internal_621e890, public_621e890);
extern "C" NAKED register_t __cdecl internal_621e890()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ecx
        je public_621e8b4
        public_621e8a4 : nop
        cmp dword ptr ds : [eax+4], ebx
        je public_621e8b0
        add eax, 0x10
        cmp eax, ecx
        jne public_621e8a4
        public_621e8b0 : nop
        cmp eax, ecx
        jne public_621e8bc
        public_621e8b4 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_621e8bc : nop
        mov edx, dword ptr ds : [edi+0x1C]
        add eax, 0x10
        push ebp
        cmp eax, edx
        push esi
        je public_621e8f3
        lea ecx, ds:[eax-0x10]
        public_621e8cb : nop
        mov esi, eax
        mov ebx, ecx
        add eax, 0x10
        add ecx, 0x10
        mov ebp, dword ptr ds : [esi]
        cmp eax, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        jne public_621e8cb
        mov ebx, dword ptr ss : [esp+0x18]
        public_621e8f3 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [edi+0x1C], ecx
        mov esi, dword ptr ds : [edi+0x28]
        cmp esi, dword ptr ds : [edi+0x2C]
        je public_621e93b
        public_621e904 : nop
        cmp dword ptr ds : [esi], ebx
        je public_621e912
        cmp dword ptr ds : [esi+4], ebx
        je public_621e912
        add esi, 8
        jmp public_621e936
        public_621e912 : nop
        mov edx, dword ptr ds : [edi+0x2C]
        lea eax, ds:[esi+8]
        cmp eax, edx
        je public_621e932
        mov ecx, esi
        public_621e91e : nop
        mov ebp, dword ptr ds : [eax]
        add eax, 8
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax-4]
        mov dword ptr ds : [ecx+4], ebp
        add ecx, 8
        cmp eax, edx
        jne public_621e91e
        public_621e932 : nop
        add dword ptr ds : [edi+0x2C], 0xFFFFFFF8
        public_621e936 : nop
        cmp esi, dword ptr ds : [edi+0x2C]
        jne public_621e904
        public_621e93b : nop
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x621e890)
    }
}

#undef public_621e8a4
#undef public_621e8b0
#undef public_621e8b4
#undef public_621e8bc
#undef public_621e8cb
#undef public_621e8f3
#undef public_621e904
#undef public_621e912
#undef public_621e91e
#undef public_621e932
#undef public_621e936
#undef public_621e93b
