#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f430);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f620);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);

#define public_6f34acb _public_6f34acb

PROC_DECLARE(0x6f34a80, internal_6f34a80, public_6f34a80);
extern "C" NAKED register_t __cdecl internal_6f34a80()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push esi
        push eax
        call public_6f50650
        mov esi, eax
        add esp, 4
        xor al, al
        test esi, esi
        je public_6f34acb
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+0xC4]
        push ecx
        push ebx
        mov ecx, esi
        call public_6f4f430
        add edi, 0xF8
        xor edx, edx
        cmp ebx, 1
        setne dl
        push edi
        mov ecx, esi
        inc edx
        push edx
        call public_6f4f620
        pop edi
        mov al, 1
        pop ebx
        public_6f34acb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f34a80)
    }
}

#undef public_6f34acb
