#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6273c30);
CLANG_FORWARD_PROC_SYMBOL(public_6279670);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6279693 _public_6279693
#define public_6279695 _public_6279695
#define public_62796c4 _public_62796c4
#define public_62796c9 _public_62796c9
#define public_62796da _public_62796da
#define public_627974f _public_627974f
#define public_6279790 _public_6279790
#define public_62797ab _public_62797ab
#define public_62797c0 _public_62797c0
#define public_62797cf _public_62797cf
#define public_62797d8 _public_62797d8
#define public_62797e5 _public_62797e5

PROC_DECLARE(0x6279670, internal_6279670, public_6279670);
extern "C" NAKED register_t __cdecl internal_6279670()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        push 0x1A2C
        mov esi, ecx
        call public_6391d9c
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6279693
        mov ecx, edi
        call public_6273c30
        jmp public_6279695
        public_6279693 : nop
        xor edi, edi
        public_6279695 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+8], edi
        mov edi, eax
        jae public_627974f
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push ebx
        push ebp
        je public_62796c4
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        mov ebx, eax
        ja public_62796c9
        public_62796c4 : nop
        mov ebx, 1
        public_62796c9 : nop
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_62796da
        xor eax, eax
        public_62796da : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_627f7b0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_627f7e0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        lea edx, ds:[ebx+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        pop ebp
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        pop ebx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 8
        ret 
        public_627974f : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_62797ab
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+8]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_62797e5
        public_6279790 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6279790
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 8
        ret 
        public_62797ab : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62797cf
        public_62797c0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_62797c0
        public_62797cf : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_62797e5
        public_62797d8 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62797d8
        public_62797e5 : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6279670)
    }
}

#undef public_6279693
#undef public_6279695
#undef public_62796c4
#undef public_62796c9
#undef public_62796da
#undef public_627974f
#undef public_6279790
#undef public_62797ab
#undef public_62797c0
#undef public_62797cf
#undef public_62797d8
#undef public_62797e5
