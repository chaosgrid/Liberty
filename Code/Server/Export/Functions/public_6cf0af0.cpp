#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e120);

#define public_6cf0b42 _public_6cf0b42

PROC_DECLARE(0x6cf0af0, internal_6cf0af0, public_6cf0af0);
extern "C" NAKED register_t __cdecl internal_6cf0af0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax+edx-0x34]
        jne public_6cf0b42
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0b42
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6cf0b42
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_6d0e120
        public_6cf0b42 : nop
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6cf0af0)
    }
}

#undef public_6cf0b42
