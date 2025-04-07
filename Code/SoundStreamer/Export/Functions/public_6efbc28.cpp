#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6efbc28);

#define public_6efbc51 _public_6efbc51

PROC_DECLARE(0x6efbc28, internal_6efbc28, public_6efbc28);
extern "C" NAKED register_t __cdecl internal_6efbc28()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x83
        je public_6efbc51
        test al, 8
        je public_6efbc51
        push dword ptr ds : [esi+8]
        call public_6ef4512
        and word ptr ds : [esi+0xC], 0xFBF7
        xor eax, eax
        pop ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        public_6efbc51 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efbc28)
    }
}

#undef public_6efbc51
