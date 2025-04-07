#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f577c0);

#define public_6f577da _public_6f577da
#define public_6f577e7 _public_6f577e7

PROC_DECLARE(0x6f577c0, internal_6f577c0, public_6f577c0);
extern "C" NAKED register_t __cdecl internal_6f577c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        sub esi, 0x31
        js public_6f577da
        mov eax, dword ptr ss : [esp+0xC]
        cmp esi, dword ptr ds : [eax+4]
        jge public_6f577da
        cmp dword ptr ds : [eax+esi*8+0xC], 0xFFFFFFFF
        jne public_6f577e7
/*FIXUP public_6f577da : nop
        push offset public_6f61d14 @0x6f577da*/
  FIXUP public_6f577da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61d14
        call public_6f4c7f0
        add esp, 4
        public_6f577e7 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f577c0)
    }
}

#undef public_6f577da
#undef public_6f577e7
