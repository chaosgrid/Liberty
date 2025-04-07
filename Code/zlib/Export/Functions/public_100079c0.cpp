#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100079c0);

#define public_100079c3 _public_100079c3

PROC_DECLARE(0x100079c0, internal_100079c0, public_100079c0);
extern "C" NAKED register_t __cdecl internal_100079c0()
{
    __asm
    {
        xor eax, eax
        push esi
        public_100079c3 : nop
        mov esi, ecx
        and esi, 1
        or eax, esi
        shr ecx, 1
        shl eax, 1
        dec edx
        test edx, edx
        jg public_100079c3
        shr eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x100079c0)
    }
}

#undef public_100079c3
