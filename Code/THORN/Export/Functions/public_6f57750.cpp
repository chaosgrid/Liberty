#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57750);

#define public_6f5775e _public_6f5775e
#define public_6f5776b _public_6f5776b
#define public_6f5777a _public_6f5777a

PROC_DECLARE(0x6f57750, internal_6f57750, public_6f57750);
extern "C" NAKED register_t __cdecl internal_6f57750()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        js public_6f5776b
        lea ecx, ds:[ecx+eax*8+0xC]
        public_6f5775e : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_6f5777a
        dec eax
        sub ecx, 8
        test eax, eax
        jge public_6f5775e
/*FIXUP public_6f5776b : nop
        push offset public_6f61cfc @0x6f5776b*/
  FIXUP public_6f5776b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61cfc
        call public_6f4c7f0
        add esp, 4
        xor eax, eax
        public_6f5777a : nop
        ret 
        UNREACHABLE_TRAP(0x6f57750)
    }
}

#undef public_6f5775e
#undef public_6f5776b
#undef public_6f5777a
