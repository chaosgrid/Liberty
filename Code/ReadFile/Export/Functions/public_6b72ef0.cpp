#include "ReadFile-PCH.h"


#define public_6b72f0e _public_6b72f0e
#define public_6b72f16 _public_6b72f16
#define public_6b72f28 _public_6b72f28
#define public_6b72f2e _public_6b72f2e
#define public_6b72f34 _public_6b72f34
#define public_6b72f36 _public_6b72f36
#define public_6b72f5a _public_6b72f5a
#define public_6b72f65 _public_6b72f65
#define public_6b72f69 _public_6b72f69
#define public_6b72f77 _public_6b72f77
#define public_6b72f7e _public_6b72f7e

PROC_DECLARE(0x6b72ef0, internal_6b72ef0, public_6b72ef0);
extern "C" NAKED register_t __cdecl internal_6b72ef0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edx, edx
        jne public_6b72f16
        mov ecx, dword ptr ds : [edi+0x238]
        test ecx, ecx
        je public_6b72f0e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b72f34
        public_6b72f0e : nop
        mov esi, dword ptr ds : [edi+0x23C]
        jmp public_6b72f36
        public_6b72f16 : nop
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_6b72f28
        mov ecx, dword ptr ds : [eax+0x238]
        jmp public_6b72f2e
        public_6b72f28 : nop
        mov ecx, dword ptr ds : [edi+0x238]
        public_6b72f2e : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        public_6b72f34 : nop
        mov esi, eax
        public_6b72f36 : nop
        test esi, esi
        je public_6b72f77
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        sub ecx, 0
        je public_6b72f65
        dec ecx
        je public_6b72f5a
        dec ecx
        jne public_6b72f65
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, eax
        sub ecx, edx
        jmp public_6b72f69
        public_6b72f5a : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x14]
        add ecx, edx
        jmp public_6b72f69
        public_6b72f65 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_6b72f69 : nop
        cmp ecx, eax
        ja public_6b72f7e
        mov dword ptr ds : [esi+8], ecx
        pop edi
        mov eax, ecx
        pop esi
        ret 0x14
        public_6b72f77 : nop
        mov dword ptr ds : [edi+0x1C], 5
        public_6b72f7e : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x6b72ef0)
    }
}

#undef public_6b72f0e
#undef public_6b72f16
#undef public_6b72f28
#undef public_6b72f2e
#undef public_6b72f34
#undef public_6b72f36
#undef public_6b72f5a
#undef public_6b72f65
#undef public_6b72f69
#undef public_6b72f77
#undef public_6b72f7e
