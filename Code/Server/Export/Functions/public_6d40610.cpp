#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40610);

#define public_6d40624 _public_6d40624
#define public_6d4063b _public_6d4063b
#define public_6d40654 _public_6d40654
#define public_6d40671 _public_6d40671

PROC_DECLARE(0x6d40610, internal_6d40610, public_6d40610);
extern "C" NAKED register_t __cdecl internal_6d40610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, eax
        je public_6d40671
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        public_6d40624 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d1baa0
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d4063b
        mov edi, eax
        public_6d4063b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d40654
        mov dx, word ptr ss : [ebp+8]
        mov word ptr ds : [eax], dx
        public_6d40654 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6d40624
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        pop ebp
        ret 
        public_6d40671 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d40610)
    }
}

#undef public_6d40624
#undef public_6d4063b
#undef public_6d40654
#undef public_6d40671
