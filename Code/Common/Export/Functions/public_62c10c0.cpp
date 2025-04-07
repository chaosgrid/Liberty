#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4f00);

#define public_62c10ef _public_62c10ef

PROC_DECLARE(0x62c10c0, internal_62c10c0, public_62c10c0);
extern "C" NAKED register_t __cdecl internal_62c10c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62c10ef
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c10ef
        call public_62b4f00
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_62c10ef : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62c10c0)
    }
}

#undef public_62c10ef
