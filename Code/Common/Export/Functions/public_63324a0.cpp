#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63324d8 _public_63324d8
#define public_63324ed _public_63324ed
#define public_6332504 _public_6332504
#define public_6332516 _public_6332516

PROC_DECLARE(0x63324a0, internal_63324a0, public_63324a0);
extern "C" NAKED register_t __cdecl internal_63324a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi+4]
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi+4], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6332516
        push ebp
        public_63324d8 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_63324ed
        mov ebp, eax
        public_63324ed : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6332504
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6332504 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_63324d8
        pop ebp
        public_6332516 : nop
        pop edi
        mov dword ptr ds : [esi], offset public_63a4964
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63324a0)
    }
}

#undef public_63324d8
#undef public_63324ed
#undef public_6332504
#undef public_6332516
