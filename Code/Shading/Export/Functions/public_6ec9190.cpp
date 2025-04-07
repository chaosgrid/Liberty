#include "Shading-PCH.h"


#define public_6ec91a1 _public_6ec91a1
#define public_6ec91d3 _public_6ec91d3
#define public_6ec91d7 _public_6ec91d7
#define public_6ec91f1 _public_6ec91f1
#define public_6ec9205 _public_6ec9205
#define public_6ec922d _public_6ec922d
#define public_6ec9243 _public_6ec9243

PROC_DECLARE(0x6ec9190, internal_6ec9190, public_6ec9190);
extern "C" NAKED register_t __cdecl internal_6ec9190()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, 2
        jb public_6ec91a1
        or eax, 0xFFFFFFFF
        pop ecx
        ret 0xC
        public_6ec91a1 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+ecx*4+0x68]
        mov dword ptr ds : [eax], edx
        lea eax, ds:[esi+0x60]
        push edi
        or edx, 0xFFFFFFFF
        mov edi, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [edi], edx
        xor ebp, ebp
        lea eax, ds:[esi+0x68]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6ec91d7
        public_6ec91d3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6ec91d7 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx]
        cmp dword ptr ds : [eax], 0
        jl public_6ec9243
        xor ebx, ebx
        test ebp, ebp
        jbe public_6ec922d
        mov ecx, dword ptr ds : [esi+ecx*4+0x68]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ds:[esi+0x60]
        public_6ec91f1 : nop
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [esi+eax*4+0x68]
        cmp edx, dword ptr ds : [edi]
        jl public_6ec9205
        inc ebx
        add ecx, 4
        cmp ebx, ebp
        jb public_6ec91f1
        jmp public_6ec922d
        public_6ec9205 : nop
        lea edx, ds:[eax*4]
        mov ecx, 4
        sub ecx, edx
        push ecx
        lea edx, ds:[esi+eax*4+0x64]
        lea edi, ds:[esi+eax*4+0x60]
        push edx
        push edi
        call dword ptr ds : [public_6ed105c]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ds : [edi], eax
        public_6ec922d : nop
        cmp ebx, ebp
        jne public_6ec9243
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        inc ebp
        add eax, 4
        mov dword ptr ss : [esp+0x10], eax
        public_6ec9243 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        inc eax
        add edx, 4
        cmp eax, 2
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], edx
        jb public_6ec91d3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec9190)
    }
}

#undef public_6ec91a1
#undef public_6ec91d3
#undef public_6ec91d7
#undef public_6ec91f1
#undef public_6ec9205
#undef public_6ec922d
#undef public_6ec9243
