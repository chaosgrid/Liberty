#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4abca);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b537);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b734);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b95d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ba3f);
CLANG_FORWARD_PROC_SYMBOL(public_6d4bdad);

#define public_6d4bddf _public_6d4bddf
#define public_6d4bdee _public_6d4bdee
#define public_6d4bdf0 _public_6d4bdf0
#define public_6d4bdf7 _public_6d4bdf7
#define public_6d4bdfb _public_6d4bdfb
#define public_6d4be10 _public_6d4be10
#define public_6d4be1b _public_6d4be1b
#define public_6d4be5a _public_6d4be5a
#define public_6d4be72 _public_6d4be72
#define public_6d4beb2 _public_6d4beb2
#define public_6d4beba _public_6d4beba
#define public_6d4bec3 _public_6d4bec3
#define public_6d4beeb _public_6d4beeb
#define public_6d4bef5 _public_6d4bef5
#define public_6d4bf18 _public_6d4bf18
#define public_6d4bf2f _public_6d4bf2f
#define public_6d4bf38 _public_6d4bf38
#define public_6d4bf47 _public_6d4bf47
#define public_6d4bf4e _public_6d4bf4e
#define public_6d4bf6c _public_6d4bf6c
#define public_6d4bf99 _public_6d4bf99
#define public_6d4bfad _public_6d4bfad
#define public_6d4bfc4 _public_6d4bfc4
#define public_6d4bfda _public_6d4bfda
#define public_6d4bfee _public_6d4bfee
#define public_6d4c00e _public_6d4c00e
#define public_6d4c016 _public_6d4c016
#define public_6d4c035 _public_6d4c035

PROC_DECLARE(0x6d4bdad, internal_6d4bdad, public_6d4bdad);
extern "C" NAKED register_t __cdecl internal_6d4bdad()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x168]
        mov ebx, dword ptr ds : [esi+0x194]
        push edi
        xor edi, edi
        cmp eax, edi
        sete byte ptr ss : [ebp+0xB]
        xor dl, dl
        cmp byte ptr ss : [ebp+0xB], dl
        mov dword ptr ss : [ebp-8], ebx
        je public_6d4bddf
        cmp dword ptr ds : [esi+0x16C], edi
        jmp public_6d4bdf7
        public_6d4bddf : nop
        mov ecx, dword ptr ds : [esi+0x16C]
        cmp eax, ecx
        jg public_6d4bdee
        cmp ecx, 0x40
        jl public_6d4bdf0
        public_6d4bdee : nop
        mov dl, 1
        public_6d4bdf0 : nop
        cmp dword ptr ds : [esi+0x120], 1
        public_6d4bdf7 : nop
        je public_6d4bdfb
        mov dl, 1
        public_6d4bdfb : nop
        mov eax, dword ptr ds : [esi+0x170]
        cmp eax, edi
        je public_6d4be10
        dec eax
        cmp dword ptr ds : [esi+0x174], eax
        je public_6d4be10
        mov dl, 1
        public_6d4be10 : nop
        cmp dword ptr ds : [esi+0x174], 0xD
        jle public_6d4be1b
        mov dl, 1
        public_6d4be1b : nop
        test dl, dl
        je public_6d4be5a
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0xE
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x168]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x16C]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x170]
        mov dword ptr ds : [eax+0x20], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x174]
        mov dword ptr ds : [eax+0x24], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4be5a : nop
        cmp dword ptr ds : [esi+0x120], edi
        mov dword ptr ss : [ebp-4], edi
        jle public_6d4bf18
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp-0xC], eax
        public_6d4be72 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov ebx, eax
        shl ebx, 8
        add ebx, dword ptr ds : [esi+0x8C]
        cmp byte ptr ss : [ebp+0xB], 0
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d4beb2
        cmp dword ptr ds : [ebx], edi
        jge public_6d4beb2
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x6F
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x1C], edi
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x10]
        pop ecx
        pop ecx
        public_6d4beb2 : nop
        mov edi, dword ptr ds : [esi+0x168]
        jmp public_6d4bef5
        public_6d4beba : nop
        mov ecx, dword ptr ds : [ebx+edi*4]
        test ecx, ecx
        jge public_6d4bec3
        xor ecx, ecx
        public_6d4bec3 : nop
        cmp dword ptr ds : [esi+0x170], ecx
        je public_6d4beeb
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x6F
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x1C], edi
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x10]
        pop ecx
        pop ecx
        public_6d4beeb : nop
        mov ecx, dword ptr ds : [esi+0x174]
        mov dword ptr ds : [ebx+edi*4], ecx
        inc edi
        public_6d4bef5 : nop
        cmp edi, dword ptr ds : [esi+0x16C]
        jle public_6d4beba
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-0xC], 4
        xor edi, edi
        cmp eax, dword ptr ds : [esi+0x120]
        jl public_6d4be72
        mov ebx, dword ptr ss : [ebp-8]
        public_6d4bf18 : nop
        cmp dword ptr ds : [esi+0x170], edi
        jne public_6d4bf38
        cmp byte ptr ss : [ebp+0xB], 0
        je public_6d4bf2f
        mov dword ptr ds : [ebx+4], offset _public_6d4b537
        jmp public_6d4bf4e
        public_6d4bf2f : nop
        mov dword ptr ds : [ebx+4], offset _public_6d4b734
        jmp public_6d4bf4e
        public_6d4bf38 : nop
        cmp byte ptr ss : [ebp+0xB], 0
        je public_6d4bf47
        mov dword ptr ds : [ebx+4], offset _public_6d4b95d
        jmp public_6d4bf4e
        public_6d4bf47 : nop
        mov dword ptr ds : [ebx+4], offset _public_6d4ba3f
        public_6d4bf4e : nop
        cmp dword ptr ds : [esi+0x120], edi
        mov dword ptr ss : [ebp-4], edi
        jle public_6d4c035
        lea eax, ds:[ebx+0x24]
        mov dword ptr ss : [ebp-0x10], eax
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp-0xC], eax
        public_6d4bf6c : nop
        cmp byte ptr ss : [ebp+0xB], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [eax]
        je public_6d4bfc4
        cmp dword ptr ds : [esi+0x170], edi
        jne public_6d4c016
        mov edi, dword ptr ds : [eax+0x14]
        test edi, edi
        jl public_6d4bf99
        cmp edi, 4
        jge public_6d4bf99
        cmp dword ptr ds : [esi+edi*4+0xA0], 0
        jne public_6d4bfad
        public_6d4bf99 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x31
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], edi
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4bfad : nop
        mov eax, dword ptr ss : [ebp-8]
        lea eax, ds:[eax+edi*4+0x38]
        push eax
        push dword ptr ds : [esi+edi*4+0xA0]
        push esi
        call public_6d4abca
        jmp public_6d4c00e
        public_6d4bfc4 : nop
        mov edi, dword ptr ds : [eax+0x18]
        test edi, edi
        jl public_6d4bfda
        cmp edi, 4
        jge public_6d4bfda
        cmp dword ptr ds : [esi+edi*4+0xB0], 0
        jne public_6d4bfee
        public_6d4bfda : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x31
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], edi
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4bfee : nop
        mov ebx, dword ptr ss : [ebp-8]
        lea eax, ds:[ebx+edi*4+0x38]
        push eax
        push dword ptr ds : [esi+edi*4+0xB0]
        mov dword ptr ss : [ebp-0x14], eax
        push esi
        call public_6d4abca
        mov eax, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x48], eax
        public_6d4c00e : nop
        mov ebx, dword ptr ss : [ebp-8]
        add esp, 0xC
        xor edi, edi
        public_6d4c016 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        inc dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-0xC], 4
        add dword ptr ss : [ebp-0x10], 4
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [esi+0x120]
        jl public_6d4bf6c
        public_6d4c035 : nop
        and byte ptr ds : [ebx+0x18], 0
        mov dword ptr ds : [ebx+0x14], edi
        mov dword ptr ds : [ebx+0x10], edi
        mov dword ptr ds : [ebx+0x20], edi
        mov eax, dword ptr ds : [esi+0xFC]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x34], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4bdad)
    }
}

#undef public_6d4bddf
#undef public_6d4bdee
#undef public_6d4bdf0
#undef public_6d4bdf7
#undef public_6d4bdfb
#undef public_6d4be10
#undef public_6d4be1b
#undef public_6d4be5a
#undef public_6d4be72
#undef public_6d4beb2
#undef public_6d4beba
#undef public_6d4bec3
#undef public_6d4beeb
#undef public_6d4bef5
#undef public_6d4bf18
#undef public_6d4bf2f
#undef public_6d4bf38
#undef public_6d4bf47
#undef public_6d4bf4e
#undef public_6d4bf6c
#undef public_6d4bf99
#undef public_6d4bfad
#undef public_6d4bfc4
#undef public_6d4bfda
#undef public_6d4bfee
#undef public_6d4c00e
#undef public_6d4c016
#undef public_6d4c035
