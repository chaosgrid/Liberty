#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cb40);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628dce5 _public_628dce5
#define public_628dcf3 _public_628dcf3
#define public_628dd25 _public_628dd25
#define public_628dd27 _public_628dd27
#define public_628dd2f _public_628dd2f
#define public_628dd34 _public_628dd34
#define public_628dd40 _public_628dd40
#define public_628dd60 _public_628dd60
#define public_628dd80 _public_628dd80
#define public_628dd92 _public_628dd92
#define public_628ddb6 _public_628ddb6
#define public_628ddc9 _public_628ddc9
#define public_628ddd0 _public_628ddd0
#define public_628dde3 _public_628dde3
#define public_628de28 _public_628de28
#define public_628de6b _public_628de6b
#define public_628de90 _public_628de90
#define public_628de9f _public_628de9f
#define public_628dea5 _public_628dea5
#define public_628deb6 _public_628deb6

PROC_DECLARE(0x628dcd0, internal_628dcd0, public_628dcd0);
extern "C" NAKED register_t __cdecl internal_628dcd0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, edx
        cmp ecx, edx
        push edi
        je public_628dcf3
        public_628dce5 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_628dce5
        public_628dcf3 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [esi+4]
        sub ebp, ebx
        sub ecx, eax
        sar ebp, 2
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ds : [esi+8], eax
        jae public_628de28
        test edi, edi
        je public_628dd25
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ebp, ecx
        jb public_628dd27
        public_628dd25 : nop
        mov ecx, ebp
        public_628dd27 : nop
        test edi, edi
        jne public_628dd2f
        xor eax, eax
        jmp public_628dd34
        public_628dd2f : nop
        sub eax, edi
        sar eax, 2
        public_628dd34 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_628dd40
        xor eax, eax
        public_628dd40 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        je public_628dd80
        nop 
        public_628dd60 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push eax
        call public_630cd00
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 4
        add ebx, 4
        add esp, 8
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], edx
        jne public_628dd60
        public_628dd80 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        je public_628ddb6
        public_628dd92 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push edx
        call public_630cd00
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x2C]
        add edx, 4
        add ebx, 4
        add esp, 8
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_628dd92
        public_628ddb6 : nop
        mov ebx, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_628dde3
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_628ddd0
        public_628ddc9 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ds:[ecx]
        public_628ddd0 : nop
        add eax, edi
        push edi
        push eax
        call public_630cd00
        add edi, 4
        add esp, 8
        cmp edi, ebx
        jne public_628ddc9
        public_628dde3 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_626a600
        add eax, ebp
        lea edx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_628de28 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, ebp
        jae public_628de6b
        shl ebp, 2
        lea edx, ds:[edi+ebp]
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        sub eax, edi
        sar eax, 2
        push ecx
        lea edx, ds:[ebx+eax*4]
        push edx
        mov ecx, esi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        sar eax, 2
        push edi
        lea ecx, ds:[ebx+eax*4]
        push ecx
        jmp public_628dea5
        public_628de6b : nop
        test ebp, ebp
        jbe public_628deb6
        push eax
        push eax
        shl ebp, 2
        sub eax, ebp
        push eax
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edi, eax
        je public_628de9f
        lea esp, ss:[esp]
        public_628de90 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_628de90
        public_628de9f : nop
        mov eax, dword ptr ss : [esp+0x24]
        push edi
        push eax
        public_628dea5 : nop
        push ebx
        call public_630cb40
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        add eax, ebp
        mov dword ptr ds : [esi+8], eax
        public_628deb6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x628dcd0)
    }
}

#undef public_628dce5
#undef public_628dcf3
#undef public_628dd25
#undef public_628dd27
#undef public_628dd2f
#undef public_628dd34
#undef public_628dd40
#undef public_628dd60
#undef public_628dd80
#undef public_628dd92
#undef public_628ddb6
#undef public_628ddc9
#undef public_628ddd0
#undef public_628dde3
#undef public_628de28
#undef public_628de6b
#undef public_628de90
#undef public_628de9f
#undef public_628dea5
#undef public_628deb6
