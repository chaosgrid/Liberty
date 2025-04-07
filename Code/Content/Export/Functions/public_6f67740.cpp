#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67740);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c250);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e810);

#define public_6f67774 _public_6f67774

PROC_DECLARE(0x6f67740, internal_6f67740, public_6f67740);
extern "C" NAKED register_t __cdecl internal_6f67740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push esi
        push edi
        call dword ptr ds : [public_6fb3584]
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        test eax, eax
        jne public_6f67774
        mov edx, dword ptr ds : [edi]
        push 0
        push 0
        push edx
        call public_6f6e810
        add esp, 0xC
        public_6f67774 : nop
        pop edi
        pop esi
        jmp public_6f6c250
        UNREACHABLE_TRAP(0x6f67740)
    }
}

#undef public_6f67774
