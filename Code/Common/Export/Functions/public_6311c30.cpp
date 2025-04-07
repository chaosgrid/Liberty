#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1250);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_6309b40);
CLANG_FORWARD_PROC_SYMBOL(public_6309b50);
CLANG_FORWARD_PROC_SYMBOL(public_6309b80);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6311c30);
CLANG_FORWARD_PROC_SYMBOL(public_6332f50);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);

#define public_6311c79 _public_6311c79
#define public_6311c9f _public_6311c9f
#define public_6311cf2 _public_6311cf2
#define public_6311cf9 _public_6311cf9
#define public_6311d1a _public_6311d1a
#define public_6311d33 _public_6311d33

PROC_DECLARE(0x6311c30, internal_6311c30, public_6311c30);
extern "C" NAKED register_t __cdecl internal_6311c30()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push 0
        mov ecx, edi
        call public_6309b50
        mov esi, dword ptr ss : [esp+0xC]
        push 0
        mov ecx, esi
        call public_6310a30
        push eax
        call dword ptr ds : [public_6399254]
        add esp, 4
        test eax, eax
        jne public_6311c79
        push eax
        mov ecx, esi
        call public_6310a30
        push eax
        call public_630d3f0
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_62f1250
        add esp, 8
        public_6311c79 : nop
        mov ecx, edi
        push eax
        call public_6309b30
        push 1
        mov ecx, esi
        call public_6310560
        test al, al
        jne public_6311c9f
        push 1
        mov ecx, esi
        call public_63107c0
        push eax
        mov ecx, edi
        call public_633bad0
        public_6311c9f : nop
        push 2
        mov ecx, esi
        call public_6310560
        test al, al
        jne public_6311cf2
        push 2
        mov ecx, esi
        call public_6310a30
        push eax
        call dword ptr ds : [public_63992f0]
        fcomp qword ptr ds : [public_639c430]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jp public_6311d33
        push 2
        mov ecx, esi
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], eax
        call public_6309b40
        jmp public_6311cf9
        public_6311cf2 : nop
        mov ecx, edi
        call public_6309b80
        public_6311cf9 : nop
        push 3
        mov ecx, esi
        call public_6310560
        test al, al
        jne public_6311d1a
        push 3
        mov ecx, esi
        call public_63108f0
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_6332f50
        public_6311d1a : nop
        push 4
        mov ecx, esi
        call public_6310560
        test al, al
        jne public_6311d33
        push 4
        mov ecx, esi
        call public_63105b0
        mov byte ptr ds : [edi+0x18], al
        public_6311d33 : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6311c30)
    }
}

#undef public_6311c79
#undef public_6311c9f
#undef public_6311cf2
#undef public_6311cf9
#undef public_6311d1a
#undef public_6311d33
