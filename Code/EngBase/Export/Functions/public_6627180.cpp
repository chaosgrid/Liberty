#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627180);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66271c8 _public_66271c8
#define public_66271dd _public_66271dd
#define public_6627229 _public_6627229
#define public_6627231 _public_6627231
#define public_6627244 _public_6627244

PROC_DECLARE(0x6627180, internal_6627180, public_6627180);
extern "C" NAKED register_t __cdecl internal_6627180()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push 0x58
        mov dword ptr ds : [esi], ecx
        mov dl, byte ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+4], dl
        call public_66281dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0x18], ecx
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edi
        cmp ebp, ecx
        je public_6627244
        push ebx
        public_66271c8 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x58
        call public_66281dc
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebx, ebx
        jne public_66271dd
        mov ebx, eax
        public_66271dd : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        test ebx, ebx
        mov dword ptr ds : [ecx], eax
        je public_6627231
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+8]
        mov ecx, 0x12
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], 0
        rep movsd
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6627229
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_6627229 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        public_6627231 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_66271c8
        pop ebx
        public_6627244 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6627180)
    }
}

#undef public_66271c8
#undef public_66271dd
#undef public_6627229
#undef public_6627231
#undef public_6627244
