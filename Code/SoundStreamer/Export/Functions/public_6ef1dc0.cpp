#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1dc0);

#define public_6ef1de1 _public_6ef1de1
#define public_6ef1de7 _public_6ef1de7

PROC_DECLARE(0x6ef1dc0, internal_6ef1dc0, public_6ef1dc0);
extern "C" NAKED register_t __cdecl internal_6ef1dc0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        je public_6ef1de1
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        mov eax, dword ptr ss : [esp+4]
        jge public_6ef1de7
        public_6ef1de1 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        public_6ef1de7 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef1dc0)
    }
}

#undef public_6ef1de1
#undef public_6ef1de7
