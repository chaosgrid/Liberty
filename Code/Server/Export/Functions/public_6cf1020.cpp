#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cf1087 _public_6cf1087
#define public_6cf10b3 _public_6cf10b3
#define public_6cf1140 _public_6cf1140
#define public_6cf115a _public_6cf115a
#define public_6cf1161 _public_6cf1161
#define public_6cf1168 _public_6cf1168
#define public_6cf1171 _public_6cf1171
#define public_6cf1194 _public_6cf1194
#define public_6cf11b6 _public_6cf11b6

PROC_DECLARE(0x6cf1020, internal_6cf1020, public_6cf1020);
extern "C" NAKED register_t __cdecl internal_6cf1020()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        jbe public_6cf11b6
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6cf11b6
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf11b6
        mov eax, esi
        imul eax, 0x418
        mov ecx, dword ptr ds : [eax+ecx-0x14]
        test ecx, ecx
        mov dword ptr ss : [esp+4], ecx
        je public_6cf1194
        push ebx
        push ebp
        push edi
        call public_6d5bb80
        mov ebp, eax
        test ebp, ebp
        mov esi, ebp
        jle public_6cf1087
        lea esi, ss:[ebp-1]
        public_6cf1087 : nop
        lea ecx, ds:[esi+esi*2]
        lea eax, ds:[ecx*8+4]
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d60012
        mov edi, eax
        add esp, 4
        xor ebx, ebx
        test ebp, ebp
        mov dword ptr ds : [edi], esi
        mov dword ptr ss : [esp+0x14], edi
        lea esi, ds:[edi+4]
        jle public_6cf1171
        public_6cf10b3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        call public_6d5c4c0
        cmp eax, dword ptr ss : [esp+0x2C]
        je public_6cf1168
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ecx, dword ptr ds : [eax+edx-0x38]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [public_6d90260]
        mov ecx, dword ptr ds : [eax+edx-0x100]
        mov dword ptr ds : [esi+0x14], ecx
        mov ecx, dword ptr ds : [public_6d90260]
        mov edi, dword ptr ds : [eax+ecx-0x34]
        test edi, edi
        je public_6cf115a
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        mov dword ptr ds : [esi+0xC], 0
        call public_6d00280
        add esp, 4
        push 0x7F0000
        push edi
        mov ecx, eax
        call public_6d0c8d0
        test eax, eax
        jne public_6cf1140
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_6cf1161
        public_6cf1140 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6cf1161
        public_6cf115a : nop
        mov ecx, dword ptr ds : [eax+ecx-0x2C]
        mov dword ptr ds : [esi+0xC], ecx
        public_6cf1161 : nop
        mov edi, dword ptr ss : [esp+0x14]
        add esi, 0x18
        public_6cf1168 : nop
        inc ebx
        cmp ebx, ebp
        jl public_6cf10b3
        public_6cf1171 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push edi
        push eax
        call dword ptr ds : [edx+0x180]
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x18
        ret 0xC
        public_6cf1194 : nop
        push 4
        call public_6d60012
        add esp, 4
        push 4
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+0x180]
        public_6cf11b6 : nop
        pop esi
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6cf1020)
    }
}

#undef public_6cf1087
#undef public_6cf10b3
#undef public_6cf1140
#undef public_6cf115a
#undef public_6cf1161
#undef public_6cf1168
#undef public_6cf1171
#undef public_6cf1194
#undef public_6cf11b6
