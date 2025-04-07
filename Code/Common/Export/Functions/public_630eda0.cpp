#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_630e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_630eda0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396398);

#define public_630ee35 _public_630ee35
#define public_630ee5f _public_630ee5f
#define public_630ee61 _public_630ee61
#define public_630ee72 _public_630ee72
#define public_630ee90 _public_630ee90
#define public_630ee99 _public_630ee99
#define public_630eead _public_630eead
#define public_630ef01 _public_630ef01
#define public_630ef17 _public_630ef17

PROC_DECLARE(0x630eda0, internal_630eda0, public_630eda0);
extern "C" NAKED register_t __cdecl internal_630eda0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396398 @0x630eda2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396398
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x78]
        push edi
        push esi
        xor ebx, ebx
        push eax
        mov byte ptr ss : [esp+0x17], bl
        call dword ptr ds : [ecx+0x4C]
        test eax, eax
        je public_630eead
        mov dl, byte ptr ss : [esp+0x80]
        push ebp
        push 0x6C
        mov byte ptr ss : [esp+0x20], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
/*FIXUP push offset _public_630e7f0 @0x630ee0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_630e7f0
        push esi
        push eax
        mov dword ptr ss : [esp+0x88], ebx
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_630ee61
        mov edi, dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ss : [esp+0x88]
        public_630ee35 : nop
        mov eax, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        push ebp
        push eax
        push ecx
        call public_630eda0
        add esp, 0x10
        test al, al
        mov eax, dword ptr ss : [esp+0x20]
        jne public_630ee5f
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_630ee35
        mov bl, byte ptr ss : [esp+0x13]
        jmp public_630ee61
        public_630ee5f : nop
        mov bl, 1
        public_630ee61 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov edi, eax
        pop ebp
        je public_630ee90
        public_630ee72 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x84]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6271cc0
        cmp esi, edi
        jne public_630ee72
        mov eax, dword ptr ss : [esp+0x1C]
        public_630ee90 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_630ee99 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        public_630eead : nop
        mov eax, dword ptr ss : [esp+0x80]
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6399024]
        add esp, 4
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        je public_630ee99
        mov eax, dword ptr ss : [esp+0x84]
        cmp eax, ebx
        je public_630ef01
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_630ef01 : nop
        mov edi, dword ptr ss : [esp+0x88]
        cmp edi, ebx
        je public_630ef17
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        rep movsd
        public_630ef17 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x630eda0)
    }
}

#undef public_630ee35
#undef public_630ee5f
#undef public_630ee61
#undef public_630ee72
#undef public_630ee90
#undef public_630ee99
#undef public_630eead
#undef public_630ef01
#undef public_630ef17
