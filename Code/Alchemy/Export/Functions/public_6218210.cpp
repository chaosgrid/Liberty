#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621821f _public_621821f
#define public_6218238 _public_6218238

PROC_DECLARE(0x6218210, internal_6218210, public_6218210);
extern "C" NAKED register_t __cdecl internal_6218210()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_621821f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_621821f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6218238
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6218238 : nop
        ret 4
        UNREACHABLE_TRAP(0x6218210)
    }
}

#undef public_621821f
#undef public_6218238
