#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411af0);

#define public_411b09 _public_411b09
#define public_411b20 _public_411b20
#define public_411b2c _public_411b2c
#define public_411b30 _public_411b30
#define public_411b40 _public_411b40
#define public_411b4b _public_411b4b

PROC_DECLARE(0x411af0, internal_411af0, public_411af0);
extern "C" NAKED register_t __cdecl internal_411af0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_411b09
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_411b09
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_411b09 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_411b30
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_411b2c
        lea esp, ss:[esp]
        public_411b20 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_411b20
        public_411b2c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_411b30 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_411b4b
        lea esp, ss:[esp]
        public_411b40 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_411b40
        public_411b4b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x411af0)
    }
}

#undef public_411b09
#undef public_411b20
#undef public_411b2c
#undef public_411b30
#undef public_411b40
#undef public_411b4b
