#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c50);

#define public_48af97 _public_48af97
#define public_48afa2 _public_48afa2
#define public_48afb9 _public_48afb9
#define public_48afd0 _public_48afd0
#define public_48afe7 _public_48afe7
#define public_48b017 _public_48b017
#define public_48b02e _public_48b02e
#define public_48b060 _public_48b060
#define public_48b077 _public_48b077
#define public_48b0a7 _public_48b0a7
#define public_48b0bb _public_48b0bb
#define public_48b0cb _public_48b0cb
#define public_48b0d2 _public_48b0d2
#define public_48b102 _public_48b102
#define public_48b10b _public_48b10b
#define public_48b110 _public_48b110
#define public_48b117 _public_48b117
#define public_48b129 _public_48b129

PROC_DECLARE(0x48af30, internal_48af30, public_48af30);
extern "C" NAKED register_t __cdecl internal_48af30()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x26
        push esi
        push edi
        mov esi, ecx
        jne public_48b0cb
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x340]
        jne public_48afb9
        mov eax, dword ptr ds : [public_671f74]
        push eax
        call dword ptr ds : [public_5c6360]
        add esp, 4
        test eax, eax
        je public_48af97
        push eax
        call public_4c45d0
        add esp, 4
        mov edi, eax
        call public_54baf0
        test edi, edi
        je public_48af97
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        jne public_48af97
        test eax, eax
        je public_48af97
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [public_673344]
        push eax
        mov eax, dword ptr ds : [edi+0x14]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [edi+2]
        push eax
        call dword ptr ds : [edx+0x38]
        public_48af97 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48b129
        public_48afa2 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48afa2
        jmp public_48b129
        public_48afb9 : nop
        cmp eax, dword ptr ds : [esi+0x348]
        jne public_48afe7
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48b129
        lea esp, ss:[esp]
        public_48afd0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48afd0
        jmp public_48b129
        public_48afe7 : nop
        cmp eax, dword ptr ds : [esi+0x350]
        jne public_48b02e
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 1
        push eax
        call dword ptr ds : [edx+0x128]
        mov byte ptr ds : [public_67dcc8], 0
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48b129
        public_48b017 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48b017
        jmp public_48b129
        public_48b02e : nop
        cmp eax, dword ptr ds : [esi+0x354]
        jne public_48b077
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 2
        push eax
        call dword ptr ds : [edx+0x128]
        mov byte ptr ds : [public_67dcc8], 0
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48b129
        mov edi, edi
        public_48b060 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48b060
        jmp public_48b129
        public_48b077 : nop
        cmp eax, dword ptr ds : [esi+0x358]
        jne public_48b0bb
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 4
        push eax
        call dword ptr ds : [edx+0x128]
        mov byte ptr ds : [public_67dcc8], 0
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48b129
        public_48b0a7 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48b0a7
        jmp public_48b129
        public_48b0bb : nop
        cmp eax, dword ptr ds : [esi+0x330]
        je public_48b0d2
        cmp eax, dword ptr ds : [esi+0x35C]
        je public_48b0d2
        public_48b0cb : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_48b0d2 : nop
        mov eax, dword ptr ds : [public_671ff8]
        cmp eax, 6
        mov byte ptr ds : [public_67dcc8], 0
        jne public_48b102
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 8
        push eax
        call dword ptr ds : [edx+0x128]
        mov byte ptr ds : [public_67dcc8], 0
        jmp public_48b110
        public_48b102 : nop
        test eax, eax
        je public_48b10b
        cmp eax, 5
        jne public_48b110
        public_48b10b : nop
        call public_5b2c50
        public_48b110 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48b129
        public_48b117 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48b117
        public_48b129 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        push 1
        call dword ptr ds : [eax]
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x48af30)
    }
}

#undef public_48af97
#undef public_48afa2
#undef public_48afb9
#undef public_48afd0
#undef public_48afe7
#undef public_48b017
#undef public_48b02e
#undef public_48b060
#undef public_48b077
#undef public_48b0a7
#undef public_48b0bb
#undef public_48b0cb
#undef public_48b0d2
#undef public_48b102
#undef public_48b10b
#undef public_48b110
#undef public_48b117
#undef public_48b129
