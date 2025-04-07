#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62eee60);
CLANG_FORWARD_PROC_SYMBOL(public_630b730);
CLANG_FORWARD_PROC_SYMBOL(public_630b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_630bd60);
CLANG_FORWARD_PROC_SYMBOL(public_630c1b0);
CLANG_FORWARD_PROC_SYMBOL(public_630c1f0);
CLANG_FORWARD_PROC_SYMBOL(public_630cb40);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63962c3);

#define public_630bda0 _public_630bda0
#define public_630bf96 _public_630bf96
#define public_630bfa2 _public_630bfa2
#define public_630bfb2 _public_630bfb2

PROC_DECLARE(0x630bd60, internal_630bd60, public_630bd60);
extern "C" NAKED register_t __cdecl internal_630bd60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63962c3 @0x630bd68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63962c3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD4
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xF0]
        mov ecx, edi
        xor ebx, ebx
        xor esi, esi
        call public_6310170
        test al, al
        je public_630bfb2
        push ebp
        lea esp, ss:[esp]
/*FIXUP public_630bda0 : nop
        push offset public_63994e8 @0x630bda0*/
  FIXUP public_630bda0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, edi
        call public_6310410
        test al, al
        je public_630bf96
        cmp esi, ebx
        jne public_630bfa2
        mov ecx, edi
        call public_6310b70
        push eax
        call public_630d3f0
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x14], esi
        call public_630b730
        push eax
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0xF0], ebx
        mov dword ptr ss : [esp+0x84], esi
        call public_62eee60
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_63fcf3c
        mov byte ptr ss : [esp+0xF4], 1
        call public_630c1f0
        mov eax, dword ptr ss : [esp+0xDC]
        mov ecx, dword ptr ss : [esp+0xD8]
        push eax
        push ecx
        lea ecx, ss:[esp+0xDC]
        mov byte ptr ss : [esp+0xF4], bl
        call public_628f050
        mov edx, dword ptr ss : [esp+0xD8]
        push edx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0xD8], ebx
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0xE0], ebx
        call public_6269110
        lea ecx, ss:[esp+0xA4]
        call public_62a68e0
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x74]
        push eax
        push ecx
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xF4], 0xFFFFFFFF
        call public_628f050
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 4
        push eax
        push ecx
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        call public_628f050
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        call public_62a68e0
        mov eax, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+0x10]
        cmp byte ptr ss : [esp+0x18], bl
        jne public_630bfa2
        cmp byte ptr ss : [esp+0xF8], bl
        je public_630bfa2
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], 0x461C4000
        mov dword ptr ds : [esi+0x14], 1
        mov dword ptr ds : [esi+0x30], 0x40A00000
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x34], 0xBF800000
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x20]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_62728a0
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [esi+0x48]
        lea edi, ds:[esi+0x40]
        push ecx
        push eax
        push eax
        call public_630cb40
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ebp
        mov ecx, edi
        call public_628f050
        lea ecx, ds:[esi+0x50]
        mov dword ptr ds : [edi+8], ebp
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_630c1b0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0xF4]
        mov dword ptr ds : [esi], ecx
        jmp public_630bfa2
        public_630bf96 : nop
        cmp esi, ebx
        je public_630bfa2
        push edi
        mov ecx, esi
        call public_630b7c0
        public_630bfa2 : nop
        mov ecx, edi
        call public_6310170
        test al, al
        jne public_630bda0
        pop ebp
        public_630bfb2 : nop
        mov ecx, dword ptr ss : [esp+0xE0]
        xor eax, eax
        cmp esi, ebx
        pop edi
        pop esi
        setne al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE0
        ret 
        UNREACHABLE_TRAP(0x630bd60)
    }
}

#undef public_630bda0
#undef public_630bf96
#undef public_630bfa2
#undef public_630bfb2
