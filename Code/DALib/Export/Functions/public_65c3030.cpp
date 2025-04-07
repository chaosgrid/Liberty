#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c33a0);
CLANG_FORWARD_PROC_SYMBOL(public_65c3400);
CLANG_FORWARD_PROC_SYMBOL(public_65c3450);
CLANG_FORWARD_PROC_SYMBOL(public_65c34c0);

#define public_65c3070 _public_65c3070
#define public_65c3082 _public_65c3082
#define public_65c30a0 _public_65c30a0
#define public_65c30d0 _public_65c30d0
#define public_65c30e2 _public_65c30e2
#define public_65c3100 _public_65c3100
#define public_65c315f _public_65c315f
#define public_65c3163 _public_65c3163
#define public_65c31a1 _public_65c31a1
#define public_65c31c7 _public_65c31c7

PROC_DECLARE(0x65c3030, internal_65c3030, public_65c3030);
extern "C" NAKED register_t __cdecl internal_65c3030()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov cl, byte ptr ds : [ebx+8]
        mov byte ptr ss : [ebp+8], cl
        mov edx, dword ptr ds : [ebx+0xC]
        lea ecx, ds:[ebx+0x14]
        lea eax, ss:[ebp+0x14]
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+0xC], edx
        je public_65c30a0
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_65c3082
        nop 
        public_65c3070 : nop
        cmp esi, ecx
        je public_65c3082
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_65c3070
        public_65c3082 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_65c3400
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x14]
        call public_65c33a0
        public_65c30a0 : nop
        lea esi, ds:[ebx+0x20]
        lea edi, ss:[ebp+0x20]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x38]
        lea ecx, ds:[ebx+0x40]
        lea eax, ss:[ebp+0x40]
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x38], edx
        je public_65c3100
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_65c30e2
        nop 
        public_65c30d0 : nop
        cmp esi, ecx
        je public_65c30e2
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_65c30d0
        public_65c30e2 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x40]
        call public_65c3400
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x40]
        call public_65c33a0
        public_65c3100 : nop
        lea esi, ds:[ebx+0x4C]
        lea edi, ss:[ebp+0x4C]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], edx
        lea eax, ds:[ebx+0x68]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x68]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        lea eax, ds:[ebx+0x80]
        lea ecx, ss:[ebp+0x80]
        cmp ecx, eax
        mov dword ptr ss : [ebp+0x7C], edx
        je public_65c31c7
        mov ebx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        je public_65c31a1
        jmp public_65c3163
        public_65c315f : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_65c3163 : nop
        cmp edi, eax
        je public_65c31a1
        mov eax, dword ptr ds : [public_65c7060]
        mov edx, dword ptr ds : [eax]
        push edx
        push 0
        lea ebp, ds:[edi+8]
        lea ecx, ds:[esi+8]
        push ebp
        call dword ptr ds : [public_65c7054]
        mov eax, dword ptr ds : [public_65c7060]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        add ebp, 0x10
        push ebp
        lea ecx, ds:[esi+0x18]
        call dword ptr ds : [public_65c7054]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov edi, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_65c315f
        public_65c31a1 : nop
        push ebx
        push esi
        lea edx, ss:[esp+0x20]
        lea esi, ss:[ebp+0x80]
        push edx
        mov ecx, esi
        call public_65c34c0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push ebx
        mov ecx, esi
        call public_65c3450
        mov ebx, dword ptr ss : [esp+0x20]
        public_65c31c7 : nop
        mov cl, byte ptr ds : [ebx+0x8C]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x8C], cl
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x65c3030)
    }
}

#undef public_65c3070
#undef public_65c3082
#undef public_65c30a0
#undef public_65c30d0
#undef public_65c30e2
#undef public_65c3100
#undef public_65c315f
#undef public_65c3163
#undef public_65c31a1
#undef public_65c31c7
