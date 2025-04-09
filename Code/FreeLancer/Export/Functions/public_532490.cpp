#include "FreeLancer-PCH.h"


#define public_5324b9 _public_5324b9
#define public_5324bb _public_5324bb
#define public_532504 _public_532504
#define public_532506 _public_532506
#define public_532515 _public_532515

PROC_DECLARE(0x532490, internal_532490, public_532490);
extern "C" NAKED register_t __cdecl internal_532490()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_532515
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_532515
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_532515
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5324b9
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edx+4]
        jmp public_5324bb
        public_5324b9 : nop
        xor eax, eax
        public_5324bb : nop
        mov dl, byte ptr ds : [eax+0x58]
        test dl, dl
        je public_532515
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_532515
        add eax, 0xC
        test eax, eax
        je public_532515
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        je public_532515
        mov edx, dword ptr ds : [edx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_532515
        test eax, eax
        je public_532504
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_532504
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_532506
        public_532504 : nop
        xor eax, eax
        public_532506 : nop
        fld dword ptr ds : [eax+0x29C]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0xC]
        public_532515 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x532490)
    }
}

#undef public_5324b9
#undef public_5324bb
#undef public_532504
#undef public_532506
#undef public_532515
