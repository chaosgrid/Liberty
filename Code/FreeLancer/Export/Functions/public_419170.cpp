#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_419185 _public_419185
#define public_419196 _public_419196
#define public_4191c1 _public_4191c1
#define public_4191c4 _public_4191c4

PROC_DECLARE(0x419170, internal_419170, public_419170);
extern "C" NAKED register_t __cdecl internal_419170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        dec eax
        mov dword ptr ds : [ecx+0x2C], eax
        jne public_4191c4
        mov eax, dword ptr ds : [public_6166a0]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4191c1
        public_419185 : nop
        lea edx, ds:[esi+8]
        cmp ecx, edx
        je public_419196
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_419185
        xor eax, eax
        pop esi
        ret 
        public_419196 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_419100
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6166a4]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_6166a4], eax
        public_4191c1 : nop
        xor eax, eax
        pop esi
        public_4191c4 : nop
        ret 
        UNREACHABLE_TRAP(0x419170)
    }
}

#undef public_419185
#undef public_419196
#undef public_4191c1
#undef public_4191c4
