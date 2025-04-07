#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319ac0);

#define public_6319ad9 _public_6319ad9
#define public_6319af0 _public_6319af0
#define public_6319afc _public_6319afc
#define public_6319b00 _public_6319b00
#define public_6319b10 _public_6319b10
#define public_6319b1b _public_6319b1b

PROC_DECLARE(0x6319ac0, internal_6319ac0, public_6319ac0);
extern "C" NAKED register_t __cdecl internal_6319ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x60]
        test dl, dl
        push ebx
        jne public_6319ad9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6319ad9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6319ad9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x61]
        test bl, bl
        jne public_6319b00
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_6319afc
        lea esp, ss:[esp]
        public_6319af0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_6319af0
        public_6319afc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6319b00 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6319b1b
        lea esp, ss:[esp]
        public_6319b10 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6319b10
        public_6319b1b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6319ac0)
    }
}

#undef public_6319ad9
#undef public_6319af0
#undef public_6319afc
#undef public_6319b00
#undef public_6319b10
#undef public_6319b1b
