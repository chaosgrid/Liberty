#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414710);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);

#define public_414724 _public_414724
#define public_41473a _public_41473a
#define public_41473e _public_41473e
#define public_414743 _public_414743
#define public_41475b _public_41475b
#define public_41476a _public_41476a
#define public_414788 _public_414788
#define public_41479e _public_41479e

PROC_DECLARE(0x414710, internal_414710, public_414710);
extern "C" NAKED register_t __cdecl internal_414710()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, eax
        je public_414743
        public_414724 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_4155c0
        test eax, eax
        jge public_41473a
        mov esi, dword ptr ds : [esi+8]
        jmp public_41473e
        public_41473a : nop
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        public_41473e : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_414724
        public_414743 : nop
        cmp edi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], edi
        je public_41479e
        mov ebx, dword ptr ds : [edi+0x14]
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        jne public_41475b
        mov edi, offset public_41c3f4
        public_41475b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        mov ecx, esi
        jb public_41476a
        mov ecx, ebx
        public_41476a : nop
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edi
        push eax
        call dword ptr ds : [public_41b8fc]
        add esp, 0xC
        test eax, eax
        jne public_414788
        cmp esi, ebx
        jb public_41479e
        cmp esi, ebx
        setne al
        test eax, eax
        public_414788 : nop
        jl public_41479e
        pop edi
        lea eax, ss:[esp+0xC]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_41479e : nop
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        lea eax, ss:[esp+0x18]
        pop esi
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x414710)
    }
}

#undef public_414724
#undef public_41473a
#undef public_41473e
#undef public_414743
#undef public_41475b
#undef public_41476a
#undef public_414788
#undef public_41479e
