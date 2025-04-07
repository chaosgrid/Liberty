#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d944b _public_62d944b

PROC_DECLARE(0x62d93e0, internal_62d93e0, public_62d93e0);
extern "C" NAKED register_t __cdecl internal_62d93e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+4]
        push eax
        add ecx, 0x18
        mov dword ptr ds : [esi+0x84], 0x47C35000
        mov dword ptr ds : [esi+0x90], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8c20
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62d944b
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9120
        public_62d944b : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d93e0)
    }
}

#undef public_62d944b
