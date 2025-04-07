#include "RemoteClient-PCH.h"


#define public_6b316a2 _public_6b316a2

PROC_DECLARE(0x6b31670, internal_6b31670, public_6b31670);
extern "C" NAKED register_t __cdecl internal_6b31670()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x10], 2
        je public_6b316a2
        push edi
        lea edi, ds:[esi+0x18]
        push edi
        call dword ptr ds : [public_6b6b110]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6b6b114]
        pop edi
        public_6b316a2 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b31670)
    }
}

#undef public_6b316a2
