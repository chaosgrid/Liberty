#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);

#define public_6ebe590 _public_6ebe590
#define public_6ebe5ae _public_6ebe5ae

PROC_DECLARE(0x6ebe560, internal_6ebe560, public_6ebe560);
extern "C" NAKED register_t __cdecl internal_6ebe560()
{
    __asm
    {
        push esi
        mov esi, ecx
        inc dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        je public_6ebe5ae
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jbe public_6ebe5ae
        xor edi, edi
        nop 
        lea esp, ss:[esp]
        public_6ebe590 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_6ebe5ae
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_6ebe5ae
        mov ecx, dword ptr ds : [ecx+edi*4]
        call public_6ebe560
        inc edi
        jmp public_6ebe590
        public_6ebe5ae : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ebe560)
    }
}

#undef public_6ebe590
#undef public_6ebe5ae
