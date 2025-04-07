#include "EngBase-PCH.h"


#define public_66224f5 _public_66224f5
#define public_66224f9 _public_66224f9
#define public_66224fc _public_66224fc
#define public_66224ff _public_66224ff
#define public_662250b _public_662250b
#define public_6622512 _public_6622512

PROC_DECLARE(0x66224d0, internal_66224d0, public_66224d0);
extern "C" NAKED register_t __cdecl internal_66224d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, eax
        inc edx
        neg edx
        sbb edx, edx
        and edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, eax
        inc ecx
        neg ecx
        sbb ecx, ecx
        and ecx, eax
        test edx, edx
        je public_66224f9
        test ecx, ecx
        jne public_66224ff
        mov eax, dword ptr ds : [edx+0x1C]
        public_66224f5 : nop
        test eax, eax
        jne public_66224fc
        public_66224f9 : nop
        or eax, 0xFFFFFFFF
        public_66224fc : nop
        ret 0x10
        public_66224ff : nop
        test byte ptr ss : [esp+0xC], 1
        je public_662250b
        mov eax, dword ptr ds : [ecx+0x14]
        jmp public_66224f5
        public_662250b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jne public_66224fc
        public_6622512 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_66224fc
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_66224f9
        cmp ecx, edx
        jne public_6622512
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x66224d0)
    }
}

#undef public_66224f5
#undef public_66224f9
#undef public_66224fc
#undef public_66224ff
#undef public_662250b
#undef public_6622512
