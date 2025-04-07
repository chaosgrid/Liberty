#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e940);

#define public_620e94a _public_620e94a
#define public_620e94c _public_620e94c
#define public_620e960 _public_620e960

PROC_DECLARE(0x620e940, internal_620e940, public_620e940);
extern "C" NAKED register_t __cdecl internal_620e940()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_620e94a
        lea esi, ds:[ecx+4]
        jmp public_620e94c
        public_620e94a : nop
        xor esi, esi
        public_620e94c : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_620e960
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_620e960 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620e940)
    }
}

#undef public_620e94a
#undef public_620e94c
#undef public_620e960
