#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542390);

#define public_5423c0 _public_5423c0
#define public_5423d3 _public_5423d3
#define public_5423f4 _public_5423f4
#define public_542400 _public_542400
#define public_542407 _public_542407

PROC_DECLARE(0x542390, internal_542390, public_542390);
extern "C" NAKED register_t __cdecl internal_542390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_542407
        mov edx, dword ptr ds : [eax+0x18]
        cmp edx, edi
        push esi
        jne public_5423d3
        mov edx, dword ptr ds : [eax+0x14]
        cmp edx, edi
        mov dword ptr ds : [ecx+4], edx
        je public_5423c0
        mov dword ptr ds : [edx+0x18], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ecx]
        pop esi
        dec eax
        mov dword ptr ds : [ecx], eax
        pop edi
        ret 4
        public_5423c0 : nop
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ecx]
        pop esi
        dec eax
        mov dword ptr ds : [ecx], eax
        pop edi
        ret 4
        public_5423d3 : nop
        mov esi, dword ptr ds : [eax+0x14]
        cmp esi, edi
        jne public_5423f4
        cmp edx, edi
        mov dword ptr ds : [ecx+8], edx
        je public_542400
        mov dword ptr ds : [edx+0x14], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ecx]
        pop esi
        dec eax
        mov dword ptr ds : [ecx], eax
        pop edi
        ret 4
        public_5423f4 : nop
        mov dword ptr ds : [edx+0x14], esi
        mov edx, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx+0x18], esi
        public_542400 : nop
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        pop esi
        public_542407 : nop
        dec dword ptr ds : [ecx]
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x542390)
    }
}

#undef public_5423c0
#undef public_5423d3
#undef public_5423f4
#undef public_542400
#undef public_542407
