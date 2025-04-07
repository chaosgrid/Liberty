#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eabcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6eacbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eacbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eadd60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2150);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9d22);

#define public_6eabd30 _public_6eabd30
#define public_6eabd3f _public_6eabd3f
#define public_6eabd80 _public_6eabd80
#define public_6eabda4 _public_6eabda4
#define public_6eabe40 _public_6eabe40
#define public_6eabe4f _public_6eabe4f

PROC_DECLARE(0x6eabcf0, internal_6eabcf0, public_6eabcf0);
extern "C" NAKED register_t __cdecl internal_6eabcf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9d22 @0x6eabcf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9d22
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0x14], edi
        mov ebx, dword ptr ds : [edi+0xAC]
        mov esi, dword ptr ds : [edi+0xA8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 3
        je public_6eabd3f
        nop 
        lea esp, ss:[esp]
        public_6eabd30 : nop
        lea ecx, ds:[esi+8]
        call public_6eacbf0
        add esi, 0x14
        cmp esi, ebx
        jne public_6eabd30
        public_6eabd3f : nop
        mov eax, dword ptr ds : [edi+0xA8]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ds : [edi+0xA8], ebx
        mov dword ptr ds : [edi+0xAC], ebx
        mov dword ptr ds : [edi+0xB0], ebx
        mov ebp, dword ptr ds : [edi+0x9C]
        mov eax, dword ptr ss : [ebp]
        lea esi, ds:[edi+0x98]
        add esp, 4
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6eabda4
        mov edi, edi
        public_6eabd80 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6eacbb0
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6eabd80
        public_6eabda4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x88]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea esi, ds:[edi+0x84]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 1
        call public_6eadd60
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x70]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], bl
        call public_6ead8f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [esi+8], ebx
        mov ebp, dword ptr ds : [edi+0x60]
        mov esi, dword ptr ds : [edi+0x5C]
        add esp, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6eabe4f
        nop 
        public_6eabe40 : nop
        push ebx
        mov ecx, esi
        call public_6eb2150
        add esi, 0x28
        cmp esi, ebp
        jne public_6eabe40
        public_6eabe4f : nop
        mov edx, dword ptr ds : [edi+0x5C]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ds : [edi+0x5C], ebx
        mov dword ptr ds : [edi+0x60], ebx
        mov dword ptr ds : [edi+0x64], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eabcf0)
    }
}

#undef public_6eabd30
#undef public_6eabd3f
#undef public_6eabd80
#undef public_6eabda4
#undef public_6eabe40
#undef public_6eabe4f
