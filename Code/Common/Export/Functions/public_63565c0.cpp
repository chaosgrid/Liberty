#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63557e0);
CLANG_FORWARD_PROC_SYMBOL(public_6355890);
CLANG_FORWARD_PROC_SYMBOL(public_6356560);
CLANG_FORWARD_PROC_SYMBOL(public_6368f60);

#define public_63565dc _public_63565dc
#define public_63565e1 _public_63565e1
#define public_63565fd _public_63565fd
#define public_6356615 _public_6356615
#define public_6356651 _public_6356651

PROC_DECLARE(0x63565c0, internal_63565c0, public_63565c0);
extern "C" NAKED register_t __cdecl internal_63565c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp word ptr ds : [ecx+0x3E], 1
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        jg public_63565dc
        mov ecx, esi
        call public_6356560
        jmp public_63565e1
        public_63565dc : nop
        call public_6368f60
        public_63565e1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp word ptr ds : [ecx+0x3E], 0
        jne public_6356615
        test ecx, ecx
        mov dword ptr ds : [esi+4], 0
        je public_63565fd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_63565fd : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFFFFDFF
        or ecx, 0x100
        pop edi
        mov dword ptr ds : [eax], ecx
        pop esi
        ret 8
        public_6356615 : nop
        mov eax, dword ptr ds : [ecx+0x44]
        test al, al
        je public_6356651
        and eax, 0xFFFFFF00
        mov dword ptr ds : [ecx+0x44], eax
        mov ecx, dword ptr ds : [esi+4]
        call public_63557e0
        mov edi, eax
        test edi, edi
        je public_6356651
        mov ecx, dword ptr ds : [esi+4]
        push edi
        call public_6355890
        mov edi, dword ptr ds : [edi+0x15C]
        mov edx, dword ptr ds : [edi]
        and edx, 0xFFFFFDFF
        or edx, 0x100
        mov dword ptr ds : [edi], edx
        public_6356651 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63565c0)
    }
}

#undef public_63565dc
#undef public_63565e1
#undef public_63565fd
#undef public_6356615
#undef public_6356651
