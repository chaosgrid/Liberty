#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43560);

#define public_6f43585 _public_6f43585

PROC_DECLARE(0x6f43560, internal_6f43560, public_6f43560);
extern "C" NAKED register_t __cdecl internal_6f43560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fst dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0xD0]
        mov ecx, dword ptr ds : [ecx+0xCC]
        test ecx, ecx
        je public_6f43585
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        public_6f43585 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f43560)
    }
}

#undef public_6f43585
