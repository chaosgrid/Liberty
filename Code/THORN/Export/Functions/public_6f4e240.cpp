#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e240);

#define public_6f4e265 _public_6f4e265
#define public_6f4e26c _public_6f4e26c
#define public_6f4e272 _public_6f4e272

PROC_DECLARE(0x6f4e240, internal_6f4e240, public_6f4e240);
extern "C" NAKED register_t __cdecl internal_6f4e240()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, 0xFFFFFFF9
        je public_6f4e26c
        cmp eax, 0xFFFFFFFD
        je public_6f4e265
        test eax, eax
        jne public_6f4e272
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x10]
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        and eax, ecx
        ret 
        public_6f4e265 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x14]
        ret 
        public_6f4e26c : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x10]
        public_6f4e272 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4e240)
    }
}

#undef public_6f4e265
#undef public_6f4e26c
#undef public_6f4e272
