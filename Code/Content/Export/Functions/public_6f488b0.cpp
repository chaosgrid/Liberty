#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faefa8);

#define public_6f48900 _public_6f48900
#define public_6f48909 _public_6f48909
#define public_6f48910 _public_6f48910
#define public_6f48917 _public_6f48917
#define public_6f48919 _public_6f48919
#define public_6f48960 _public_6f48960
#define public_6f489bd _public_6f489bd
#define public_6f489e0 _public_6f489e0
#define public_6f489f8 _public_6f489f8

PROC_DECLARE(0x6f488b0, internal_6f488b0, public_6f488b0);
extern "C" NAKED register_t __cdecl internal_6f488b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faefa8 @0x6f488b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faefa8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        xor eax, eax
        cmp edi, eax
        mov ebp, ecx
        je public_6f48919
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f48917
        mov ecx, dword ptr ss : [ebp+0xF4]
        mov eax, dword ptr ss : [ebp+0xF0]
        cmp eax, ecx
        mov esi, dword ptr ds : [esi]
        je public_6f48910
        lea esp, ss:[esp]
        public_6f48900 : nop
        cmp dword ptr ds : [eax], edi
        jne public_6f48909
        cmp dword ptr ds : [eax+4], esi
        je public_6f48910
        public_6f48909 : nop
        add eax, 0x10
        cmp eax, ecx
        jne public_6f48900
        public_6f48910 : nop
        mov dword ptr ds : [eax+0xC], 1
        public_6f48917 : nop
        xor eax, eax
        public_6f48919 : nop
        mov cl, byte ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp+0xC]
        push edx
        push eax
        call dword ptr ds : [public_6fb3530]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp eax, ecx
        mov edi, eax
        mov dword ptr ss : [esp+0x38], edi
        je public_6f489f8
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        mov edi, edi
        public_6f48960 : nop
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, offset public_6fd0bbc
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, dword ptr ds : [public_6fd0bc0]
        je public_6f489e0
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_6f489e0
        mov edx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [ebp+0xC]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        push 0x100B
        push ecx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x44], 0
        call public_6f24070
        add esp, 0xC
        test edi, edi
        jne public_6f489bd
        mov edi, dword ptr ds : [esi+0xC]
        public_6f489bd : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [esi+0xD8]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        push edi
        push ecx
        push edx
        call dword ptr ds : [public_6fb3534]
        mov edi, dword ptr ss : [esp+0x50]
        add esp, 0x14
        public_6f489e0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x3C], edi
        jne public_6f48960
        mov eax, dword ptr ss : [esp+0x1C]
        pop ebx
        public_6f489f8 : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0x14
        UNREACHABLE_TRAP(0x6f488b0)
    }
}

#undef public_6f48900
#undef public_6f48909
#undef public_6f48910
#undef public_6f48917
#undef public_6f48919
#undef public_6f48960
#undef public_6f489bd
#undef public_6f489e0
#undef public_6f489f8
