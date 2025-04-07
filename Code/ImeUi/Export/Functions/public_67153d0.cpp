#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67153d0);

#define public_67153e0 _public_67153e0
#define public_67153ed _public_67153ed

PROC_DECLARE(0x67153d0, internal_67153d0, public_67153d0);
extern "C" NAKED register_t __cdecl internal_67153d0()
{
    __asm
    {
        cmp dword ptr ds : [public_671b400], 2
        jne public_67153e0
        mov eax, 0xFF000000
        jmp public_67153ed
        public_67153e0 : nop
        mov eax, dword ptr ds : [public_671909c]
        and eax, 0xFF
        shl eax, 0x18
        public_67153ed : nop
        mov ecx, dword ptr ds : [public_6719088]
        mov edx, dword ptr ds : [public_671908c]
        or ecx, eax
        or edx, eax
        mov dword ptr ds : [public_671b534], ecx
        mov ecx, dword ptr ds : [public_6719090]
        or ecx, eax
        mov dword ptr ds : [public_671b538], edx
        mov edx, dword ptr ds : [public_6719094]
        mov dword ptr ds : [public_671b53c], ecx
        mov ecx, dword ptr ds : [public_6719098]
        or edx, eax
        or ecx, eax
        mov dword ptr ds : [public_671b540], edx
        mov dword ptr ds : [public_671b544], ecx
        ret 
        UNREACHABLE_TRAP(0x67153d0)
    }
}

#undef public_67153e0
#undef public_67153ed
