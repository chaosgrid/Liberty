#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d3d9ce _public_6d3d9ce
#define public_6d3d9d6 _public_6d3d9d6
#define public_6d3d9f9 _public_6d3d9f9
#define public_6d3da0b _public_6d3da0b
#define public_6d3da1d _public_6d3da1d
#define public_6d3da38 _public_6d3da38
#define public_6d3da58 _public_6d3da58
#define public_6d3da60 _public_6d3da60
#define public_6d3da6a _public_6d3da6a
#define public_6d3da8b _public_6d3da8b
#define public_6d3da9c _public_6d3da9c

PROC_DECLARE(0x6d3d9c0, internal_6d3d9c0, public_6d3d9c0);
extern "C" NAKED register_t __cdecl internal_6d3d9c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d3d9ce
        xor eax, eax
        jmp public_6d3d9d6
        public_6d3d9ce : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6d3d9d6 : nop
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        jae public_6d3da9c
        push ebx
        push ebp
        lea ebp, ds:[ecx*4]
        mov ebx, ebp
        test ebx, ebx
        push edi
        mov edi, dword ptr ds : [esi]
        jne public_6d3d9f9
        mov ebx, 1
        public_6d3d9f9 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d3da0b
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+4]
        add eax, ebx
        cmp eax, ecx
        jbe public_6d3da38
        public_6d3da0b : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        lea eax, ds:[edi+4]
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6d3da1d
        lea eax, ss:[esp+0x14]
        public_6d3da1d : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_6d3da38 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        add ebx, 3
        and ebx, 0xFFFFFFFC
        add ebx, ecx
        lea edi, ds:[ecx+eax+8]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        mov ecx, edi
        je public_6d3da6a
        public_6d3da58 : nop
        test ecx, ecx
        je public_6d3da60
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6d3da60 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6d3da58
        public_6d3da6a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        add ebp, edi
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], ebp
        jne public_6d3da8b
        xor eax, eax
        lea edx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        ret 4
        public_6d3da8b : nop
        sub eax, ecx
        sar eax, 2
        lea edx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop ebp
        mov dword ptr ds : [esi+8], edx
        pop ebx
        public_6d3da9c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3d9c0)
    }
}

#undef public_6d3d9ce
#undef public_6d3d9d6
#undef public_6d3d9f9
#undef public_6d3da0b
#undef public_6d3da1d
#undef public_6d3da38
#undef public_6d3da58
#undef public_6d3da60
#undef public_6d3da6a
#undef public_6d3da8b
#undef public_6d3da9c
