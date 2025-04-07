#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6efb5e8);
CLANG_FORWARD_PROC_SYMBOL(public_6efbac8);
CLANG_FORWARD_PROC_SYMBOL(public_6efbb75);
CLANG_FORWARD_PROC_SYMBOL(public_6efbc28);

#define public_6efbadd _public_6efbadd
#define public_6efbb03 _public_6efbb03
#define public_6efbb15 _public_6efbb15
#define public_6efbb17 _public_6efbb17

PROC_DECLARE(0x6efbac8, internal_6efbac8, public_6efbac8);
extern "C" NAKED register_t __cdecl internal_6efbac8()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or edi, 0xFFFFFFFF
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x40
        je public_6efbadd
        or eax, 0xFFFFFFFF
        jmp public_6efbb17
        public_6efbadd : nop
        test al, 0x83
        je public_6efbb15
        push esi
        call public_6efb5e8
        push esi
        mov edi, eax
        call public_6efbc28
        push dword ptr ds : [esi+0x10]
        call public_6efbb75
        add esp, 0xC
        test eax, eax
        jge public_6efbb03
        or edi, 0xFFFFFFFF
        jmp public_6efbb15
        public_6efbb03 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6efbb15
        push eax
        call public_6ef4512
        and dword ptr ds : [esi+0x1C], 0
        pop ecx
        public_6efbb15 : nop
        mov eax, edi
        public_6efbb17 : nop
        and dword ptr ds : [esi+0xC], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efbac8)
    }
}

#undef public_6efbadd
#undef public_6efbb03
#undef public_6efbb15
#undef public_6efbb17
