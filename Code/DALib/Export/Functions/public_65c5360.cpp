#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5360);

#define public_65c53b5 _public_65c53b5
#define public_65c53bd _public_65c53bd

PROC_DECLARE(0x65c5360, internal_65c5360, public_65c5360);
extern "C" NAKED register_t __cdecl internal_65c5360()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 8
        test eax, eax
        je public_65c53bd
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_65c53bd
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push 0x108
        lea esi, ss:[esp+0x14]
        push esi
        push ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 0
        push 1
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x28]
        lea esi, ss:[esp+0x18]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x38]
        test eax, eax
        pop esi
        je public_65c53b5
        cmp eax, 0x15800E
        jne public_65c53bd
        public_65c53b5 : nop
        mov al, 1
        add esp, 8
        ret 0xC
        public_65c53bd : nop
        xor al, al
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x65c5360)
    }
}

#undef public_65c53b5
#undef public_65c53bd
