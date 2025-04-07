#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_632c630);
CLANG_FORWARD_PROC_SYMBOL(public_632d410);
CLANG_FORWARD_PROC_SYMBOL(public_632d4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632c6ec _public_632c6ec
#define public_632c741 _public_632c741
#define public_632c7ac _public_632c7ac
#define public_632c823 _public_632c823
#define public_632c86a _public_632c86a
#define public_632c8c5 _public_632c8c5
#define public_632c8d4 _public_632c8d4

PROC_DECLARE(0x632c630, internal_632c630, public_632c630);
extern "C" NAKED register_t __cdecl internal_632c630()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        push edi
        je public_632c7ac
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        cmp eax, edx
        je public_632c7ac
        lea ecx, ds:[eax+8]
        mov dword ptr ds : [esi+0x1C], ecx
        cmp ecx, edx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        jne public_632c8d4
        call public_62bee40
        push 0x1000
        call public_6391d9c
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 0xC
        test eax, eax
        jne public_632c6ec
        push 8
        mov dword ptr ds : [esi+0x28], 2
        call public_6391d9c
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [eax+4], edi
        mov edx, dword ptr ds : [esi+0x24]
        add esp, 4
        add edx, 4
        push edx
        add edi, 0x800
        push edi
        lea ecx, ss:[esp+0x14]
        call public_632d4e0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+4]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        public_632c6ec : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[edx+ecx*4-4]
        cmp eax, ecx
        jae public_632c741
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [esi+0x20]
        push edx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_632d4e0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi+0x2C]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        public_632c741 : nop
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebx, eax
        lea eax, ds:[ebx+ebx]
        push eax
        mov ecx, esi
        call public_632d410
        lea ebx, ds:[eax+ebx*4]
        mov dword ptr ds : [ebx], edi
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632d4e0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [ebx]
        lea edx, ds:[esi+0x14]
        mov dword ptr ds : [edx], eax
        lea ecx, ds:[eax+0x1000]
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], edi
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        mov dword ptr ds : [edx+0xC], ebx
        pop ebx
        add esp, 0x10
        ret 4
        public_632c7ac : nop
        push 0x1000
        call public_6391d9c
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_632c823
        push 8
        mov dword ptr ds : [esi+0x28], 2
        call public_6391d9c
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [eax+4], edi
        mov edx, dword ptr ds : [esi+0x24]
        add esp, 4
        add edx, 4
        push edx
        add edi, 0x800
        push edi
        lea ecx, ss:[esp+0x14]
        call public_632d4e0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+4]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        jmp public_632c8c5
        public_632c823 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[edx+ecx*4-4]
        cmp eax, ecx
        jae public_632c86a
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [esi+0x20]
        push edx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_632d4e0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_632c8c5
        public_632c86a : nop
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebx, eax
        lea eax, ds:[ebx+ebx]
        push eax
        mov ecx, esi
        call public_632d410
        lea ebx, ds:[eax+ebx*4]
        mov dword ptr ds : [ebx], edi
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632d4e0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [ebx]
        lea edx, ds:[esi+0x14]
        mov dword ptr ds : [edx], eax
        lea ecx, ds:[eax+0x1000]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], edi
        mov dword ptr ds : [edx+0xC], ebx
        public_632c8c5 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[eax+8]
        push edx
        mov dword ptr ds : [esi+0x1C], ecx
        push eax
        public_632c8d4 : nop
        call public_62bee40
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x632c630)
    }
}

#undef public_632c6ec
#undef public_632c741
#undef public_632c7ac
#undef public_632c823
#undef public_632c86a
#undef public_632c8c5
#undef public_632c8d4
