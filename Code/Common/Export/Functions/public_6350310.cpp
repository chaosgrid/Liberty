#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344400);
CLANG_FORWARD_PROC_SYMBOL(public_6350310);

#define public_635033a _public_635033a
#define public_635034a _public_635034a

PROC_DECLARE(0x6350310, internal_6350310, public_6350310);
extern "C" NAKED register_t __cdecl internal_6350310()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC
        jne public_635034a
        and eax, 0xFFFDF7FF
        or eax, 0x10400
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_635033a
        push esi
        call public_6344400
        public_635033a : nop
        mov ecx, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [ecx+0x1C]
        test ecx, ecx
        je public_635034a
        push esi
        call public_6344400
        public_635034a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6350310)
    }
}

#undef public_635033a
#undef public_635034a
