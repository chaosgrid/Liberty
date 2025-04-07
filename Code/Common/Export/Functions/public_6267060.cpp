#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267e10);

#define public_626707a _public_626707a
#define public_6267081 _public_6267081

PROC_DECLARE(0x6267060, internal_6267060, public_6267060);
extern "C" NAKED register_t __cdecl internal_6267060()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_626707a
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        cmp eax, edi
        ja public_6267081
        public_626707a : nop
        mov ecx, esi
        call public_6267e10
        public_6267081 : nop
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+edi*2]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6267060)
    }
}

#undef public_626707a
#undef public_6267081
