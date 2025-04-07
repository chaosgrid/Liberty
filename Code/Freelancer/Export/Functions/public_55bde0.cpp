#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c168f);

#define public_55beaa _public_55beaa
#define public_55bedd _public_55bedd
#define public_55bf54 _public_55bf54
#define public_55bf67 _public_55bf67
#define public_55bf98 _public_55bf98
#define public_55bfa6 _public_55bfa6

PROC_DECLARE(0x55bde0, internal_55bde0, public_55bde0);
extern "C" NAKED register_t __cdecl internal_55bde0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c168f @0x55bde2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c168f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA4
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xBC], ebx
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xC4], 1
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x68], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x7C], bl
        mov eax, dword ptr ss : [ebp+0xCC]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x34C]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [ebp+0x84]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xBC], 2
        je public_55beaa
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x84]
        rep movsd
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xB0]
        jmp public_55bedd
        public_55beaa : nop
        fld dword ptr ss : [ebp+0xB0]
        fadd dword ptr ss : [ebp+0x68]
        fld dword ptr ss : [ebp+0xAC]
        fadd dword ptr ss : [ebp+0x64]
        fld dword ptr ss : [ebp+0x60]
        fadd dword ptr ss : [ebp+0xA8]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        public_55bedd : nop
        add ebp, 0xB4
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        mov byte ptr ss : [esp+0x80], 1
        call public_4be370
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xBC], 3
        mov dword ptr ss : [esp+0x80], ecx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xBC], 5
        call public_4144f0
        mov edi, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x3C]
        cmp esi, edi
        mov byte ptr ss : [esp+0xBC], 4
        je public_55bf67
        public_55bf54 : nop
        push ebx
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, edi
        jne public_55bf54
        mov esi, dword ptr ss : [esp+0x3C]
        public_55bf67 : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        je public_55bf98
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_55bf98 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        je public_55bfa6
        push eax
        call esi
        add esp, 4
        public_55bfa6 : nop
        mov ecx, dword ptr ss : [esp+0xB4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB0
        ret 
        UNREACHABLE_TRAP(0x55bde0)
    }
}

#undef public_55beaa
#undef public_55bedd
#undef public_55bf54
#undef public_55bf67
#undef public_55bf98
#undef public_55bfa6
