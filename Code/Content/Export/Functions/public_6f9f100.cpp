#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f971c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f100);
CLANG_FORWARD_PROC_SYMBOL(public_6fa07a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa55e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1cb2);

#define public_6f9f142 _public_6f9f142
#define public_6f9f151 _public_6f9f151
#define public_6f9f26b _public_6f9f26b
#define public_6f9f26d _public_6f9f26d
#define public_6f9f2c0 _public_6f9f2c0
#define public_6f9f2cf _public_6f9f2cf

PROC_DECLARE(0x6f9f100, internal_6f9f100, public_6f9f100);
extern "C" NAKED register_t __cdecl internal_6f9f100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1cb2 @0x6f9f102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1cb2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fbd554
        mov ebp, dword ptr ds : [esi+0xC4]
        mov edi, dword ptr ds : [esi+0xC0]
        xor ebx, ebx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], 6
        je public_6f9f151
        public_6f9f142 : nop
        push ebx
        mov ecx, edi
        call public_6f971c0
        add edi, 0x24
        cmp edi, ebp
        jne public_6f9f142
        public_6f9f151 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        push eax
        call public_6fa8fe0
        lea edi, ds:[esi+0xAC]
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 5
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov edx, dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ds : [esi+0xA0]
        lea edi, ds:[esi+0x9C]
        add esp, 4
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 4
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [esi+0x90], offset public_6fbd3f0
        mov dword ptr ds : [esi+0x60], offset public_6fbc700
        mov eax, dword ptr ds : [esi+0x84]
        push eax
        mov byte ptr ss : [esp+0x2C], 2
        call public_6fa8fe0
        add esp, 8
        lea ecx, ds:[esi+0x64]
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        call dword ptr ds : [public_6fb3034]
        lea ebp, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [ebp], offset public_6fbc700
        mov ecx, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ss : [ebp+0x24]
        lea edi, ss:[ebp+0x20]
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 7
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[ebp+4]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6fb3034]
        lea eax, ds:[esi+0x18]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], bl
        je public_6f9f26b
        lea edi, ds:[eax+4]
        jmp public_6f9f26d
        public_6f9f26b : nop
        xor edi, edi
        public_6f9f26d : nop
        mov ebp, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6fa07a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [esi+0xC]
        add esp, 8
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6f9f2cf
        lea esp, ss:[esp]
        public_6f9f2c0 : nop
        push ebx
        mov ecx, edi
        call public_6fa55e0
        add edi, 0x18
        cmp edi, ebp
        jne public_6f9f2c0
        public_6f9f2cf : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f9f100)
    }
}

#undef public_6f9f142
#undef public_6f9f151
#undef public_6f9f26b
#undef public_6f9f26d
#undef public_6f9f2c0
#undef public_6f9f2cf
