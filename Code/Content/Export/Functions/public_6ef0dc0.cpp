#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0c90);

#define public_6ef0e23 _public_6ef0e23

PROC_DECLARE(0x6ef0dc0, internal_6ef0dc0, public_6ef0dc0);
extern "C" NAKED register_t __cdecl internal_6ef0dc0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x1C
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        xor bl, bl
        call dword ptr ds : [public_6fb35d8]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 8
        cmp ecx, edx
        je public_6ef0e23
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6ef0c90
        mov bl, al
        test bl, bl
        je public_6ef0e23
        mov esi, dword ptr ss : [esp+0x14]
        push 0x740
        mov ecx, esi
        call dword ptr ds : [public_6fb303c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], 2
        public_6ef0e23 : nop
        xor eax, eax
        test bl, bl
        pop esi
        sete al
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ef0dc0)
    }
}

#undef public_6ef0e23
