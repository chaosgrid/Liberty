#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ed80);

#define public_6293294 _public_6293294

PROC_DECLARE(0x6293270, internal_6293270, public_6293270);
extern "C" NAKED register_t __cdecl internal_6293270()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_629ed80
        test al, al
        je public_6293294
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_6293294
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        setne cl
        mov al, cl
        pop esi
        ret 
        public_6293294 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6293270)
    }
}

#undef public_6293294
