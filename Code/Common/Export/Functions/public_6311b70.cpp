#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1250);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_6309b40);
CLANG_FORWARD_PROC_SYMBOL(public_6309b50);
CLANG_FORWARD_PROC_SYMBOL(public_6309b80);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6311b70);
CLANG_FORWARD_PROC_SYMBOL(public_6332f50);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);

#define public_6311bc2 _public_6311bc2
#define public_6311bfd _public_6311bfd
#define public_6311c04 _public_6311c04
#define public_6311c25 _public_6311c25

PROC_DECLARE(0x6311b70, internal_6311b70, public_6311b70);
extern "C" NAKED register_t __cdecl internal_6311b70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push 1
        mov ecx, esi
        call public_6309b50
        push 1
        mov ecx, esi
        call public_633bad0
        mov edi, dword ptr ss : [esp+0xC]
        push 0
        mov ecx, edi
        call public_6310a30
        push eax
        call dword ptr ds : [public_6399254]
        add esp, 4
        test eax, eax
        jne public_6311bc2
        push eax
        mov ecx, edi
        call public_6310a30
        push eax
        call public_630d3f0
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_62f1250
        add esp, 8
        public_6311bc2 : nop
        mov ecx, esi
        push eax
        call public_6309b30
        push 1
        mov ecx, edi
        call public_6310560
        test al, al
        jne public_6311bfd
        push 1
        mov ecx, edi
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6309b40
        jmp public_6311c04
        public_6311bfd : nop
        mov ecx, esi
        call public_6309b80
        public_6311c04 : nop
        push 2
        mov ecx, edi
        call public_6310560
        test al, al
        jne public_6311c25
        push 2
        mov ecx, edi
        call public_63108f0
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_6332f50
        public_6311c25 : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6311b70)
    }
}

#undef public_6311bc2
#undef public_6311bfd
#undef public_6311c04
#undef public_6311c25
