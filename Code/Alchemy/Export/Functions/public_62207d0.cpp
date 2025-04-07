#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222000);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);

#define public_6220823 _public_6220823

PROC_DECLARE(0x62207d0, internal_62207d0, public_62207d0);
extern "C" NAKED register_t __cdecl internal_62207d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        push eax
        mov esi, ecx
        call public_623ef70
        mov edi, dword ptr ds : [esi+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        add esi, 4
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6222000
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        cmp eax, esi
        je public_6220823
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edx, ecx
        jb public_6220823
        lea eax, ss:[esp+8]
        xor ecx, ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        pop edi
        setne cl
        mov al, cl
        pop esi
        pop ecx
        ret 4
        public_6220823 : nop
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], esi
        xor ecx, ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        pop edi
        setne cl
        mov al, cl
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62207d0)
    }
}

#undef public_6220823
