#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d21e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d21e92 _public_6d21e92
#define public_6d21e9a _public_6d21e9a
#define public_6d21eae _public_6d21eae
#define public_6d21eb6 _public_6d21eb6
#define public_6d21edc _public_6d21edc
#define public_6d21ede _public_6d21ede
#define public_6d21eef _public_6d21eef
#define public_6d21f75 _public_6d21f75
#define public_6d21fc0 _public_6d21fc0
#define public_6d21fcc _public_6d21fcc
#define public_6d21fe0 _public_6d21fe0
#define public_6d22002 _public_6d22002
#define public_6d22011 _public_6d22011
#define public_6d22020 _public_6d22020
#define public_6d2202b _public_6d2202b
#define public_6d2203b _public_6d2203b
#define public_6d22056 _public_6d22056
#define public_6d22064 _public_6d22064
#define public_6d22067 _public_6d22067

PROC_DECLARE(0x6d21e80, internal_6d21e80, public_6d21e80);
extern "C" NAKED register_t __cdecl internal_6d21e80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        push edi
        jne public_6d21e92
        xor eax, eax
        jmp public_6d21e9a
        public_6d21e92 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6d21e9a : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jae public_6d2203b
        test edx, edx
        jne public_6d21eae
        xor ecx, ecx
        jmp public_6d21eb6
        public_6d21eae : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_6d21eb6 : nop
        mov eax, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebx
        mov edi, eax
        jae public_6d21f75
        test edx, edx
        je public_6d21edc
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        mov ebp, eax
        jb public_6d21ede
        public_6d21edc : nop
        mov ebp, ebx
        public_6d21ede : nop
        mov ecx, esi
        call public_6d31890
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jns public_6d21eef
        xor eax, eax
        public_6d21eef : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6d3f0f0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[edx+ebx*4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6d23e40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6d28880
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6d31890
        add eax, ebx
        lea ecx, ss:[ebp+eax*4]
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6d21f75 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, ebx
        jae public_6d21fe0
        lea ecx, ds:[ebx*4]
        mov dword ptr ss : [esp+0x18], ecx
        add ecx, edi
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebp
        sub ebx, ecx
        push ebx
        push eax
        mov ecx, esi
        call public_6d3f0f0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6d21fcc
        lea ebx, ds:[ebx]
        public_6d21fc0 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d21fc0
        public_6d21fcc : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        add ecx, eax
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6d21fe0 : nop
        test ebx, ebx
        jbe public_6d22067
        push eax
        push eax
        shl ebx, 2
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_6d22011
        public_6d22002 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d22002
        public_6d22011 : nop
        lea ecx, ds:[ebx+edi]
        cmp edi, ecx
        mov eax, edi
        je public_6d2202b
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_6d22020 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6d22020
        public_6d2202b : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6d2203b : nop
        test edx, edx
        je public_6d22067
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_6d22067
        mov eax, ecx
        cmp eax, ecx
        lea edx, ds:[edx+ebx*4]
        je public_6d22064
        public_6d22056 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6d22056
        public_6d22064 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d22067 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d21e80)
    }
}

#undef public_6d21e92
#undef public_6d21e9a
#undef public_6d21eae
#undef public_6d21eb6
#undef public_6d21edc
#undef public_6d21ede
#undef public_6d21eef
#undef public_6d21f75
#undef public_6d21fc0
#undef public_6d21fcc
#undef public_6d21fe0
#undef public_6d22002
#undef public_6d22011
#undef public_6d22020
#undef public_6d2202b
#undef public_6d2203b
#undef public_6d22056
#undef public_6d22064
#undef public_6d22067
