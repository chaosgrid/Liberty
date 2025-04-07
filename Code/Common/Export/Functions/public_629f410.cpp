#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae00);

#define public_629f434 _public_629f434
#define public_629f43a _public_629f43a
#define public_629f460 _public_629f460
#define public_629f491 _public_629f491
#define public_629f497 _public_629f497
#define public_629f4ba _public_629f4ba
#define public_629f4c0 _public_629f4c0

PROC_DECLARE(0x629f410, internal_629f410, public_629f410);
extern "C" NAKED register_t __cdecl internal_629f410()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629f4c0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_629f434
        fld dword ptr ds : [public_6399408]
        jmp public_629f43a
        public_629f434 : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+0x74]
        public_629f43a : nop
        fmul dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+4]
        fadd dword ptr ds : [ecx+0x198]
        fld dword ptr ds : [ecx+0x19C]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_629f460
        fstp st(0)
        fld dword ptr ds : [ecx+0x19C]
        public_629f460 : nop
        fstp dword ptr ds : [ecx+0x198]
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_629f4c0
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_629f4c0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_629f491
        fld dword ptr ds : [public_6399408]
        jmp public_629f497
        public_629f491 : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+0x7C]
        public_629f497 : nop
        fmul dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [edi+0x2A0]
        fld dword ptr ds : [edi+0x2A4]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_629f4ba
        fstp st(0)
        fld dword ptr ds : [edi+0x2A4]
        public_629f4ba : nop
        fstp dword ptr ds : [edi+0x2A0]
        public_629f4c0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        mov ecx, esi
        call public_629ae00
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x629f410)
    }
}

#undef public_629f434
#undef public_629f43a
#undef public_629f460
#undef public_629f491
#undef public_629f497
#undef public_629f4ba
#undef public_629f4c0
