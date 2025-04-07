#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f67740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab04b);

#define public_6ecdf40 _public_6ecdf40
#define public_6ecdf7d _public_6ecdf7d
#define public_6ecdfb9 _public_6ecdfb9
#define public_6ece02e _public_6ece02e
#define public_6ece03c _public_6ece03c
#define public_6ece03e _public_6ece03e

PROC_DECLARE(0x6ecdea0, internal_6ecdea0, public_6ecdea0);
extern "C" NAKED register_t __cdecl internal_6ecdea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab04b @0x6ecdea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab04b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        push edi
        lea eax, ds:[ebx+0xC]
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f15710
        mov esi, eax
        xor edi, edi
        cmp esi, edi
        je public_6ece03c
        mov ecx, dword ptr ds : [ebx+4]
        add ecx, 0xC
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ece03c
        mov dl, byte ptr ss : [esp+0xF]
        push ebp
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov eax, dword ptr ds : [esi+0x154]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0xD4], edi
        call public_6f66220
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+0x150]
        add esp, 8
        cmp ebp, eax
        mov dword ptr ss : [esp+0x30], edx
        je public_6ece02e
        add ebx, 0x40
        public_6ecdf40 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, 0xC
        mov esi, ebx
        lea edi, ss:[esp+0x4C]
        rep movsd
        lea eax, ss:[esp+0x7C]
        push eax
        mov eax, dword ptr ds : [edx+0x14C]
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push eax
        call public_6efcbe0
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        jne public_6ecdf7d
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ecdf7d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        mov dword ptr ss : [esp+0x74], ecx
        mov dword ptr ss : [esp+0x78], edx
        jne public_6ecdfb9
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ecdfb9 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x7C]
        push edx
        push ebx
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, 9
        lea esi, ss:[esp+0xA0]
        lea edi, ss:[esp+0x4C]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        mov edx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        call public_6f67740
        mov eax, dword ptr ss : [esp+0x2C]
        add ebp, 4
        add esp, 0x10
        cmp ebp, eax
        jne public_6ecdf40
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ece02e : nop
        push ebp
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        pop ebp
        jmp public_6ece03e
        public_6ece03c : nop
        xor al, al
        public_6ece03e : nop
        mov ecx, dword ptr ss : [esp+0xC0]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 
        UNREACHABLE_TRAP(0x6ecdea0)
    }
}

#undef public_6ecdf40
#undef public_6ecdf7d
#undef public_6ecdfb9
#undef public_6ece02e
#undef public_6ece03c
#undef public_6ece03e
