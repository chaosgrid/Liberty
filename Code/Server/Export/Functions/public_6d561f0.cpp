#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5621b _public_6d5621b
#define public_6d56248 _public_6d56248
#define public_6d5624d _public_6d5624d
#define public_6d56255 _public_6d56255
#define public_6d5625a _public_6d5625a
#define public_6d56266 _public_6d56266
#define public_6d56285 _public_6d56285
#define public_6d56299 _public_6d56299
#define public_6d562fa _public_6d562fa
#define public_6d56340 _public_6d56340
#define public_6d56357 _public_6d56357
#define public_6d56370 _public_6d56370
#define public_6d5637f _public_6d5637f
#define public_6d56388 _public_6d56388
#define public_6d56395 _public_6d56395

PROC_DECLARE(0x6d561f0, internal_6d561f0, public_6d561f0);
extern "C" NAKED register_t __cdecl internal_6d561f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ecx, dword ptr ds : [eax+ecx-0x14]
        test ecx, ecx
        push esi
        push edi
        je public_6d5621b
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6d5c0d0
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6d5621b : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6d562fa
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6d56248
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6d5624d
        public_6d56248 : nop
        mov ecx, 1
        public_6d5624d : nop
        test edx, edx
        jne public_6d56255
        xor eax, eax
        jmp public_6d5625a
        public_6d56255 : nop
        sub eax, edx
        sar eax, 2
        public_6d5625a : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_6d56266
        xor eax, eax
        public_6d56266 : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6d60012
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6d56299
        public_6d56285 : nop
        push ebx
        push ebp
        call public_6d06720
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6d56285
        public_6d56299 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ebp
        mov ecx, esi
        call public_6d3f0f0
        mov ecx, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
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
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6d31890
        pop ebp
        lea ecx, ds:[edi+eax*4+4]
        pop ebx
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6d562fa : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_6d56357
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x10]
        push edx
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6d3f0f0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6d56395
        lea esp, ss:[esp]
        public_6d56340 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6d56340
        add dword ptr ds : [esi+8], 4
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6d56357 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6d5637f
        mov edi, edi
        public_6d56370 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d56370
        public_6d5637f : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6d56395
        public_6d56388 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d56388
        public_6d56395 : nop
        add dword ptr ds : [esi+8], 4
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d561f0)
    }
}

#undef public_6d5621b
#undef public_6d56248
#undef public_6d5624d
#undef public_6d56255
#undef public_6d5625a
#undef public_6d56266
#undef public_6d56285
#undef public_6d56299
#undef public_6d562fa
#undef public_6d56340
#undef public_6d56357
#undef public_6d56370
#undef public_6d5637f
#undef public_6d56388
#undef public_6d56395
