#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebb7f0);

#define public_6ebb801 _public_6ebb801
#define public_6ebb810 _public_6ebb810
#define public_6ebb81d _public_6ebb81d
#define public_6ebb824 _public_6ebb824

PROC_DECLARE(0x6ebb7f0, internal_6ebb7f0, public_6ebb7f0);
extern "C" NAKED register_t __cdecl internal_6ebb7f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6ebb801
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ebb801 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ebb824
        lea ebx, ds:[ebx]
        public_6ebb810 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6ebb81d
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6ebb81d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6ebb810
        public_6ebb824 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ebb7f0)
    }
}

#undef public_6ebb801
#undef public_6ebb810
#undef public_6ebb81d
#undef public_6ebb824
