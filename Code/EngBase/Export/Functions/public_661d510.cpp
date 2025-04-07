#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d510);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661d564 _public_661d564

PROC_DECLARE(0x661d510, internal_661d510, public_661d510);
extern "C" NAKED register_t __cdecl internal_661d510()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_662b0f8]
        mov dword ptr ss : [esp+0x18], ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], edx
        jne public_661d564
        call public_6628190
        mov dword ptr ds : [public_662b0f8], eax
        public_661d564 : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x661d510)
    }
}

#undef public_661d564
