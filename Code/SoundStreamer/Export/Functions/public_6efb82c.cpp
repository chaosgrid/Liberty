#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efab32);
CLANG_FORWARD_PROC_SYMBOL(public_6efabb1);
CLANG_FORWARD_PROC_SYMBOL(public_6efabdf);
CLANG_FORWARD_PROC_SYMBOL(public_6efb82c);

#define public_6efb895 _public_6efb895
#define public_6efb8b7 _public_6efb8b7
#define public_6efb8b9 _public_6efb8b9
#define public_6efb8cf _public_6efb8cf
#define public_6efb8dc _public_6efb8dc
#define public_6efb8ec _public_6efb8ec
#define public_6efb908 _public_6efb908
#define public_6efb933 _public_6efb933
#define public_6efb940 _public_6efb940
#define public_6efb95e _public_6efb95e
#define public_6efb97c _public_6efb97c
#define public_6efb983 _public_6efb983
#define public_6efb99c _public_6efb99c
#define public_6efb9a5 _public_6efb9a5
#define public_6efb9bc _public_6efb9bc
#define public_6efb9d3 _public_6efb9d3
#define public_6efb9fa _public_6efb9fa
#define public_6efba00 _public_6efba00
#define public_6efba05 _public_6efba05
#define public_6efba08 _public_6efba08
#define public_6efba26 _public_6efba26
#define public_6efba2c _public_6efba2c
#define public_6efba47 _public_6efba47

PROC_DECLARE(0x6efb82c, internal_6efb82c, public_6efb82c);
extern "C" NAKED register_t __cdecl internal_6efb82c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov cx, word ptr ds : [ebx+0xA]
        xor eax, eax
        push edi
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ss : [ebp-0x24], eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x1C], eax
        mov ax, word ptr ds : [esi+0xA]
        mov edi, ecx
        mov edx, 0x7FFF
        xor edi, eax
        and eax, edx
        and ecx, edx
        and edi, 0x8000
        cmp ax, 0x7FFF
        lea edx, ds:[ecx+eax]
        mov dword ptr ss : [ebp+8], edx
        jae public_6efba2c
        cmp cx, 0x7FFF
        jae public_6efba2c
        cmp dx, 0xBFFD
        ja public_6efba2c
        cmp dx, 0x3FBF
        ja public_6efb895
        xor eax, eax
        jmp public_6efb8cf
        public_6efb895 : nop
        test ax, ax
        mov edx, 0x7FFFFFFF
        jne public_6efb8b7
        inc dword ptr ss : [ebp+8]
        test dword ptr ds : [esi+8], edx
        jne public_6efb8b7
        xor eax, eax
        cmp dword ptr ds : [esi+4], eax
        jne public_6efb8b9
        cmp dword ptr ds : [esi], eax
        jne public_6efb8b9
        jmp public_6efba26
        public_6efb8b7 : nop
        xor eax, eax
        public_6efb8b9 : nop
        cmp cx, ax
        jne public_6efb8dc
        inc dword ptr ss : [ebp+8]
        test dword ptr ds : [ebx+8], edx
        jne public_6efb8dc
        cmp dword ptr ds : [ebx+4], eax
        jne public_6efb8dc
        cmp dword ptr ds : [ebx], eax
        jne public_6efb8dc
        public_6efb8cf : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], eax
        jmp public_6efba47
        public_6efb8dc : nop
        mov dword ptr ss : [ebp-0x10], eax
        lea eax, ss:[ebp-0x20]
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+0xC], 5
        public_6efb8ec : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, eax
        cmp dword ptr ss : [ebp+0xC], 0
        jle public_6efb940
        add eax, esi
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-0x18], eax
        public_6efb908 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx eax, word ptr ds : [eax]
        movzx ecx, word ptr ds : [ecx]
        imul eax, ecx
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0xFFFFFFFC
        push ecx
        push eax
        push dword ptr ds : [ecx]
        call public_6efab32
        add esp, 0xC
        test eax, eax
        je public_6efb933
        mov eax, dword ptr ss : [ebp-4]
        inc word ptr ds : [eax]
        public_6efb933 : nop
        add dword ptr ss : [ebp-8], 2
        sub dword ptr ss : [ebp-0xC], 2
        dec dword ptr ss : [ebp-0x18]
        jne public_6efb908
        public_6efb940 : nop
        add dword ptr ss : [ebp-4], 2
        inc dword ptr ss : [ebp-0x10]
        dec dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp+0xC], 0
        jg public_6efb8ec
        add dword ptr ss : [ebp+8], 0xC002
        cmp word ptr ss : [ebp+8], 0
        jle public_6efb983
        public_6efb95e : nop
        test byte ptr ss : [ebp-0x19], 0x80
        jne public_6efb97c
        lea eax, ss:[ebp-0x24]
        push eax
        call public_6efabb1
        add dword ptr ss : [ebp+8], 0xFFFF
        pop ecx
        cmp word ptr ss : [ebp+8], 0
        jg public_6efb95e
        public_6efb97c : nop
        cmp word ptr ss : [ebp+8], 0
        jg public_6efb9bc
        public_6efb983 : nop
        add dword ptr ss : [ebp+8], 0xFFFF
        cmp word ptr ss : [ebp+8], 0
        jge public_6efb9bc
        movsx eax, word ptr ss : [ebp+8]
        neg eax
        add dword ptr ss : [ebp+8], eax
        mov ebx, eax
        public_6efb99c : nop
        test byte ptr ss : [ebp-0x24], 1
        je public_6efb9a5
        inc dword ptr ss : [ebp-0x14]
        public_6efb9a5 : nop
        lea eax, ss:[ebp-0x24]
        push eax
        call public_6efabdf
        dec ebx
        pop ecx
        jne public_6efb99c
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6efb9bc
        or byte ptr ss : [ebp-0x24], 1
        public_6efb9bc : nop
        cmp word ptr ss : [ebp-0x24], 0x8000
        ja public_6efb9d3
        mov eax, dword ptr ss : [ebp-0x24]
        and eax, 0x1FFFF
        cmp eax, 0x18000
        jne public_6efba08
        public_6efb9d3 : nop
        cmp dword ptr ss : [ebp-0x22], 0xFFFFFFFF
        jne public_6efba05
        and dword ptr ss : [ebp-0x22], 0
        cmp dword ptr ss : [ebp-0x1E], 0xFFFFFFFF
        jne public_6efba00
        and dword ptr ss : [ebp-0x1E], 0
        cmp word ptr ss : [ebp-0x1A], 0xFFFF
        jne public_6efb9fa
        inc dword ptr ss : [ebp+8]
        mov word ptr ss : [ebp-0x1A], 0x8000
        jmp public_6efba08
        public_6efb9fa : nop
        inc word ptr ss : [ebp-0x1A]
        jmp public_6efba08
        public_6efba00 : nop
        inc dword ptr ss : [ebp-0x1E]
        jmp public_6efba08
        public_6efba05 : nop
        inc dword ptr ss : [ebp-0x22]
        public_6efba08 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ax, 0x7FFF
        jae public_6efba2c
        mov cx, word ptr ss : [ebp-0x22]
        or eax, edi
        mov word ptr ds : [esi], cx
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [esi+2], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [esi+6], ecx
        public_6efba26 : nop
        mov word ptr ds : [esi+0xA], ax
        jmp public_6efba47
        public_6efba2c : nop
        neg di
        sbb edi, edi
        and dword ptr ds : [esi+4], 0
        and edi, 0x80000000
        add edi, 0x7FFF8000
        and dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+8], edi
        public_6efba47 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efb82c)
    }
}

#undef public_6efb895
#undef public_6efb8b7
#undef public_6efb8b9
#undef public_6efb8cf
#undef public_6efb8dc
#undef public_6efb8ec
#undef public_6efb908
#undef public_6efb933
#undef public_6efb940
#undef public_6efb95e
#undef public_6efb97c
#undef public_6efb983
#undef public_6efb99c
#undef public_6efb9a5
#undef public_6efb9bc
#undef public_6efb9d3
#undef public_6efb9fa
#undef public_6efba00
#undef public_6efba05
#undef public_6efba08
#undef public_6efba26
#undef public_6efba2c
#undef public_6efba47
