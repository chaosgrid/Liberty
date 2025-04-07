#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8780);
CLANG_FORWARD_PROC_SYMBOL(public_6ad87df);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9603);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9660);

#define public_6ad9648 _public_6ad9648

PROC_DECLARE(0x6ad9603, internal_6ad9603, public_6ad9603);
extern "C" NAKED register_t __cdecl internal_6ad9603()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [public_6ae2580]
        jae public_6ad9648
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        test byte ptr ds : [ecx+eax*4+4], 1
        je public_6ad9648
        push edi
        push esi
        call public_6ad8780
        push esi
        call public_6ad9660
        push esi
        mov edi, eax
        call public_6ad87df
        add esp, 0xC
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_6ad9648 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        call public_6ad24e7
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad9603)
    }
}

#undef public_6ad9648
