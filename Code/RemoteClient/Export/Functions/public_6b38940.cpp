#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38980 _public_6b38980
#define public_6b38995 _public_6b38995
#define public_6b389ac _public_6b389ac
#define public_6b389c1 _public_6b389c1

PROC_DECLARE(0x6b38940, internal_6b38940, public_6b38940);
extern "C" NAKED register_t __cdecl internal_6b38940()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [ebp+4]
        push esi
        push edi
        mov ebx, ecx
        push 0xC
        mov byte ptr ds : [ebx+4], al
        call public_6b6a134
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b389c1
        lea esp, ss:[esp]
        public_6b38980 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6b38995
        mov ebp, eax
        public_6b38995 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b389ac
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_6b389ac : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6b38980
        mov ebp, dword ptr ss : [esp+0x18]
        public_6b389c1 : nop
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+0x10]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x28], eax
        pop ebp
        mov dword ptr ds : [ebx], offset public_6b6bb60
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b38940)
    }
}

#undef public_6b38980
#undef public_6b38995
#undef public_6b389ac
#undef public_6b389c1
