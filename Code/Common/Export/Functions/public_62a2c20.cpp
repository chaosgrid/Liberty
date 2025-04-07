#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a2c48 _public_62a2c48
#define public_62a2c50 _public_62a2c50
#define public_62a2c5b _public_62a2c5b
#define public_62a2c63 _public_62a2c63
#define public_62a2c70 _public_62a2c70
#define public_62a2c7e _public_62a2c7e
#define public_62a2c95 _public_62a2c95
#define public_62a2cab _public_62a2cab
#define public_62a2cb3 _public_62a2cb3
#define public_62a2cbb _public_62a2cbb
#define public_62a2cc3 _public_62a2cc3
#define public_62a2ccb _public_62a2ccb
#define public_62a2cd7 _public_62a2cd7
#define public_62a2cdf _public_62a2cdf
#define public_62a2ce6 _public_62a2ce6
#define public_62a2cf4 _public_62a2cf4
#define public_62a2d03 _public_62a2d03
#define public_62a2d17 _public_62a2d17
#define public_62a2d22 _public_62a2d22
#define public_62a2d2a _public_62a2d2a
#define public_62a2d40 _public_62a2d40
#define public_62a2d54 _public_62a2d54
#define public_62a2d5c _public_62a2d5c
#define public_62a2d62 _public_62a2d62
#define public_62a2d87 _public_62a2d87

PROC_DECLARE(0x62a2c20, internal_62a2c20, public_62a2c20);
extern "C" NAKED register_t __cdecl internal_62a2c20()
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
        je public_62a2d87
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62a2c48
        xor ebp, ebp
        jmp public_62a2c50
        public_62a2c48 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_62a2c50 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_62a2c5b
        xor ecx, ecx
        jmp public_62a2c63
        public_62a2c5b : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_62a2c63 : nop
        cmp ebp, ecx
        ja public_62a2cab
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_62a2c7e
        mov edi, edi
        public_62a2c70 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62a2c70
        public_62a2c7e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62a2c95
        mov ecx, dword ptr ds : [ebx+8]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [ebx+0xC], edx
        jmp public_62a2d87
        public_62a2c95 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [ebx+0xC], edx
        jmp public_62a2d87
        public_62a2cab : nop
        test eax, eax
        jne public_62a2cb3
        xor ebp, ebp
        jmp public_62a2cbb
        public_62a2cb3 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_62a2cbb : nop
        test edx, edx
        jne public_62a2cc3
        xor ecx, ecx
        jmp public_62a2ccb
        public_62a2cc3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_62a2ccb : nop
        cmp ebp, ecx
        ja public_62a2d40
        test edx, edx
        jne public_62a2cd7
        xor ecx, ecx
        jmp public_62a2cdf
        public_62a2cd7 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_62a2cdf : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_62a2cf4
        public_62a2ce6 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62a2ce6
        public_62a2cf4 : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        lea eax, ds:[ebx+4]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, ecx
        je public_62a2d17
        public_62a2d03 : nop
        push esi
        push ebx
        call public_630cd00
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_62a2d03
        public_62a2d17 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62a2d22
        xor edi, edi
        jmp public_62a2d2a
        public_62a2d22 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 2
        public_62a2d2a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ss : [esp+0x10]
        add eax, 4
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [eax+8], edx
        jmp public_62a2d87
        public_62a2d40 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_62a2d54
        xor eax, eax
        jmp public_62a2d5c
        public_62a2d54 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_62a2d5c : nop
        test eax, eax
        jge public_62a2d62
        xor eax, eax
        public_62a2d62 : nop
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
        public_62a2d87 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        pop edi
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ds : [eax+0x18]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a2c20)
    }
}

#undef public_62a2c48
#undef public_62a2c50
#undef public_62a2c5b
#undef public_62a2c63
#undef public_62a2c70
#undef public_62a2c7e
#undef public_62a2c95
#undef public_62a2cab
#undef public_62a2cb3
#undef public_62a2cbb
#undef public_62a2cc3
#undef public_62a2ccb
#undef public_62a2cd7
#undef public_62a2cdf
#undef public_62a2ce6
#undef public_62a2cf4
#undef public_62a2d03
#undef public_62a2d17
#undef public_62a2d22
#undef public_62a2d2a
#undef public_62a2d40
#undef public_62a2d54
#undef public_62a2d5c
#undef public_62a2d62
#undef public_62a2d87
