#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41c061 _public_41c061
#define public_41c073 _public_41c073
#define public_41c080 _public_41c080
#define public_41c0af _public_41c0af
#define public_41c0b3 _public_41c0b3
#define public_41c0c8 _public_41c0c8
#define public_41c0df _public_41c0df
#define public_41c0f4 _public_41c0f4

PROC_DECLARE(0x41c030, internal_41c030, public_41c030);
extern "C" NAKED register_t __cdecl internal_41c030()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov edx, ecx
        push ebp
        lea ecx, ds:[eax+4]
        lea ebp, ds:[edx+4]
        cmp ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], edx
        je public_41c0f4
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_41c073
        public_41c061 : nop
        cmp ebx, ecx
        je public_41c073
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_41c061
        public_41c073 : nop
        cmp eax, esi
        mov edi, eax
        je public_41c0af
        lea esp, ss:[esp]
        public_41c080 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_41c080
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_41c0af : nop
        cmp ebx, ecx
        je public_41c0f4
        public_41c0b3 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_41c0c8
        mov edi, eax
        public_41c0c8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_41c0df
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_41c0df : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_41c0b3
        mov edx, dword ptr ss : [esp+0x14]
        public_41c0f4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax+0x10]
        lea edi, ds:[edx+0x10]
        mov ecx, 6
        rep movsd
        pop edi
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+0x28]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x28], eax
        mov eax, edx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x41c030)
    }
}

#undef public_41c061
#undef public_41c073
#undef public_41c080
#undef public_41c0af
#undef public_41c0b3
#undef public_41c0c8
#undef public_41c0df
#undef public_41c0f4
