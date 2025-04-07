#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329f70);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6329c29 _public_6329c29

PROC_DECLARE(0x6329bf0, internal_6329bf0, public_6329bf0);
extern "C" NAKED register_t __cdecl internal_6329bf0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0xC]
        push eax
        lea edx, ss:[esp+4]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_6329f70
        test al, al
        je public_6329c29
        fld dword ptr ss : [esp+8]
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        pop ecx
        ret 0xC
        public_6329c29 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], 0
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6329bf0)
    }
}

#undef public_6329c29
