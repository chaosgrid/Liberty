#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f306b2 _public_6f306b2
#define public_6f306c0 _public_6f306c0
#define public_6f306cf _public_6f306cf
#define public_6f30702 _public_6f30702

PROC_DECLARE(0x6f30690, internal_6f30690, public_6f30690);
extern "C" NAKED register_t __cdecl internal_6f30690()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ebp
        je public_6f30702
        push ebx
        add ebp, 8
        push edi
        public_6f306b2 : nop
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebx
        lea esi, ss:[ebp-4]
        je public_6f306cf
        nop 
        public_6f306c0 : nop
        push edi
        mov ecx, esi
        call public_6ebf6f0
        add edi, 4
        cmp edi, ebx
        jne public_6f306c0
        public_6f306cf : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x14
        add esp, 4
        add ebp, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f306b2
        mov esi, dword ptr ss : [esp+0x18]
        pop edi
        pop ebx
        public_6f30702 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f30690)
    }
}

#undef public_6f306b2
#undef public_6f306c0
#undef public_6f306cf
#undef public_6f30702
