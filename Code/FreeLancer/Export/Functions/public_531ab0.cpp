#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_531ac7 _public_531ac7
#define public_531ad7 _public_531ad7
#define public_531ae7 _public_531ae7

PROC_DECLARE(0x531ab0, internal_531ab0, public_531ab0);
extern "C" NAKED register_t __cdecl internal_531ab0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi], offset public_5de13c
        je public_531ac7
        push esi
        call dword ptr ds : [public_5c6938]
        public_531ac7 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_531ad7
        push eax
        call public_536170
        add esp, 4
        public_531ad7 : nop
        test byte ptr ss : [esp+8], 1
        je public_531ae7
        push esi
        call public_5b7e1d
        add esp, 4
        public_531ae7 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x531ab0)
    }
}

#undef public_531ac7
#undef public_531ad7
#undef public_531ae7
