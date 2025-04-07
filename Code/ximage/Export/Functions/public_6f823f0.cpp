#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81000);
CLANG_FORWARD_PROC_SYMBOL(public_6f81180);
CLANG_FORWARD_PROC_SYMBOL(public_6f82740);
CLANG_FORWARD_PROC_SYMBOL(public_6f82900);
CLANG_FORWARD_PROC_SYMBOL(public_6f82940);
CLANG_FORWARD_PROC_SYMBOL(public_6f82980);

#define public_6f82410 _public_6f82410
#define public_6f82430 _public_6f82430
#define public_6f82436 _public_6f82436
#define public_6f8243d _public_6f8243d
#define public_6f824aa _public_6f824aa
#define public_6f824d5 _public_6f824d5
#define public_6f82516 _public_6f82516
#define public_6f8253c _public_6f8253c
#define public_6f82550 _public_6f82550
#define public_6f8256f _public_6f8256f
#define public_6f8257b _public_6f8257b
#define public_6f825a0 _public_6f825a0
#define public_6f825b6 _public_6f825b6
#define public_6f825be _public_6f825be
#define public_6f825e7 _public_6f825e7
#define public_6f825f9 _public_6f825f9
#define public_6f82615 _public_6f82615
#define public_6f82627 _public_6f82627

PROC_DECLARE(0x6f823f0, internal_6f823f0, public_6f823f0);
extern "C" NAKED register_t __cdecl internal_6f823f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x2C
        jne public_6f82615
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+4]
        nop 
        public_6f82410 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f82436
        test cl, cl
        je public_6f82430
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f82436
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f82410
        public_6f82430 : nop
        xor ebp, ebp
        xor eax, eax
        jmp public_6f8243d
        public_6f82436 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        xor ebp, ebp
        public_6f8243d : nop
        cmp eax, ebp
        jne public_6f82615
        push 0x48
        call public_6f82940
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_6f8253c
        lea edi, ds:[esi+4]
        mov dword ptr ds : [edi], ebp
        push ebp
        mov dword ptr ds : [esi+8], ebp
        call public_6f82900
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x28], 0xFFFFFF
        mov byte ptr ds : [esi+0x2C], 0xFF
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x1C], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi], offset public_6f830b0
        mov dword ptr ds : [esi+0x44], 1
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        cmp eax, 0x2C
        ja public_6f824aa
        mov eax, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [esi+0x34], eax
        public_6f824aa : nop
        mov ebp, dword ptr ds : [ebx+8]
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_6f8257b
        cmp dword ptr ds : [edi], ebp
        je public_6f824d5
        mov ecx, edi
        call public_6f82740
        test ebp, ebp
        mov dword ptr ds : [edi], ebp
        je public_6f824d5
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+4]
        public_6f824d5 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x38]
        push ecx
        push 5
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x3C]
        push ecx
        push 6
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x40]
        push ecx
        push 7
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        lea ebp, ds:[esi+8]
        je public_6f82516
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp], 0
        public_6f82516 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        push ebp
/*FIXUP push offset public_6f84114 @0x6f8251b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84114
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6f8257b
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6f82550
        mov edx, dword ptr ds : [ebx+0x10]
        push edx
        push eax
        mov ecx, esi
        call public_6f81000
        jmp public_6f8256f
        public_6f8253c : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        xor ecx, ecx
        pop ebp
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6f82550 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ebx+0x1C]
        push eax
        mov eax, dword ptr ds : [ebx+0x18]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        push edx
        mov edx, dword ptr ds : [ebx+0x10]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f81180
        public_6f8256f : nop
        test eax, eax
        je public_6f8257b
        mov dword ptr ss : [esp+0x18], 0
        public_6f8257b : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6f82627
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6f83080
        je public_6f825be
        mov eax, dword ptr ds : [esi+0x14]
        xor ebp, ebp
        test eax, eax
        jle public_6f825be
        lea ecx, ds:[ecx]
        public_6f825a0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax+ebp*4]
        test eax, eax
        je public_6f825b6
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xB8]
        public_6f825b6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc ebp
        cmp ebp, eax
        jl public_6f825a0
        public_6f825be : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6f82980
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6f82980
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        test eax, eax
        je public_6f825e7
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], 0
        public_6f825e7 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6f825f9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f825f9 : nop
        push esi
        call public_6f82980
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop ebx
        ret 0xC
        public_6f82615 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f82627 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f823f0)
    }
}

#undef public_6f82410
#undef public_6f82430
#undef public_6f82436
#undef public_6f8243d
#undef public_6f824aa
#undef public_6f824d5
#undef public_6f82516
#undef public_6f8253c
#undef public_6f82550
#undef public_6f8256f
#undef public_6f8257b
#undef public_6f825a0
#undef public_6f825b6
#undef public_6f825be
#undef public_6f825e7
#undef public_6f825f9
#undef public_6f82615
#undef public_6f82627
