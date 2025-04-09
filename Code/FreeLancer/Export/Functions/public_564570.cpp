#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285f0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_564570);

#define public_5645af _public_5645af

PROC_DECLARE(0x564570, internal_564570, public_564570);
extern "C" NAKED register_t __cdecl internal_564570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax*4+public_67a4a8]
        test ecx, ecx
        push esi
        lea esi, ds : [eax*4+public_67a4a8]
        jne public_5645af
        mov eax, dword ptr ds : [eax*4+public_6149e8]
        push eax
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        call public_42ae40
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_5645af : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push 0
        push eax
        call public_4285f0
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x564570)
    }
}

#undef public_5645af
