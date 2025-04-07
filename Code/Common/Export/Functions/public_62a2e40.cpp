#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a2e68 _public_62a2e68
#define public_62a2e70 _public_62a2e70
#define public_62a2e7b _public_62a2e7b
#define public_62a2e83 _public_62a2e83
#define public_62a2e90 _public_62a2e90
#define public_62a2e9e _public_62a2e9e
#define public_62a2ec4 _public_62a2ec4
#define public_62a2ee9 _public_62a2ee9
#define public_62a2ef1 _public_62a2ef1
#define public_62a2ef9 _public_62a2ef9
#define public_62a2f01 _public_62a2f01
#define public_62a2f09 _public_62a2f09
#define public_62a2f19 _public_62a2f19
#define public_62a2f21 _public_62a2f21
#define public_62a2f28 _public_62a2f28
#define public_62a2f36 _public_62a2f36
#define public_62a2f45 _public_62a2f45
#define public_62a2f59 _public_62a2f59
#define public_62a2f64 _public_62a2f64
#define public_62a2f6c _public_62a2f6c
#define public_62a2f94 _public_62a2f94
#define public_62a2fa8 _public_62a2fa8
#define public_62a2fb0 _public_62a2fb0
#define public_62a2fb6 _public_62a2fb6
#define public_62a2fdb _public_62a2fdb

PROC_DECLARE(0x62a2e40, internal_62a2e40, public_62a2e40);
extern "C" NAKED register_t __cdecl internal_62a2e40()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea edi, ds:[eax+4]
        lea esi, ds:[ebx+4]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_62a2fdb
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62a2e68
        xor ebp, ebp
        jmp public_62a2e70
        public_62a2e68 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_62a2e70 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_62a2e7b
        xor ecx, ecx
        jmp public_62a2e83
        public_62a2e7b : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_62a2e83 : nop
        cmp ebp, ecx
        ja public_62a2ee9
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_62a2e9e
        mov edi, edi
        public_62a2e90 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62a2e90
        public_62a2e9e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62a2ec4
        mov ecx, dword ptr ds : [ebx+8]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ebx+0xC], edx
        mov edx, dword ptr ds : [ecx+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_62a2ec4 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ebx+0xC], edx
        mov edx, dword ptr ds : [ecx+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_62a2ee9 : nop
        test eax, eax
        jne public_62a2ef1
        xor ebp, ebp
        jmp public_62a2ef9
        public_62a2ef1 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_62a2ef9 : nop
        test edx, edx
        jne public_62a2f01
        xor ecx, ecx
        jmp public_62a2f09
        public_62a2f01 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_62a2f09 : nop
        cmp ebp, ecx
        ja public_62a2f94
        test edx, edx
        jne public_62a2f19
        xor ecx, ecx
        jmp public_62a2f21
        public_62a2f19 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_62a2f21 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_62a2f36
        public_62a2f28 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62a2f28
        public_62a2f36 : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        lea eax, ds:[ebx+4]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, ecx
        je public_62a2f59
        public_62a2f45 : nop
        push esi
        push ebx
        call public_630cd00
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_62a2f45
        public_62a2f59 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62a2f64
        xor edi, edi
        jmp public_62a2f6c
        public_62a2f64 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 2
        public_62a2f6c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ss : [esp+0x10]
        add eax, 4
        lea edx, ds:[ecx+edi*4]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_62a2f94 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_62a2fa8
        xor eax, eax
        jmp public_62a2fb0
        public_62a2fa8 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_62a2fb0 : nop
        test eax, eax
        jge public_62a2fb6
        xor eax, eax
        public_62a2fb6 : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_62a2fdb : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a2e40)
    }
}

#undef public_62a2e68
#undef public_62a2e70
#undef public_62a2e7b
#undef public_62a2e83
#undef public_62a2e90
#undef public_62a2e9e
#undef public_62a2ec4
#undef public_62a2ee9
#undef public_62a2ef1
#undef public_62a2ef9
#undef public_62a2f01
#undef public_62a2f09
#undef public_62a2f19
#undef public_62a2f21
#undef public_62a2f28
#undef public_62a2f36
#undef public_62a2f45
#undef public_62a2f59
#undef public_62a2f64
#undef public_62a2f6c
#undef public_62a2f94
#undef public_62a2fa8
#undef public_62a2fb0
#undef public_62a2fb6
#undef public_62a2fdb
