#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368180);
CLANG_FORWARD_PROC_SYMBOL(public_63681d0);
CLANG_FORWARD_PROC_SYMBOL(public_6368230);

#define public_6368239 _public_6368239
#define public_636824a _public_636824a

PROC_DECLARE(0x6368230, internal_6368230, public_6368230);
extern "C" NAKED register_t __cdecl internal_6368230()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        js public_636824a
        public_6368239 : nop
        dec eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+eax*4+4]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edx+eax*4+4], ecx
        jns public_6368239
        public_636824a : nop
        mov ecx, esi
        call public_6368180
        mov ecx, esi
        call public_63681d0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6368230)
    }
}

#undef public_6368239
#undef public_636824a
