#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271745 _public_6271745
#define public_627175a _public_627175a
#define public_6271777 _public_6271777
#define public_627178a _public_627178a

PROC_DECLARE(0x6271710, internal_6271710, public_6271710);
extern "C" NAKED register_t __cdecl internal_6271710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        push 0x10
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp ebp, eax
        je public_627178a
        push ebx
        public_6271745 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_627175a
        mov ebx, eax
        public_627175a : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6271777
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], edx
        public_6271777 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc edx
        add ebp, 8
        cmp ebp, eax
        mov dword ptr ds : [esi+8], edx
        jne public_6271745
        pop ebx
        public_627178a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6271710)
    }
}

#undef public_6271745
#undef public_627175a
#undef public_6271777
#undef public_627178a
