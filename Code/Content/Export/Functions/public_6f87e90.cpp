#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f880c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0d10);

#define public_6f87f72 _public_6f87f72
#define public_6f87f89 _public_6f87f89
#define public_6f87f9f _public_6f87f9f
#define public_6f87fa5 _public_6f87fa5
#define public_6f88004 _public_6f88004
#define public_6f88053 _public_6f88053
#define public_6f88068 _public_6f88068
#define public_6f88086 _public_6f88086
#define public_6f88091 _public_6f88091
#define public_6f880a6 _public_6f880a6

PROC_DECLARE(0x6f87e90, internal_6f87e90, public_6f87e90);
extern "C" NAKED register_t __cdecl internal_6f87e90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0d10 @0x6f87e98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0d10
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax]
        sub esp, 0x5C
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        jl public_6f880a6
        jne public_6f880a6
        mov esi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f880a6
        cmp dword ptr ds : [esi+8], 0x39
        jne public_6f880a6
        mov eax, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x20]
        lea ecx, ss:[ebp+0x20]
        push eax
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_6f88091
        push ebx
        mov ebx, dword ptr ds : [esi+0x64]
        push edi
        mov edi, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [esi+0x3C], 3
        mov eax, dword ptr ds : [public_6fd3ba8]
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x24], offset public_6fbc87c
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x10]
        push eax
        lea ecx, ss:[esp+0x28]
        lea edi, ss:[ebp+0x10]
        push ecx
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x7C], ebx
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [esi+0x64]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_6f880c0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x7C], ebx
        mov ebx, dword ptr ds : [esi+0x40]
        shr ebx, 1
        and bl, 1
        cmp eax, ecx
        mov byte ptr ss : [esp+0x74], 1
        mov byte ptr ss : [esp+0x80], 1
        je public_6f87fa5
        public_6f87f72 : nop
        mov edx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edx+0x3C]
        cmp edx, 3
        mov dword ptr ss : [esp+0x10], edx
        jne public_6f87f89
        inc dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ss : [esp+0x10]
        public_6f87f89 : nop
        cmp edx, 2
        jne public_6f87f9f
        mov edx, dword ptr ds : [eax+8]
        test byte ptr ds : [edx+0x40], 2
        je public_6f87f9f
        mov byte ptr ss : [esp+0x80], 0
        public_6f87f9f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f87f72
        public_6f87fa5 : nop
        mov edx, dword ptr ss : [esp+0x7C]
        cmp edx, dword ptr ss : [esp+0x20]
        jne public_6f88004
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [public_6fd3ba4]
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [esp+0x7C], ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3118]
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x48], offset public_6fbc87c
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x7C], 2
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x74], 1
        public_6f88004 : nop
        test bl, bl
        je public_6f88053
        mov al, byte ptr ss : [esp+0x80]
        test al, al
        je public_6f88053
        mov edx, dword ptr ds : [public_6fd3ba0]
        mov ebx, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x64]
        push edx
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x64], esi
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x48], offset public_6fbc87c
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x7C], 3
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f88053 : nop
        mov dword ptr ss : [esp+0x14], offset public_6fbc7cc
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov byte ptr ss : [esp+0x74], 0
        mov edi, ecx
        je public_6f88086
        public_6f88068 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f88068
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f88086 : nop
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop ebx
        public_6f88091 : nop
        pop esi
        mov al, 1
        pop ebp
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 8
        public_6f880a6 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop esi
        xor al, al
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x6f87e90)
    }
}

#undef public_6f87f72
#undef public_6f87f89
#undef public_6f87f9f
#undef public_6f87fa5
#undef public_6f88004
#undef public_6f88053
#undef public_6f88068
#undef public_6f88086
#undef public_6f88091
#undef public_6f880a6
