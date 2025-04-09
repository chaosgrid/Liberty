#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285f0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_564650);

#define public_564692 _public_564692

PROC_DECLARE(0x564650, internal_564650, public_564650);
extern "C" NAKED register_t __cdecl internal_564650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax*4+public_67a4a8]
        sub esp, 0x18
        test ecx, ecx
        push esi
        lea esi, ds : [eax*4+public_67a4a8]
        jne public_564692
        mov eax, dword ptr ds : [eax*4+public_6149e8]
        push eax
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_42ae40
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_564692 : nop
        mov al, byte ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        and al, 0xF8
        or al, 1
        mov byte ptr ss : [esp+8], al
        push 0
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_4285f0
        add esp, 0xC
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x564650)
    }
}

#undef public_564692
