#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_40e990);

#define public_40c7e8 _public_40c7e8
#define public_40c7f9 _public_40c7f9
#define public_40c801 _public_40c801

PROC_DECLARE(0x40c7d0, internal_40c7d0, public_40c7d0);
extern "C" NAKED register_t __cdecl internal_40c7d0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        dec dword ptr ds : [ebx+0xB0]
        jne public_40c801
        push esi
        push edi
        lea esi, ds:[ebx+0xB4]
        mov edi, 5
        public_40c7e8 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_40c7f9
        call public_40e990
        mov dword ptr ds : [esi], 0
        public_40c7f9 : nop
        add esi, 4
        dec edi
        jne public_40c7e8
        pop edi
        pop esi
        public_40c801 : nop
        mov eax, dword ptr ds : [ebx+0xB0]
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x40c7d0)
    }
}

#undef public_40c7e8
#undef public_40c7f9
#undef public_40c801
