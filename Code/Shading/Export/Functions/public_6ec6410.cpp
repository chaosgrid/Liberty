#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6410);
CLANG_FORWARD_PROC_SYMBOL(public_6ec69f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec6479 _public_6ec6479
#define public_6ec648d _public_6ec648d
#define public_6ec6493 _public_6ec6493
#define public_6ec64a1 _public_6ec64a1
#define public_6ec64e2 _public_6ec64e2
#define public_6ec64fb _public_6ec64fb
#define public_6ec650e _public_6ec650e
#define public_6ec6519 _public_6ec6519
#define public_6ec651c _public_6ec651c
#define public_6ec6521 _public_6ec6521
#define public_6ec654a _public_6ec654a
#define public_6ec6563 _public_6ec6563
#define public_6ec6576 _public_6ec6576
#define public_6ec6580 _public_6ec6580
#define public_6ec65a3 _public_6ec65a3
#define public_6ec65bb _public_6ec65bb
#define public_6ec65ce _public_6ec65ce
#define public_6ec65db _public_6ec65db
#define public_6ec65dd _public_6ec65dd
#define public_6ec65e3 _public_6ec65e3
#define public_6ec660c _public_6ec660c
#define public_6ec661f _public_6ec661f
#define public_6ec662a _public_6ec662a
#define public_6ec662d _public_6ec662d
#define public_6ec662f _public_6ec662f
#define public_6ec6632 _public_6ec6632
#define public_6ec663e _public_6ec663e

PROC_DECLARE(0x6ec6410, internal_6ec6410, public_6ec6410);
extern "C" NAKED register_t __cdecl internal_6ec6410()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6ed0c5c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ec69f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ec6479
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ec6479
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6ec6479
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ec6493
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec6493
        public_6ec6479 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ec648d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ec6493
        public_6ec648d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ec6493
        mov dword ptr ds : [eax], ebx
        public_6ec6493 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ec663e
        public_6ec64a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec663e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ec6580
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ec64e2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ec6632
        public_6ec64e2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec6521
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec64fb
        mov dword ptr ds : [edx+4], eax
        public_6ec64fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec650e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec651c
        public_6ec650e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ec6519
        mov dword ptr ds : [edx], ecx
        jmp public_6ec651c
        public_6ec6519 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec651c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec6521 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ec654a
        mov dword ptr ds : [edi+4], ecx
        public_6ec654a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec6563
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec662f
        public_6ec6563 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec6576
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec662f
        public_6ec6576 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec662f
        public_6ec6580 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ec65a3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ec6632
        public_6ec65a3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ec65e3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec65bb
        mov dword ptr ds : [edx+4], eax
        public_6ec65bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec65ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec65dd
        public_6ec65ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ec65db
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec65dd
        public_6ec65db : nop
        mov dword ptr ds : [edx], ecx
        public_6ec65dd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec65e3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ec660c
        mov dword ptr ds : [edi+4], ecx
        public_6ec660c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec661f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ec662d
        public_6ec661f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ec662a
        mov dword ptr ds : [edi], edx
        jmp public_6ec662d
        public_6ec662a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ec662d : nop
        mov dword ptr ds : [edx], ecx
        public_6ec662f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec6632 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec64a1
        public_6ec663e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec6410)
    }
}

#undef public_6ec6479
#undef public_6ec648d
#undef public_6ec6493
#undef public_6ec64a1
#undef public_6ec64e2
#undef public_6ec64fb
#undef public_6ec650e
#undef public_6ec6519
#undef public_6ec651c
#undef public_6ec6521
#undef public_6ec654a
#undef public_6ec6563
#undef public_6ec6576
#undef public_6ec6580
#undef public_6ec65a3
#undef public_6ec65bb
#undef public_6ec65ce
#undef public_6ec65db
#undef public_6ec65dd
#undef public_6ec65e3
#undef public_6ec660c
#undef public_6ec661f
#undef public_6ec662a
#undef public_6ec662d
#undef public_6ec662f
#undef public_6ec6632
#undef public_6ec663e
