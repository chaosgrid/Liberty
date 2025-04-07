#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11a0a);

#define public_6f1187f _public_6f1187f
#define public_6f11898 _public_6f11898

PROC_DECLARE(0x6f11870, internal_6f11870, public_6f11870);
extern "C" NAKED register_t __cdecl internal_6f11870()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f1187f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f1187f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f11898
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6f11a0a
        add esp, 4
        xor eax, eax
        public_6f11898 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f11870)
    }
}

#undef public_6f1187f
#undef public_6f11898
