#include "RemoteServer-PCH.h"


#define public_6bd6342 _public_6bd6342

PROC_DECLARE(0x6bd6310, internal_6bd6310, public_6bd6310);
extern "C" NAKED register_t __cdecl internal_6bd6310()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x10], 2
        je public_6bd6342
        push edi
        lea edi, ds:[esi+0x18]
        push edi
        call dword ptr ds : [public_6c0b144]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6c0b140]
        pop edi
        public_6bd6342 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd6310)
    }
}

#undef public_6bd6342
