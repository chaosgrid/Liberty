#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402790);
CLANG_FORWARD_PROC_SYMBOL(public_4029a0);
CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_4027b0 _public_4027b0
#define public_4027c3 _public_4027c3
#define public_4027c6 _public_4027c6
#define public_4027ca _public_4027ca
#define public_402829 _public_402829
#define public_402841 _public_402841
#define public_40284b _public_40284b
#define public_40284f _public_40284f
#define public_402860 _public_402860
#define public_40289b _public_40289b
#define public_4028aa _public_4028aa
#define public_4028cb _public_4028cb
#define public_4028ec _public_4028ec
#define public_4028fa _public_4028fa
#define public_402919 _public_402919
#define public_402925 _public_402925
#define public_402941 _public_402941
#define public_40295c _public_40295c
#define public_402963 _public_402963
#define public_402986 _public_402986

PROC_DECLARE(0x402790, internal_402790, public_402790);
extern "C" NAKED register_t __cdecl internal_402790()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_4027ca
        lea esp, ss:[esp]
        public_4027b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_4027c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_4027c6
        public_4027c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_4027c6 : nop
        cmp ebp, edx
        jne public_4027b0
        public_4027ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_402941
        push 0
        push esi
        mov ecx, edi
        call public_40f110
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4e5fc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_402829
        cmp ebp, dword ptr ds : [edi+8]
        jne public_402829
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_402829
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_40284f
        mov dword ptr ds : [eax+8], ebx
        jmp public_40284f
        public_402829 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_402841
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_40284b
        public_402841 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_40284b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_40284b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_40284f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_402925
        lea ecx, ds:[ecx]
        public_402860 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_402925
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4028cb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_40289b
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_402919
        public_40289b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_4028aa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_4028aa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_402919
        public_4028cb : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_4028ec
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_402919
        public_4028ec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4028fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_4028fa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_402919 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_402860
        public_402925 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_402941 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_40295c
        cmp esi, dword ptr ds : [ecx]
        je public_402963
        lea ecx, ss:[esp+0x10]
        call public_43c010
        mov edx, dword ptr ss : [esp+0x10]
        public_40295c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_402986
        public_402963 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4029a0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_402986 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x402790)
    }
}

#undef public_4027b0
#undef public_4027c3
#undef public_4027c6
#undef public_4027ca
#undef public_402829
#undef public_402841
#undef public_40284b
#undef public_40284f
#undef public_402860
#undef public_40289b
#undef public_4028aa
#undef public_4028cb
#undef public_4028ec
#undef public_4028fa
#undef public_402919
#undef public_402925
#undef public_402941
#undef public_40295c
#undef public_402963
#undef public_402986
