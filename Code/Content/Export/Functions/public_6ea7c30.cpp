#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);

#define public_6ea7c57 _public_6ea7c57
#define public_6ea7c68 _public_6ea7c68

PROC_DECLARE(0x6ea7c30, internal_6ea7c30, public_6ea7c30);
extern "C" NAKED register_t __cdecl internal_6ea7c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp eax, 2
        jne public_6ea7c57
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6ea7c57
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        public_6ea7c57 : nop
        cmp eax, 1
        jne public_6ea7c68
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6ea7c68
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6ea7c68 : nop
        lea eax, ds:[esi+4]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ea7c30)
    }
}

#undef public_6ea7c57
#undef public_6ea7c68
