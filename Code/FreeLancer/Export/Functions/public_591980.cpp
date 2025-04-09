#include "FreeLancer-PCH.h"


#define public_591990 _public_591990
#define public_5919b0 _public_5919b0
#define public_5919bd _public_5919bd
#define public_5919c5 _public_5919c5
#define public_5919cf _public_5919cf
#define public_5919d6 _public_5919d6
#define public_5919da _public_5919da
#define public_5919e6 _public_5919e6

PROC_DECLARE(0x591980, internal_591980, public_591980);
extern "C" NAKED register_t __cdecl internal_591980()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebx
        push esi
        je public_5919da
        mov esi, dword ptr ss : [esp+0xC]
        nop 
        public_591990 : nop
        mov ecx, esi
        dec esi
        test ecx, ecx
        je public_5919da
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_5919bd
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_5919d6
        lea esp, ss:[esp]
        public_5919b0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_5919b0
        jmp public_5919d6
        public_5919bd : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_5919cf
        public_5919c5 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_5919c5
        public_5919cf : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_5919d6
        mov eax, ecx
        public_5919d6 : nop
        cmp eax, edx
        jne public_591990
        public_5919da : nop
        cmp eax, edx
        pop esi
        pop ebx
        je public_5919e6
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        public_5919e6 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x591980)
    }
}

#undef public_591990
#undef public_5919b0
#undef public_5919bd
#undef public_5919c5
#undef public_5919cf
#undef public_5919d6
#undef public_5919da
#undef public_5919e6
