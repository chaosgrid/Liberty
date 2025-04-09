#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5687e0);

#define public_5687f0 _public_5687f0
#define public_568801 _public_568801

PROC_DECLARE(0x5687e0, internal_5687e0, public_5687e0);
extern "C" NAKED register_t __cdecl internal_5687e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jle public_568801
        push edi
        mov edi, dword ptr ds : [public_5c6000]
        public_5687f0 : nop
        dec eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [esi+eax*4+4]
        push eax
        call edi
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jg public_5687f0
        pop edi
        public_568801 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5687e0)
    }
}

#undef public_5687f0
#undef public_568801
