#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f60);

#define public_6f52f84 _public_6f52f84
#define public_6f52f9c _public_6f52f9c

PROC_DECLARE(0x6f52f60, internal_6f52f60, public_6f52f60);
extern "C" NAKED register_t __cdecl internal_6f52f60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        sub esi, edx
        test eax, eax
        jne public_6f52f84
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        call public_6f52ee0
        add esp, 8
        pop esi
        ret 
        public_6f52f84 : nop
        dec esi
        test esi, esi
        jg public_6f52f9c
        mov ecx, dword ptr ss : [esp+8]
        neg esi
        push esi
        push eax
        push ecx
        call public_6f52f20
        add esp, 0xC
        pop esi
        ret 
        public_6f52f9c : nop
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0
        push eax
        push edi
        call public_6f52f20
        push esi
        push edi
        call public_6f52ee0
        add esp, 0x14
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52f60)
    }
}

#undef public_6f52f84
#undef public_6f52f9c
