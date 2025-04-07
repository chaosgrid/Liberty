#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f69830);
CLANG_FORWARD_PROC_SYMBOL(public_6f699b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a380);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f69856 _public_6f69856
#define public_6f6986e _public_6f6986e
#define public_6f69886 _public_6f69886
#define public_6f698c4 _public_6f698c4
#define public_6f69918 _public_6f69918
#define public_6f69940 _public_6f69940
#define public_6f69961 _public_6f69961
#define public_6f69964 _public_6f69964
#define public_6f6997e _public_6f6997e
#define public_6f69988 _public_6f69988
#define public_6f69996 _public_6f69996

PROC_DECLARE(0x6f69830, internal_6f69830, public_6f69830);
extern "C" NAKED register_t __cdecl internal_6f69830()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[ebp+0x10]
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f6997e
        lea esi, ss:[ebp+0x14]
        public_6f69856 : nop
        lea eax, ds:[esi-0x14]
        lea ecx, ds:[esi-4]
        cmp eax, ecx
        je public_6f69964
        mov edi, dword ptr ds : [esi]
        test edi, edi
        jne public_6f6986e
        xor ebp, ebp
        jmp public_6f69886
        public_6f6986e : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f69886 : nop
        lea ebx, ds:[esi-0x14]
        mov ecx, ebx
        call public_6f2fb70
        cmp ebp, eax
        ja public_6f698c4
        mov ecx, dword ptr ds : [esi-0x10]
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push eax
        push edi
        call public_6f6a380
        mov edx, dword ptr ds : [esi-0xC]
        add esp, 0xC
        push edx
        push eax
        mov ecx, ebx
        call public_6ea1490
        lea ecx, ds:[esi-4]
        call public_6f2fb70
        imul eax, 0x44
        add eax, dword ptr ds : [esi-0x10]
        jmp public_6f69961
        public_6f698c4 : nop
        mov ecx, ebx
        lea ebp, ds:[esi-4]
        call public_6f699b0
        mov ecx, ebp
        mov edi, eax
        call public_6f2fb70
        cmp eax, edi
        ja public_6f69918
        mov ecx, ebx
        call public_6f2fb70
        mov ecx, dword ptr ds : [esi-0x10]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        imul edi, 0x44
        push ecx
        add edi, eax
        push edi
        push eax
        call public_6f6a380
        mov edx, dword ptr ds : [esi-0xC]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        push edx
        push eax
        push edi
        mov ecx, ebx
        call public_6f30960
        mov ecx, ebp
        call public_6f2fb70
        imul eax, 0x44
        add eax, dword ptr ds : [esi-0x10]
        jmp public_6f69961
        public_6f69918 : nop
        mov ecx, dword ptr ds : [esi-0xC]
        mov edx, dword ptr ds : [esi-0x10]
        push ecx
        push edx
        mov ecx, ebx
        call public_6ea1490
        mov eax, dword ptr ds : [esi-0x10]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebp
        call public_6f2fb70
        test eax, eax
        jge public_6f69940
        xor eax, eax
        public_6f69940 : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi-0x10], eax
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6f30960
        mov dword ptr ds : [esi-8], eax
        public_6f69961 : nop
        mov dword ptr ds : [esi-0xC], eax
        public_6f69964 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x10
        lea ecx, ds:[esi-4]
        cmp ecx, eax
        jne public_6f69856
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f6997e : nop
        mov edi, dword ptr ds : [ebx+8]
        lea esi, ds:[edi-0x10]
        cmp esi, edi
        je public_6f69996
        public_6f69988 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x10
        cmp esi, edi
        jne public_6f69988
        public_6f69996 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        add eax, 0xFFFFFFF0
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f69830)
    }
}

#undef public_6f69856
#undef public_6f6986e
#undef public_6f69886
#undef public_6f698c4
#undef public_6f69918
#undef public_6f69940
#undef public_6f69961
#undef public_6f69964
#undef public_6f6997e
#undef public_6f69988
#undef public_6f69996
