#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_62814b0);

#define public_62814e1 _public_62814e1

PROC_DECLARE(0x62814b0, internal_62814b0, public_62814b0);
extern "C" NAKED register_t __cdecl internal_62814b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov byte ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi], offset public_639b864
        call public_6262d50
        test eax, eax
        je public_62814e1
        mov al, byte ptr ds : [eax+0x39]
        mov byte ptr ds : [esi+0x10], al
        public_62814e1 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62814b0)
    }
}

#undef public_62814e1
