#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457380);

#define public_4573a1 _public_4573a1
#define public_4573a3 _public_4573a3

PROC_DECLARE(0x457380, internal_457380, public_457380);
extern "C" NAKED register_t __cdecl internal_457380()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x80]
        push ebx
        xor bl, bl
        test ecx, ecx
        je public_4573a1
        mov dl, byte ptr ds : [eax+0x78]
        test dl, dl
        je public_4573a1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x74]
        test al, al
        mov al, 1
        jne public_4573a3
        public_4573a1 : nop
        mov al, bl
        public_4573a3 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x457380)
    }
}

#undef public_4573a1
#undef public_4573a3
