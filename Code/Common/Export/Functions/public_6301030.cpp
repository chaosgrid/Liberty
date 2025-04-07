#include "Common-PCH.h"


#define public_630105a _public_630105a
#define public_630105c _public_630105c
#define public_6301069 _public_6301069
#define public_6301072 _public_6301072
#define public_630107b _public_630107b
#define public_6301081 _public_6301081

PROC_DECLARE(0x6301030, internal_6301030, public_6301030);
extern "C" NAKED register_t __cdecl internal_6301030()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push edi
        cmp edx, dword ptr ds : [ecx]
        mov al, 1
        jne public_630105a
        mov edx, dword ptr ds : [esi+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_630105a
        mov edx, dword ptr ds : [esi+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_630105a
        mov edx, dword ptr ds : [esi+0xC]
        cmp edx, dword ptr ds : [ecx+0xC]
        je public_630105c
        public_630105a : nop
        xor al, al
        public_630105c : nop
        mov edi, dword ptr ds : [esi+0x30]
        cmp edi, dword ptr ds : [ecx+0x30]
        je public_6301069
        pop edi
        xor al, al
        pop esi
        ret 
        public_6301069 : nop
        test edi, edi
        jle public_6301081
        lea edx, ds:[ecx+0x10]
        sub esi, ecx
        public_6301072 : nop
        mov ecx, dword ptr ds : [esi+edx]
        cmp ecx, dword ptr ds : [edx]
        je public_630107b
        xor al, al
        public_630107b : nop
        add edx, 4
        dec edi
        jne public_6301072
        public_6301081 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6301030)
    }
}

#undef public_630105a
#undef public_630105c
#undef public_6301069
#undef public_6301072
#undef public_630107b
#undef public_6301081
