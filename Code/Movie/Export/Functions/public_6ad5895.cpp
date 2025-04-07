#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5895);
CLANG_FORWARD_PROC_SYMBOL(public_6ad58fa);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8780);
CLANG_FORWARD_PROC_SYMBOL(public_6ad87df);

#define public_6ad58e2 _public_6ad58e2

PROC_DECLARE(0x6ad5895, internal_6ad5895, public_6ad5895);
extern "C" NAKED register_t __cdecl internal_6ad5895()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [public_6ae2580]
        jae public_6ad58e2
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        test byte ptr ds : [ecx+eax*4+4], 1
        je public_6ad58e2
        push edi
        push esi
        call public_6ad8780
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push esi
        call public_6ad58fa
        push esi
        mov edi, eax
        call public_6ad87df
        add esp, 0x14
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_6ad58e2 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        call public_6ad24e7
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad5895)
    }
}

#undef public_6ad58e2
