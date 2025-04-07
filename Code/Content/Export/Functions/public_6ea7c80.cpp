#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c80);

#define public_6ea7cb6 _public_6ea7cb6
#define public_6ea7cc7 _public_6ea7cc7

PROC_DECLARE(0x6ea7c80, internal_6ea7c80, public_6ea7c80);
extern "C" NAKED register_t __cdecl internal_6ea7c80()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6fceec4]
        dec edx
        push esi
        mov esi, ecx
        mov dword ptr ds : [public_6fceec4], edx
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, 2
        jne public_6ea7cb6
        mov ecx, dword ptr ds : [esi+0x58]
        test ecx, ecx
        je public_6ea7cb6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        lea eax, ds:[esi+0x58]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [esi+0x54], 0
        pop esi
        ret 
        public_6ea7cb6 : nop
        cmp eax, 1
        jne public_6ea7cc7
        mov ecx, dword ptr ds : [esi+0x58]
        test ecx, ecx
        je public_6ea7cc7
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6ea7cc7 : nop
        lea eax, ds:[esi+0x58]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [esi+0x54], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ea7c80)
    }
}

#undef public_6ea7cb6
#undef public_6ea7cc7
