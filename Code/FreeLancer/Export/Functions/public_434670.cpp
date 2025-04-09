#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433f40);
CLANG_FORWARD_PROC_SYMBOL(public_434310);
CLANG_FORWARD_PROC_SYMBOL(public_434670);

#define public_4346c3 _public_4346c3

PROC_DECLARE(0x434670, internal_434670, public_434670);
extern "C" NAKED register_t __cdecl internal_434670()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        push esi
        push 0
        push edi
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        push ebp
        push ecx
        mov byte ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x31], 0
        mov byte ptr ss : [esp+0x32], 0
        mov byte ptr ss : [esp+0x33], 0
        call public_433f40
        add esp, 0x20
        or esi, 0x8100
        test bl, bl
        jne public_4346c3
        or esi, 0x2000
        public_4346c3 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push 1
        push edx
        push esi
        push 1
        push ebp
        push eax
        call public_434310
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x434670)
    }
}

#undef public_4346c3
