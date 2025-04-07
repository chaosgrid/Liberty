#include "ReadFile-PCH.h"


#define public_6b733c8 _public_6b733c8
#define public_6b733ce _public_6b733ce
#define public_6b733ef _public_6b733ef
#define public_6b733f7 _public_6b733f7

PROC_DECLARE(0x6b733b0, internal_6b733b0, public_6b733b0);
extern "C" NAKED register_t __cdecl internal_6b733b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov eax, dword ptr ds : [ebx+0x230]
        test eax, eax
        je public_6b733c8
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b733ce
        public_6b733c8 : nop
        mov esi, dword ptr ds : [ebx+0x238]
        public_6b733ce : nop
        test esi, esi
        je public_6b733f7
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        mov edi, eax
        test edi, edi
        jne public_6b733ef
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6b733ef : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6b733f7 : nop
        mov dword ptr ds : [ebx+0x1C], 2
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b733b0)
    }
}

#undef public_6b733c8
#undef public_6b733ce
#undef public_6b733ef
#undef public_6b733f7
