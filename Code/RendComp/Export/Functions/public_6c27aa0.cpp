#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26700);
CLANG_FORWARD_PROC_SYMBOL(public_6c27aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29190);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c27af3 _public_6c27af3

PROC_DECLARE(0x6c27aa0, internal_6c27aa0, public_6c27aa0);
extern "C" NAKED register_t __cdecl internal_6c27aa0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, dword ptr ds : [esi+0x30]
        jne public_6c27af3
        push edi
        push 0x70
        call public_6c34eac
        mov edi, eax
        xor eax, eax
        mov dword ptr ds : [esi+0x2C], edi
        mov ecx, 0x1C
        rep stosd
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [esi+0x30]
        push ecx
        push edx
        lea eax, ss:[esp+0x14]
        push 1
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call public_6c26700
        add esp, 0x14
        cmp eax, 1
        pop edi
        jne public_6c27af3
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [esi+0x30]
        push ecx
        push edx
        call public_6c29190
        add esp, 8
        public_6c27af3 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c27aa0)
    }
}

#undef public_6c27af3
