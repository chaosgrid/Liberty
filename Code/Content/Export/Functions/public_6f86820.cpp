#include "Content-PCH.h"


#define public_6f86830 _public_6f86830
#define public_6f8683d _public_6f8683d
#define public_6f86844 _public_6f86844

PROC_DECLARE(0x6f86820, internal_6f86820, public_6f86820);
extern "C" NAKED register_t __cdecl internal_6f86820()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f86844
        lea ecx, ds:[ecx]
        public_6f86830 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f8683d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f8683d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f86830
        public_6f86844 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f86820)
    }
}

#undef public_6f86830
#undef public_6f8683d
#undef public_6f86844
