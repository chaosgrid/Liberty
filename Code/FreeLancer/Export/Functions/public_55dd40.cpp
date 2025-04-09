#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55dd40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_55dd5c _public_55dd5c
#define public_55dd6b _public_55dd6b
#define public_55dd7e _public_55dd7e
#define public_55ddb5 _public_55ddb5
#define public_55ddc2 _public_55ddc2
#define public_55ddd8 _public_55ddd8
#define public_55ddf8 _public_55ddf8
#define public_55de01 _public_55de01
#define public_55de16 _public_55de16
#define public_55de2a _public_55de2a
#define public_55de48 _public_55de48
#define public_55de69 _public_55de69

PROC_DECLARE(0x55dd40, internal_55dd40, public_55dd40);
extern "C" NAKED register_t __cdecl internal_55dd40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7080]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        mov ebp, ecx
        jae public_55dd5c
        mov ebx, esi
        public_55dd5c : nop
        cmp ebp, edi
        jne public_55ddc2
        cmp dword ptr ss : [ebp+8], ebx
        jae public_55dd6b
        call dword ptr ds : [public_5c7064]
        public_55dd6b : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_55dd7e
        mov esi, eax
        public_55dd7e : nop
        test esi, esi
        jbe public_55ddb5
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55ddb5
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_55ddb5 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        jmp public_55de69
        public_55ddc2 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_55de2a
        cmp ebx, eax
        jne public_55de2a
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_55ddd8
        mov eax, dword ptr ds : [public_5c7078]
        public_55ddd8 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_55de2a
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_55de01
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_55ddf8
        cmp cl, 0xFF
        je public_55ddf8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55de01
        public_55ddf8 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55de01 : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_55de16
        mov eax, dword ptr ds : [public_5c7078]
        public_55de16 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_55de69
        public_55de2a : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55de69
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_55de48
        mov esi, edi
        public_55de48 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_55de69 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        pop edi
        mov dword ptr ss : [ebp+0x20], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x55dd40)
    }
}

#undef public_55dd5c
#undef public_55dd6b
#undef public_55dd7e
#undef public_55ddb5
#undef public_55ddc2
#undef public_55ddd8
#undef public_55ddf8
#undef public_55de01
#undef public_55de16
#undef public_55de2a
#undef public_55de48
#undef public_55de69
