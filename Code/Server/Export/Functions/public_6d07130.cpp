#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07130);
CLANG_FORWARD_PROC_SYMBOL(public_6d072c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d07166 _public_6d07166

PROC_DECLARE(0x6d07130, internal_6d07130, public_6d07130);
extern "C" NAKED register_t __cdecl internal_6d07130()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xFC]
        test al, al
        je public_6d07166
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0xFC], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        lea ecx, ss:[esp+4]
        push ecx
        push 0x3D
        mov dword ptr ss : [esp+0xC], eax
        call public_6d43650
        add esp, 8
        mov ecx, esi
        call public_6d072c0
        public_6d07166 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d07130)
    }
}

#undef public_6d07166
