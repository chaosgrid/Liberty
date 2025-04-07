#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_627e490);
CLANG_FORWARD_PROC_SYMBOL(public_627e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_627eab0);
CLANG_FORWARD_PROC_SYMBOL(public_627f210);
CLANG_FORWARD_PROC_SYMBOL(public_627f300);
CLANG_FORWARD_PROC_SYMBOL(public_627f340);
CLANG_FORWARD_PROC_SYMBOL(public_627f810);
CLANG_FORWARD_PROC_SYMBOL(public_630e660);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392cf8);

#define public_627d4d0 _public_627d4d0
#define public_627d4df _public_627d4df
#define public_627d520 _public_627d520
#define public_627d531 _public_627d531
#define public_627d53d _public_627d53d
#define public_627d5e7 _public_627d5e7
#define public_627d64f _public_627d64f
#define public_627d667 _public_627d667
#define public_627d66a _public_627d66a

PROC_DECLARE(0x627d4a0, internal_627d4a0, public_627d4a0);
extern "C" NAKED register_t __cdecl internal_627d4a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ds : [public_63fbff0]
        push 0xFFFFFFFF
/*FIXUP push public_6392cf8 @0x627d4ae*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392cf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [ecx]
        sub esp, 0x1C
        cmp eax, ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        je public_627d4df
        lea esp, ss:[esp]
        public_627d4d0 : nop
        cmp dword ptr ds : [eax+8], edi
        je public_627d66a
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_627d4d0
        public_627d4df : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        cmp eax, 0xFFFFFFFF
        je public_627d66a
        inc dword ptr ds : [public_63fc424]
        lea ecx, ss:[esp+0x3C]
        push ecx
        xor ebp, ebp
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], ebp
        call public_627e490
        dec dword ptr ds : [public_63fc424]
        jne public_627d53d
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, ebp
        je public_627d531
        lea ebx, ds:[ebx]
        public_627d520 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_627d520
        public_627d531 : nop
        mov dword ptr ds : [public_63fc420], ebp
        mov dword ptr ds : [public_63fc42c], ebp
        public_627d53d : nop
        mov eax, dword ptr ds : [public_63fbff0]
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push edx
        push eax
        mov ecx, offset public_63fbfec
        mov dword ptr ss : [esp+0x3C], 1
        call public_627f210
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x18]
        push ecx
        add eax, 8
        push eax
        call public_627f810
        mov ebx, dword ptr ds : [public_63fbff4]
        add esp, 8
        inc ebx
        lea edx, ss:[esp+0x20]
        mov dword ptr ds : [public_63fbff4], ebx
        mov dword ptr ss : [esp+0x3C], edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], 2
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_627e9f0
        mov ecx, dword ptr ss : [esp+0x24]
        push 1
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_627f300
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc424], eax
        jne public_627d5e7
        call public_627eab0
        public_627d5e7 : nop
        mov edx, dword ptr ds : [public_63fbff0]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi]
        add esi, 8
        mov ecx, edi
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [ebx+0x80]
        mov ebx, eax
        push ebx
        mov dword ptr ss : [esp+0x40], ebx
        call public_630e660
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ebx+4]
        add esp, 4
        mov ecx, edi
        call dword ptr ds : [edx+4]
        cmp ebx, eax
        jne public_627d66a
        lea edi, ds:[esi+8]
        mov esi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov ecx, edi
        call public_627f340
        cmp ebx, ebp
        mov dword ptr ds : [eax], esi
        jne public_627d64f
        mov ebx, eax
        public_627d64f : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        cmp eax, ebp
        je public_627d667
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax], edx
        public_627d667 : nop
        inc dword ptr ds : [edi+8]
        public_627d66a : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x627d4a0)
    }
}

#undef public_627d4d0
#undef public_627d4df
#undef public_627d520
#undef public_627d531
#undef public_627d53d
#undef public_627d5e7
#undef public_627d64f
#undef public_627d667
#undef public_627d66a
