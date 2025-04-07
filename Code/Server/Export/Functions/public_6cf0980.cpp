#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf09cc _public_6cf09cc

PROC_DECLARE(0x6cf0980, internal_6cf0980, public_6cf0980);
extern "C" NAKED register_t __cdecl internal_6cf0980()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf09cc
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_6cf09cc
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf09cc
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [edi+6]
        lea ecx, ds:[esi+4]
        add edi, 4
        push edx
        push edi
        call dword ptr ds : [eax+0x4C]
        public_6cf09cc : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0980)
    }
}

#undef public_6cf09cc
