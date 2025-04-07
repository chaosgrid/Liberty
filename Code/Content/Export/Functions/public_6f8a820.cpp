#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f06200);
CLANG_FORWARD_PROC_SYMBOL(public_6f34af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5aaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f745a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f877c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1149);

#define public_6f8a87a _public_6f8a87a
#define public_6f8a891 _public_6f8a891
#define public_6f8a896 _public_6f8a896
#define public_6f8a8f6 _public_6f8a8f6
#define public_6f8a927 _public_6f8a927
#define public_6f8a962 _public_6f8a962
#define public_6f8a96d _public_6f8a96d
#define public_6f8a991 _public_6f8a991
#define public_6f8a9b0 _public_6f8a9b0
#define public_6f8a9e1 _public_6f8a9e1
#define public_6f8a9fb _public_6f8a9fb
#define public_6f8aa01 _public_6f8aa01
#define public_6f8aa0b _public_6f8aa0b
#define public_6f8aa40 _public_6f8aa40
#define public_6f8aa5b _public_6f8aa5b
#define public_6f8aa84 _public_6f8aa84
#define public_6f8aa9f _public_6f8aa9f
#define public_6f8aad0 _public_6f8aad0
#define public_6f8aaeb _public_6f8aaeb

PROC_DECLARE(0x6f8a820, internal_6f8a820, public_6f8a820);
extern "C" NAKED register_t __cdecl internal_6f8a820()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1149 @0x6f8a828*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1149
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xB0]
        mov cl, byte ptr ds : [eax+0xF8]
        test cl, cl
        je public_6f8a87a
        mov ecx, dword ptr ds : [public_6fbc2ec]
        push ecx
        add eax, 0x130
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        call public_6f5aaf0
        add esp, 0x10
        public_6f8a87a : nop
        mov eax, dword ptr ds : [edi+0xB0]
        mov cl, byte ptr ds : [eax+0x150]
        test cl, cl
        je public_6f8a891
        add eax, 0x178
        jmp public_6f8a896
        public_6f8a891 : nop
        add eax, 0x1D4
        public_6f8a896 : nop
        mov ecx, dword ptr ds : [public_6fbc2ec]
        push ecx
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        call public_6f5aaf0
        add esp, 0x10
        xor ebx, ebx
        push ebx
        push 2
        push ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [edi+0x5C]
        call public_6f87a50
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xF0], ebx
        call dword ptr ds : [public_6fb3184]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x54], 2
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6f8a96d
        mov ebx, dword ptr ds : [public_6fb363c]
        public_6f8a8f6 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        mov dword ptr ds : [esi+0x1BC], 0x41C00000
        call ebx
        mov eax, dword ptr ds : [esi+0x14C]
        add esp, 8
        test eax, eax
        je public_6f8a927
        cmp dword ptr ds : [esi+0x154], 0xFFFFFFFF
        jne public_6f8a962
        public_6f8a927 : nop
        push esi
        push 4
        lea ecx, ss:[esp+0x8C]
        call public_6f06200
        push 1
        lea eax, ss:[esp+0x88]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0xF8], 1
        call public_6f34af0
        mov byte ptr ss : [esp+0xF0], 0
        mov dword ptr ss : [esp+0x84], offset public_6fb43f8
        public_6f8a962 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x3C]
        jne public_6f8a8f6
        xor ebx, ebx
        public_6f8a96d : nop
        push ebx
        push 2
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [edi+0x58]
        call public_6f86ae0
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov byte ptr ss : [esp+0xF0], 2
        je public_6f8a9b0
        public_6f8a991 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x48]
        mov ecx, dword ptr ds : [edi+0xB0]
        mov ecx, dword ptr ds : [ecx+0x14]
        push 1
        push eax
        call public_6f745a0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x1C]
        jne public_6f8a991
        public_6f8a9b0 : nop
        mov ecx, dword ptr ds : [edi+0x60]
        push ebx
        push 2
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        call public_6f877c0
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov byte ptr ss : [esp+0xF0], 3
        je public_6f8aa0b
        mov ebp, dword ptr ds : [public_6fb3650]
        mov ebx, dword ptr ds : [public_6fb33c8]
        public_6f8a9e1 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x68], 2
        mov eax, dword ptr ds : [eax+0x48]
        push 0
        je public_6f8a9fb
        push 1
        push 0
        push eax
        call ebp
        add esp, 0x10
        jmp public_6f8aa01
        public_6f8a9fb : nop
        push eax
        call ebx
        add esp, 8
        public_6f8aa01 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x2C]
        jne public_6f8a9e1
        xor ebx, ebx
        public_6f8aa0b : nop
        mov ecx, dword ptr ds : [edi+0x88]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edi]
        call dword ptr ds : [edx+0x74]
        push eax
        mov ecx, edi
        call dword ptr ds : [esi+0x70]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebp, offset public_6fbc7cc
        mov dword ptr ss : [esp+0x24], ebp
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov byte ptr ss : [esp+0xF0], 2
        mov edi, eax
        je public_6f8aa5b
        nop 
        lea esp, ss:[esp]
        public_6f8aa40 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8aa40
        mov eax, dword ptr ss : [esp+0x2C]
        public_6f8aa5b : nop
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        mov byte ptr ss : [esp+0xF0], 0
        mov edi, eax
        je public_6f8aa9f
        public_6f8aa84 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8aa84
        mov eax, dword ptr ss : [esp+0x1C]
        public_6f8aa9f : nop
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x38], ebp
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0xF0], 0xFFFFFFFF
        mov edi, eax
        je public_6f8aaeb
        nop 
        lea esp, ss:[esp]
        public_6f8aad0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x40]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8aad0
        mov eax, dword ptr ss : [esp+0x3C]
        public_6f8aaeb : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xEC]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xE4
        ret 
        UNREACHABLE_TRAP(0x6f8a820)
    }
}

#undef public_6f8a87a
#undef public_6f8a891
#undef public_6f8a896
#undef public_6f8a8f6
#undef public_6f8a927
#undef public_6f8a962
#undef public_6f8a96d
#undef public_6f8a991
#undef public_6f8a9b0
#undef public_6f8a9e1
#undef public_6f8a9fb
#undef public_6f8aa01
#undef public_6f8aa0b
#undef public_6f8aa40
#undef public_6f8aa5b
#undef public_6f8aa84
#undef public_6f8aa9f
#undef public_6f8aad0
#undef public_6f8aaeb
