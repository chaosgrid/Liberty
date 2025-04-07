#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302570);

#define public_63025b7 _public_63025b7
#define public_63025c7 _public_63025c7
#define public_63025da _public_63025da
#define public_6302611 _public_6302611
#define public_6302622 _public_6302622
#define public_6302636 _public_6302636
#define public_6302652 _public_6302652
#define public_6302666 _public_6302666
#define public_6302682 _public_6302682
#define public_630269f _public_630269f
#define public_63026a3 _public_63026a3

PROC_DECLARE(0x6302570, internal_6302570, public_6302570);
extern "C" NAKED register_t __cdecl internal_6302570()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi+4], eax
        mov cl, byte ptr ds : [esi+4]
        xor edx, edx
        add esi, 4
        lea ebp, ds:[edi+8]
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ebx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], edx
        jae public_63025b7
        mov ebx, eax
        public_63025b7 : nop
        cmp ebp, esi
        jne public_6302622
        cmp ebx, edx
        mov esi, eax
        jbe public_63025c7
        call dword ptr ds : [public_63991c4]
        public_63025c7 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_63025da
        mov esi, eax
        public_63025da : nop
        test esi, esi
        jbe public_6302611
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6302611
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6302611 : nop
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        jmp public_63026a3
        public_6302622 : nop
        cmp ebx, edx
        jbe public_6302666
        cmp ebx, ecx
        jne public_6302666
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_6302636
        mov eax, dword ptr ds : [public_63991d0]
        public_6302636 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6302666
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6302652
        mov eax, dword ptr ds : [public_63991d0]
        public_6302652 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_63026a3
        public_6302666 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_630269f
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6302682
        mov esi, dword ptr ds : [public_63991d0]
        public_6302682 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_630269f : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_63026a3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x1C], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi+0x20], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6302570)
    }
}

#undef public_63025b7
#undef public_63025c7
#undef public_63025da
#undef public_6302611
#undef public_6302622
#undef public_6302636
#undef public_6302652
#undef public_6302666
#undef public_6302682
#undef public_630269f
#undef public_63026a3
