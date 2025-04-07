#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4cd5);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8162);

#define public_6ef4cf3 _public_6ef4cf3
#define public_6ef4cfd _public_6ef4cfd
#define public_6ef4d12 _public_6ef4d12
#define public_6ef4d17 _public_6ef4d17
#define public_6ef4d23 _public_6ef4d23
#define public_6ef4d2c _public_6ef4d2c
#define public_6ef4d40 _public_6ef4d40
#define public_6ef4d45 _public_6ef4d45

PROC_DECLARE(0x6ef4cd5, internal_6ef4cd5, public_6ef4cd5);
extern "C" NAKED register_t __cdecl internal_6ef4cd5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        cmp dword ptr ss : [ebp+0xC], 0
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [edi+0x10]
        mov eax, esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp-4], eax
        jl public_6ef4d2c
        public_6ef4cf3 : nop
        cmp esi, 0xFFFFFFFF
        jne public_6ef4cfd
        call public_6ef8162
        public_6ef4cfd : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        dec esi
        lea eax, ds:[esi+esi*4]
        cmp dword ptr ds : [ebx+eax*4+4], ecx
        lea eax, ds:[ebx+eax*4]
        jge public_6ef4d12
        cmp ecx, dword ptr ds : [eax+8]
        jle public_6ef4d17
        public_6ef4d12 : nop
        cmp esi, 0xFFFFFFFF
        jne public_6ef4d23
        public_6ef4d17 : nop
        mov eax, dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+8], esi
        public_6ef4d23 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jge public_6ef4cf3
        mov eax, dword ptr ss : [ebp-4]
        public_6ef4d2c : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        inc esi
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], eax
        cmp eax, dword ptr ds : [edi+0xC]
        ja public_6ef4d40
        cmp esi, eax
        jbe public_6ef4d45
        public_6ef4d40 : nop
        call public_6ef8162
        public_6ef4d45 : nop
        lea eax, ds:[esi+esi*4]
        pop edi
        pop esi
        lea eax, ds:[ebx+eax*4]
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef4cd5)
    }
}

#undef public_6ef4cf3
#undef public_6ef4cfd
#undef public_6ef4d12
#undef public_6ef4d17
#undef public_6ef4d23
#undef public_6ef4d2c
#undef public_6ef4d40
#undef public_6ef4d45
