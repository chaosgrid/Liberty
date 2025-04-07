#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6626310);

#define public_6626327 _public_6626327

PROC_DECLARE(0x6626310, internal_6626310, public_6626310);
extern "C" NAKED register_t __cdecl internal_6626310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6626327
        mov eax, offset public_662ace4
        public_6626327 : nop
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6626310)
    }
}

#undef public_6626327
