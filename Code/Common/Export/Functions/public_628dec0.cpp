#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628ded5 _public_628ded5
#define public_628dee3 _public_628dee3
#define public_628df0c _public_628df0c
#define public_628df0e _public_628df0e
#define public_628df16 _public_628df16
#define public_628df1b _public_628df1b
#define public_628df27 _public_628df27
#define public_628df46 _public_628df46
#define public_628df66 _public_628df66
#define public_628df72 _public_628df72
#define public_628df8e _public_628df8e
#define public_628dfa4 _public_628dfa4
#define public_628dfa8 _public_628dfa8
#define public_628dfbb _public_628dfbb
#define public_628dff1 _public_628dff1
#define public_628e036 _public_628e036
#define public_628e042 _public_628e042
#define public_628e058 _public_628e058
#define public_628e076 _public_628e076
#define public_628e085 _public_628e085
#define public_628e092 _public_628e092
#define public_628e09d _public_628e09d
#define public_628e0a0 _public_628e0a0

PROC_DECLARE(0x628dec0, internal_628dec0, public_628dec0);
extern "C" NAKED register_t __cdecl internal_628dec0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, edx
        cmp ecx, edx
        je public_628dee3
        public_628ded5 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_628ded5
        public_628dee3 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [edi+4]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebx
        mov dword ptr ds : [edi+8], eax
        jae public_628dff1
        test esi, esi
        je public_628df0c
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ebx, ecx
        jb public_628df0e
        public_628df0c : nop
        mov ecx, ebx
        public_628df0e : nop
        test esi, esi
        jne public_628df16
        xor eax, eax
        jmp public_628df1b
        public_628df16 : nop
        sub eax, esi
        sar eax, 2
        public_628df1b : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_628df27
        xor eax, eax
        public_628df27 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebp, esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], eax
        je public_628df66
        public_628df46 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push ebp
        push eax
        call public_630cd00
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 4
        add ebp, 4
        add esp, 8
        cmp ebp, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_628df46
        public_628df66 : nop
        test ebx, ebx
        mov ebp, dword ptr ss : [esp+0x20]
        jbe public_628df8e
        mov dword ptr ss : [esp+0x10], ebx
        public_628df72 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push ebp
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        add ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_628df72
        public_628df8e : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp esi, ebp
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edx+ebx*4]
        je public_628dfbb
        sub eax, esi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_628dfa8
        public_628dfa4 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_628dfa8 : nop
        add eax, esi
        push esi
        push eax
        call public_630cd00
        add esi, 4
        add esp, 8
        cmp esi, ebp
        jne public_628dfa4
        public_628dfbb : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+ecx*4]
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], edx
        call public_626a600
        add eax, ebx
        lea eax, ds:[esi+eax*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_628dff1 : nop
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ecx, ebx
        jae public_628e058
        lea ecx, ds:[ebx*4]
        mov dword ptr ss : [esp+0x20], ecx
        add ecx, esi
        push ecx
        push eax
        push esi
        mov ecx, edi
        call public_627f7b0
        mov eax, dword ptr ds : [edi+8]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, eax
        sub edx, esi
        sar edx, 2
        push ebp
        sub ebx, edx
        push ebx
        push eax
        mov ecx, edi
        call public_627f7e0
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_628e042
        public_628e036 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_628e036
        public_628e042 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_628e058 : nop
        test ebx, ebx
        jbe public_628e0a0
        push eax
        push eax
        shl ebx, 2
        sub eax, ebx
        push eax
        mov ecx, edi
        call public_627f7b0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebx
        cmp esi, eax
        je public_628e085
        public_628e076 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_628e076
        public_628e085 : nop
        lea ecx, ds:[ebx+esi]
        cmp esi, ecx
        mov eax, esi
        je public_628e09d
        mov edx, dword ptr ss : [esp+0x24]
        public_628e092 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_628e092
        public_628e09d : nop
        add dword ptr ds : [edi+8], ebx
        public_628e0a0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x628dec0)
    }
}

#undef public_628ded5
#undef public_628dee3
#undef public_628df0c
#undef public_628df0e
#undef public_628df16
#undef public_628df1b
#undef public_628df27
#undef public_628df46
#undef public_628df66
#undef public_628df72
#undef public_628df8e
#undef public_628dfa4
#undef public_628dfa8
#undef public_628dfbb
#undef public_628dff1
#undef public_628e036
#undef public_628e042
#undef public_628e058
#undef public_628e076
#undef public_628e085
#undef public_628e092
#undef public_628e09d
#undef public_628e0a0
