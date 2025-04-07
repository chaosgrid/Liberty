#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33247);

#define public_6d33257 _public_6d33257
#define public_6d33264 _public_6d33264

PROC_DECLARE(0x6d33247, internal_6d33247, public_6d33247);
extern "C" NAKED register_t __cdecl internal_6d33247()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d33257
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d33257 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        pop esi
        je public_6d33264
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d33264 : nop
        ret 
        UNREACHABLE_TRAP(0x6d33247)
    }
}

#undef public_6d33257
#undef public_6d33264
