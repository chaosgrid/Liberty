#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627d60);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6627da7 _public_6627da7
#define public_6627dbc _public_6627dbc
#define public_6627e08 _public_6627e08
#define public_6627e10 _public_6627e10
#define public_6627e23 _public_6627e23

PROC_DECLARE(0x6627d60, internal_6627d60, public_6627d60);
extern "C" NAKED register_t __cdecl internal_6627d60()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        push 0x58
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], cl
        call public_66281dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0x10], ecx
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edi
        cmp ebp, ecx
        je public_6627e23
        push ebx
        public_6627da7 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x58
        call public_66281dc
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebx, ebx
        jne public_6627dbc
        mov ebx, eax
        public_6627dbc : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        test ebx, ebx
        mov dword ptr ds : [edx], eax
        je public_6627e10
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+8]
        mov ecx, 0x12
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], 0
        rep movsd
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6627e08
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_6627e08 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6627e10 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6627da7
        pop ebx
        public_6627e23 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6627d60)
    }
}

#undef public_6627da7
#undef public_6627dbc
#undef public_6627e08
#undef public_6627e10
#undef public_6627e23
