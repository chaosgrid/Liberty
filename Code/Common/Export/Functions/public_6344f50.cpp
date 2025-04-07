#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344f50);
CLANG_FORWARD_PROC_SYMBOL(public_634f320);
CLANG_FORWARD_PROC_SYMBOL(public_6352cf0);

#define public_6344f59 _public_6344f59
#define public_6344f9d _public_6344f9d
#define public_6344fa5 _public_6344fa5

PROC_DECLARE(0x6344f50, internal_6344f50, public_6344f50);
extern "C" NAKED register_t __cdecl internal_6344f50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6344fa5
        push esi
        push edi
        public_6344f59 : nop
        movsx esi, word ptr ds : [eax+0x18]
        mov edi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi+eax+0x28]
        add esi, eax
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [eax+0x98]
        mov eax, dword ptr ds : [edx+0x98]
        mov edx, dword ptr ds : [eax+0x1B8]
        cmp edx, dword ptr ds : [ecx+0x1B8]
        je public_6344f9d
        mov ecx, esi
        call public_6352cf0
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC0
        jne public_6344f9d
        push 2
        push 0
        mov ecx, esi
        call public_634f320
        public_6344f9d : nop
        test edi, edi
        mov eax, edi
        jne public_6344f59
        pop edi
        pop esi
        public_6344fa5 : nop
        ret 
        UNREACHABLE_TRAP(0x6344f50)
    }
}

#undef public_6344f59
#undef public_6344f9d
#undef public_6344fa5
