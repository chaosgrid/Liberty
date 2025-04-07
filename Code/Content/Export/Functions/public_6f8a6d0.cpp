#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6f8a6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb110d);

#define public_6f8a724 _public_6f8a724
#define public_6f8a759 _public_6f8a759
#define public_6f8a7a0 _public_6f8a7a0
#define public_6f8a7dd _public_6f8a7dd

PROC_DECLARE(0x6f8a6d0, internal_6f8a6d0, public_6f8a6d0);
extern "C" NAKED register_t __cdecl internal_6f8a6d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb110d @0x6f8a6d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb110d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx], offset public_6fbc928
        mov dword ptr ds : [ebx+0x10], offset public_6fbc910
        mov dword ptr ds : [ebx+0x54], offset public_6fbc90c
        mov eax, dword ptr ds : [ebx+0xB0]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x24], esi
        je public_6f8a724
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0xB0], esi
        public_6f8a724 : nop
        mov dword ptr ds : [ebx], offset public_6fbc9b8
        mov dword ptr ds : [ebx+0x10], offset public_6fbc9a0
        mov dword ptr ds : [ebx+0x54], offset public_6fbc99c
        mov eax, dword ptr ds : [ebx+0x8C]
        cmp eax, esi
        mov dword ptr ss : [esp+0x24], 3
        je public_6f8a759
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+0x8C], esi
        public_6f8a759 : nop
        mov eax, dword ptr ds : [ebx+0x7C]
        push eax
        call public_6fa8fe0
        lea edi, ds:[ebx+0x64]
        mov dword ptr ds : [ebx+0x7C], esi
        mov dword ptr ds : [ebx+0x80], esi
        mov dword ptr ds : [ebx+0x84], esi
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_6fb479c
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6f1cb40
        mov ebp, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        mov byte ptr ss : [esp+0x24], 1
        je public_6f8a7dd
        lea esp, ss:[esp]
        public_6f8a7a0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6f8a7a0
        public_6f8a7dd : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6f71920
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f8a6d0)
    }
}

#undef public_6f8a724
#undef public_6f8a759
#undef public_6f8a7a0
#undef public_6f8a7dd
