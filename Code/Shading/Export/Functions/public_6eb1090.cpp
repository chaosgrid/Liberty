#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6eb109f _public_6eb109f
#define public_6eb10b8 _public_6eb10b8

PROC_DECLARE(0x6eb1090, internal_6eb1090, public_6eb1090);
extern "C" NAKED register_t __cdecl internal_6eb1090()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6eb109f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6eb109f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6eb10b8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6ed0c50
        add esp, 4
        xor eax, eax
        public_6eb10b8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6eb1090)
    }
}

#undef public_6eb109f
#undef public_6eb10b8
