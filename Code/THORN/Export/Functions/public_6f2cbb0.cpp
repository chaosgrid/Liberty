#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cbb0);

#define public_6f2cc10 _public_6f2cc10
#define public_6f2cc3f _public_6f2cc3f
#define public_6f2cc44 _public_6f2cc44

PROC_DECLARE(0x6f2cbb0, internal_6f2cbb0, public_6f2cbb0);
extern "C" NAKED register_t __cdecl internal_6f2cbb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ds : [public_6f5a070]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        sub ecx, eax
        push ecx
        add edx, eax
        push edx
        call edi
        add esp, 0x10
        test eax, eax
        jge public_6f2cc3f
        mov ecx, esi
        call public_6f2ca80
        test eax, eax
        jne public_6f2cc44
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        sub ecx, eax
        push ecx
        add edx, eax
        push edx
        call edi
        add esp, 0x10
        test eax, eax
        jge public_6f2cc3f
        nop 
        lea esp, ss:[esp]
        public_6f2cc10 : nop
        mov eax, dword ptr ds : [esi+8]
        shl eax, 1
        push eax
        mov ecx, esi
        call public_6f2cac0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        sub ecx, eax
        push ecx
        add edx, eax
        push edx
        call edi
        add esp, 0x10
        test eax, eax
        jl public_6f2cc10
        public_6f2cc3f : nop
        add dword ptr ds : [esi+0xC], eax
        xor eax, eax
        public_6f2cc44 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2cbb0)
    }
}

#undef public_6f2cc10
#undef public_6f2cc3f
#undef public_6f2cc44
