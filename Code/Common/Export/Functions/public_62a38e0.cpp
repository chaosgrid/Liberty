#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a3924 _public_62a3924
#define public_62a3939 _public_62a3939
#define public_62a3950 _public_62a3950
#define public_62a3965 _public_62a3965

PROC_DECLARE(0x62a38e0, internal_62a38e0, public_62a38e0);
extern "C" NAKED register_t __cdecl internal_62a38e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ss : [ebp+8]
        push edi
        push 0xC
        mov byte ptr ds : [esi+8], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a3965
        public_62a3924 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_62a3939
        mov ebp, eax
        public_62a3939 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62a3950
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_62a3950 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62a3924
        mov ebp, dword ptr ss : [esp+0x18]
        public_62a3965 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a38e0)
    }
}

#undef public_62a3924
#undef public_62a3939
#undef public_62a3950
#undef public_62a3965
