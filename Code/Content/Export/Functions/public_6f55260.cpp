#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55260);

#define public_6f55280 _public_6f55280
#define public_6f5528e _public_6f5528e
#define public_6f55292 _public_6f55292
#define public_6f552a0 _public_6f552a0
#define public_6f552ac _public_6f552ac
#define public_6f552b5 _public_6f552b5

PROC_DECLARE(0x6f55260, internal_6f55260, public_6f55260);
extern "C" NAKED register_t __cdecl internal_6f55260()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x109]
        test bl, bl
        jne public_6f55292
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x109]
        test bl, bl
        jne public_6f5528e
        lea esp, ss:[esp]
        public_6f55280 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x109]
        test bl, bl
        je public_6f55280
        public_6f5528e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f55292 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f552ac
        lea esp, ss:[esp]
        public_6f552a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f552a0
        public_6f552ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f552b5
        mov dword ptr ds : [ecx], eax
        public_6f552b5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55260)
    }
}

#undef public_6f55280
#undef public_6f5528e
#undef public_6f55292
#undef public_6f552a0
#undef public_6f552ac
#undef public_6f552b5
