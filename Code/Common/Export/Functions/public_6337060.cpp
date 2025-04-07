#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8e20);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6337060);
CLANG_FORWARD_PROC_SYMBOL(public_6337250);
CLANG_FORWARD_PROC_SYMBOL(public_633e970);
CLANG_FORWARD_PROC_SYMBOL(public_633ed10);
CLANG_FORWARD_PROC_SYMBOL(public_633ee70);
CLANG_FORWARD_PROC_SYMBOL(public_633efd0);

#define public_6337111 _public_6337111
#define public_63371d0 _public_63371d0
#define public_633722a _public_633722a

PROC_DECLARE(0x6337060, internal_6337060, public_6337060);
extern "C" NAKED register_t __cdecl internal_6337060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a9bc]
        sub esp, 0x34C
        test eax, eax
        jne public_633722a
        lea eax, ss:[esp]
        push eax
        mov ecx, offset public_658a828
        call public_632c410
        mov ecx, dword ptr ds : [public_658a82c]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a828
        call public_633e970
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_658a83c
        call public_632c410
        mov edx, dword ptr ds : [public_658a840]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_658a83c
        call public_633ed10
        mov eax, dword ptr ds : [public_658a854]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_658a850
        call public_633ee70
        mov eax, dword ptr ds : [public_658a868]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a864
        call public_633efd0
        call public_62b8e20
        mov eax, dword ptr ds : [public_658a9b4]
        test eax, eax
        je public_6337111
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_658a9b4], 0
        public_6337111 : nop
        mov edx, dword ptr ds : [public_639905c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x350]
        push esi
        push edi
        push eax
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        call public_6302df0
        push 0
        push 0
        lea eax, ss:[esp+0x160]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        call dword ptr ds : [public_6399348]
        push 0
        push 0
        lea eax, ss:[esp+0x174]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x280]
        push edx
        call dword ptr ds : [public_6399208]
        mov esi, dword ptr ds : [public_6399034]
        mov edx, dword ptr ds : [esi]
        xor eax, eax
        mov ecx, 0xB
        lea edi, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], offset public_639b84c
        rep stosd
        add esp, 0x34
        test edx, edx
        lea eax, ss:[esp+0x250]
        mov dword ptr ss : [esp+0x24], 0x80000000
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], offset public_639b558
        jne public_63371d0
        public_63371d0 : nop
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[esp+8]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push edx
        call dword ptr ds : [ecx+0xC]
        mov esi, dword ptr ss : [esp+8]
        neg eax
        sbb eax, eax
        not eax
        lea ecx, ss:[esp+0x48]
        and eax, esi
        push ecx
        mov ecx, offset public_658a828
        mov dword ptr ds : [public_658a9b4], eax
        call public_6337250
        test eax, eax
        pop edi
        pop esi
        jne public_633722a
        lea edx, ss:[esp+0x40]
        push edx
        push 0xC2D
/*FIXUP push offset public_63a4b20 @0x6337210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100001
/*FIXUP push offset public_63a4b98 @0x633721a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b98
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_633722a : nop
        mov edx, dword ptr ds : [public_658a9bc]
        mov ecx, dword ptr ds : [public_658a9b4]
        inc edx
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [public_658a9bc], edx
        setne al
        add esp, 0x34C
        ret 
        UNREACHABLE_TRAP(0x6337060)
    }
}

#undef public_6337111
#undef public_63371d0
#undef public_633722a
