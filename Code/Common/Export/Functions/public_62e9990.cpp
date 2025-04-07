#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9770);
CLANG_FORWARD_PROC_SYMBOL(public_62e9990);

#define public_62e99aa _public_62e99aa
#define public_62e99b4 _public_62e99b4
#define public_62e99ca _public_62e99ca
#define public_62e99cc _public_62e99cc
#define public_62e99fd _public_62e99fd
#define public_62e9a18 _public_62e9a18
#define public_62e9a1a _public_62e9a1a
#define public_62e9a52 _public_62e9a52

PROC_DECLARE(0x62e9990, internal_62e9990, public_62e9990);
extern "C" NAKED register_t __cdecl internal_62e9990()
{
    __asm
    {
        sub esp, 0x100
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_62e99aa
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62e99b4
        public_62e99aa : nop
        xor al, al
        pop esi
        add esp, 0x100
        ret 
        public_62e99b4 : nop
        mov dword ptr ds : [esi+0x830], 0
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_62e99ca
        add ecx, 0xFFFFFFF8
        jmp public_62e99cc
        public_62e99ca : nop
        xor ecx, ecx
        public_62e99cc : nop
        mov eax, dword ptr ds : [ecx]
        push 0x80
        push 0x40
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x114]
        test eax, eax
        jne public_62e99fd
        push eax
        lea eax, ds:[esi+0x30]
        push eax
        push 0x40
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_62e9770
        mov dword ptr ds : [esi+0x830], eax
        public_62e99fd : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov dword ptr ds : [esi+0x1038], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9a18
        lea ecx, ds:[eax-8]
        jmp public_62e9a1a
        public_62e9a18 : nop
        xor ecx, ecx
        public_62e9a1a : nop
        mov edx, dword ptr ds : [ecx]
        push 0x20
        push 0x40
        lea eax, ss:[esp+0x8C]
        push eax
        call dword ptr ds : [edx+0x114]
        test eax, eax
        jne public_62e9a52
        push 1
        lea ecx, ds:[esi+0x838]
        push ecx
        push 0x40
        lea edx, ss:[esp+0x90]
        push edx
        mov ecx, esi
        call public_62e9770
        mov dword ptr ds : [esi+0x1038], eax
        public_62e9a52 : nop
        mov al, 1
        pop esi
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x62e9990)
    }
}

#undef public_62e99aa
#undef public_62e99b4
#undef public_62e99ca
#undef public_62e99cc
#undef public_62e99fd
#undef public_62e9a18
#undef public_62e9a1a
#undef public_62e9a52
