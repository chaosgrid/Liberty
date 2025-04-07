#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b460);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d710);
CLANG_FORWARD_PROC_SYMBOL(public_6f4db40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4df20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf09a);

#define public_6f4b4c0 _public_6f4b4c0
#define public_6f4b4cf _public_6f4b4cf
#define public_6f4b56b _public_6f4b56b
#define public_6f4b5c7 _public_6f4b5c7
#define public_6f4b5d0 _public_6f4b5d0
#define public_6f4b5f6 _public_6f4b5f6
#define public_6f4b5fa _public_6f4b5fa

PROC_DECLARE(0x6f4b460, internal_6f4b460, public_6f4b460);
extern "C" NAKED register_t __cdecl internal_6f4b460()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf09a @0x6f4b462*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf09a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [esi], offset public_6fbb288
        mov dword ptr ds : [esi+0x1B0], offset public_6fbb26c
        mov dword ptr ds : [esi+0x1C0], offset public_6fbb258
        dec dword ptr ds : [public_6fd0c8c]
        mov ebp, dword ptr ds : [esi+0x22C]
        mov edi, dword ptr ds : [esi+0x228]
        xor ebx, ebx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x30], 5
        je public_6f4b4cf
        lea esp, ss:[esp]
        public_6f4b4c0 : nop
        push ebx
        mov ecx, edi
        call public_6f4eaf0
        add edi, 0x10
        cmp edi, ebp
        jne public_6f4b4c0
        public_6f4b4cf : nop
        mov eax, dword ptr ds : [esi+0x228]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        mov dword ptr ds : [esi+0x230], ebx
        mov eax, dword ptr ds : [esi+0x210]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x20C]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x3C], 4
        call public_6f4d710
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x200]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x200], ebx
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi+0x208], ebx
        mov eax, dword ptr ds : [esi+0x1F8]
        add esp, 0xC
        cmp eax, ebx
        mov byte ptr ss : [esp+0x30], 2
        je public_6f4b56b
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x1F8], ebx
        public_6f4b56b : nop
        mov ebp, dword ptr ds : [esi+0x1E8]
        mov ecx, dword ptr ds : [esi+0x1F4]
        cmp ecx, ebx
        mov eax, dword ptr ss : [ebp]
        lea edi, ds:[esi+0x1E4]
        mov byte ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4b5c7
        mov ecx, eax
        cmp eax, ecx
        jne public_6f4b5c7
        cmp ebp, ebp
        jne public_6f4b5c7
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, edi
        call public_6f4df20
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f1df30
        jmp public_6f4b5fa
        public_6f4b5c7 : nop
        cmp eax, ebp
        je public_6f4b5f6
        nop 
        lea esp, ss:[esp]
        public_6f4b5d0 : nop
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f4d6b0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6f4db40
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        jne public_6f4b5d0
        public_6f4b5f6 : nop
        mov dword ptr ss : [esp+0x18], eax
        public_6f4b5fa : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        add esp, 8
        lea ecx, ds:[esi+0x1B0]
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x30], bl
        call dword ptr ds : [public_6fb3200]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6f0ed00
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f4b460)
    }
}

#undef public_6f4b4c0
#undef public_6f4b4cf
#undef public_6f4b56b
#undef public_6f4b5c7
#undef public_6f4b5d0
#undef public_6f4b5f6
#undef public_6f4b5fa
