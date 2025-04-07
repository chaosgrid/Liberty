#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f524e0);

#define public_6f4ccf3 _public_6f4ccf3

PROC_DECLARE(0x6f4cce0, internal_6f4cce0, public_6f4cce0);
extern "C" NAKED register_t __cdecl internal_6f4cce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x114
        test eax, eax
        jne public_6f4ccf3
        mov eax, offset public_6f60590
        public_6f4ccf3 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x11C]
        push eax
        mov eax, dword ptr ss : [esp+0x124]
        push eax
        lea ecx, ss:[esp+0xC]
        push esi
        push ecx
        call public_6f524e0
        mov al, byte ptr ds : [esi]
        xor edx, edx
        cmp al, 0x1B
        sete dl
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        call public_6f4cae0
        add esp, 0x18
        pop esi
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x6f4cce0)
    }
}

#undef public_6f4ccf3
