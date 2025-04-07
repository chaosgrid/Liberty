#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);

#define public_6d3e8ef _public_6d3e8ef
#define public_6d3e8f4 _public_6d3e8f4
#define public_6d3e8fc _public_6d3e8fc
#define public_6d3e901 _public_6d3e901
#define public_6d3e920 _public_6d3e920
#define public_6d3e933 _public_6d3e933
#define public_6d3e981 _public_6d3e981
#define public_6d3e9c0 _public_6d3e9c0
#define public_6d3e9cd _public_6d3e9cd
#define public_6d3e9e2 _public_6d3e9e2
#define public_6d3e9f1 _public_6d3e9f1
#define public_6d3ea00 _public_6d3ea00
#define public_6d3ea0b _public_6d3ea0b

PROC_DECLARE(0x6d3e8b0, internal_6d3e8b0, public_6d3e8b0);
extern "C" NAKED register_t __cdecl internal_6d3e8b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6d3e981
        test edx, edx
        je public_6d3e8ef
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6d3e8f4
        public_6d3e8ef : nop
        mov ecx, 1
        public_6d3e8f4 : nop
        test edx, edx
        jne public_6d3e8fc
        xor eax, eax
        jmp public_6d3e901
        public_6d3e8fc : nop
        sub eax, edx
        sar eax, 2
        public_6d3e901 : nop
        add eax, ecx
        mov ecx, dword ptr ds : [esi]
        shl eax, 2
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call public_6d1baa0
        mov ebx, dword ptr ds : [esi+4]
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6d3e933
        nop 
        public_6d3e920 : nop
        push ebx
        push ebp
        mov ecx, esi
        call public_6d3ea20
        add ebx, 4
        add ebp, 4
        cmp ebx, edi
        jne public_6d3e920
        public_6d3e933 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        mov ecx, esi
        call public_6d3ea20
        mov eax, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x10]
        add ecx, edi
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, esi
        call public_6d31890
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6d3e981 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6d3e9cd
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6d3f0f0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6d3ea0b
        public_6d3e9c0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6d3e9c0
        jmp public_6d3ea0b
        public_6d3e9cd : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6d3e9f1
        public_6d3e9e2 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d3e9e2
        public_6d3e9f1 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6d3ea0b
        mov ecx, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6d3ea00 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6d3ea00
        public_6d3ea0b : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d3e8b0)
    }
}

#undef public_6d3e8ef
#undef public_6d3e8f4
#undef public_6d3e8fc
#undef public_6d3e901
#undef public_6d3e920
#undef public_6d3e933
#undef public_6d3e981
#undef public_6d3e9c0
#undef public_6d3e9cd
#undef public_6d3e9e2
#undef public_6d3e9f1
#undef public_6d3ea00
#undef public_6d3ea0b
