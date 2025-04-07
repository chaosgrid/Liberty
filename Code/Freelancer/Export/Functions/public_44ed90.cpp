#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_44d630);
CLANG_FORWARD_PROC_SYMBOL(public_44d6a0);
CLANG_FORWARD_PROC_SYMBOL(public_44d810);
CLANG_FORWARD_PROC_SYMBOL(public_44d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_44da40);
CLANG_FORWARD_PROC_SYMBOL(public_44dba0);
CLANG_FORWARD_PROC_SYMBOL(public_44dc20);
CLANG_FORWARD_PROC_SYMBOL(public_44dd80);
CLANG_FORWARD_PROC_SYMBOL(public_44ded0);
CLANG_FORWARD_PROC_SYMBOL(public_44e030);
CLANG_FORWARD_PROC_SYMBOL(public_44e180);
CLANG_FORWARD_PROC_SYMBOL(public_44e1f0);
CLANG_FORWARD_PROC_SYMBOL(public_44e260);
CLANG_FORWARD_PROC_SYMBOL(public_44e2d0);
CLANG_FORWARD_PROC_SYMBOL(public_44e340);
CLANG_FORWARD_PROC_SYMBOL(public_44e3c0);
CLANG_FORWARD_PROC_SYMBOL(public_44ed90);
CLANG_FORWARD_PROC_SYMBOL(public_45b430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_44edc4 _public_44edc4
#define public_44edd3 _public_44edd3
#define public_44ede3 _public_44ede3
#define public_44ee32 _public_44ee32
#define public_44ee4f _public_44ee4f
#define public_44ee7c _public_44ee7c
#define public_44ee96 _public_44ee96
#define public_44eee5 _public_44eee5
#define public_44ef09 _public_44ef09
#define public_44ef1b _public_44ef1b
#define public_44ef29 _public_44ef29
#define public_44ef57 _public_44ef57
#define public_44ef61 _public_44ef61
#define public_44ef6f _public_44ef6f
#define public_44ef7d _public_44ef7d
#define public_44ef8b _public_44ef8b
#define public_44ef99 _public_44ef99
#define public_44efaf _public_44efaf
#define public_44efb9 _public_44efb9
#define public_44efcc _public_44efcc
#define public_44efd3 _public_44efd3
#define public_44efed _public_44efed
#define public_44f014 _public_44f014
#define public_44f035 _public_44f035
#define public_44f03e _public_44f03e
#define public_44f05f _public_44f05f
#define public_44f065 _public_44f065
#define public_44f078 _public_44f078
#define public_44f080 _public_44f080
#define public_44f09d _public_44f09d
#define public_44f0a2 _public_44f0a2
#define public_44f0a8 _public_44f0a8
#define public_44f0c6 _public_44f0c6
#define public_44f0cb _public_44f0cb
#define public_44f0d5 _public_44f0d5
#define public_44f15b _public_44f15b
#define public_44f176 _public_44f176
#define public_44f198 _public_44f198
#define public_44f1c0 _public_44f1c0
#define public_44f1d5 _public_44f1d5
#define public_44f1ed _public_44f1ed
#define public_44f224 _public_44f224
#define public_44f228 _public_44f228
#define public_44f231 _public_44f231

PROC_DECLARE(0x44ed90, internal_44ed90, public_44ed90);
extern "C" NAKED register_t __cdecl internal_44ed90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x18]
        mov ebx, eax
        lea edx, ds:[ebx*4]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        call public_5b7e84
        mov dword ptr ds : [esi+0x48], eax
        add esp, 4
        xor eax, eax
        test ebx, ebx
        mov dword ptr ds : [esi+0x4C], ebx
        jle public_44edd3
        public_44edc4 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [ecx+eax*4], 0
        inc eax
        cmp eax, ebx
        jl public_44edc4
        public_44edd3 : nop
        xor ebp, ebp
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x24], ebp
        jle public_44f078
        public_44ede3 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x24]
        mov edx, dword ptr ds : [esi+0x3C]
        mov ebx, dword ptr ds : [public_5c625c]
        mov ebp, eax
        mov al, byte ptr ss : [ebp+4]
        and al, 1
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, eax
/*FIXUP push offset public_5cc57c @0x44ee06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc57c
        shr ecx, 1
        shr eax, 2
        and cl, 1
        and al, 1
        push edi
        push edx
        mov byte ptr ss : [esp+0x40], cl
        mov byte ptr ss : [esp+0x3C], al
        mov byte ptr ss : [esp+0x28], 1
        call ebx
        add esp, 0xC
        test eax, eax
        je public_44ee32
        mov byte ptr ss : [esp+0x1C], 0
        public_44ee32 : nop
        mov eax, dword ptr ds : [esi+0x3C]
/*FIXUP push offset public_5cc56c @0x44ee35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc56c
        push edi
        push eax
        mov byte ptr ss : [esp+0x24], 0
        call ebx
        add esp, 0xC
        test eax, eax
        je public_44ee4f
        mov byte ptr ss : [esp+0x18], 1
        public_44ee4f : nop
        mov ecx, dword ptr ds : [esi+0x3C]
/*FIXUP push offset public_5cabec @0x44ee52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabec
        push edi
        push ecx
        call ebx
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_44ee7c
        push eax
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_44f065
        mov eax, dword ptr ss : [esp+0x20]
        public_44ee7c : nop
        mov ecx, dword ptr ss : [ebp]
        xor ebx, ebx
        dec ecx
        cmp ecx, 0xC
        mov dword ptr ss : [esp+0x20], ebx
        ja public_44f05f
/*FIXUP jmp dword ptr ds : [ecx*4+public_44f23c] @0x44ee8f*/
  JMPTB cmp ecx, 0
  JMPTB je public_44ef7d
  JMPTB cmp ecx, 1
  JMPTB je public_44ef6f
  JMPTB cmp ecx, 2
  JMPTB je public_44ef99
  JMPTB cmp ecx, 3
  JMPTB je public_44ef8b
  JMPTB cmp ecx, 4
  JMPTB je public_44efb9
  JMPTB cmp ecx, 5
  JMPTB je public_44ef29
  JMPTB cmp ecx, 6
  JMPTB je public_44ef1b
  JMPTB cmp ecx, 7
  JMPTB je public_44f05f
  JMPTB cmp ecx, 8
  JMPTB je public_44ee96
  JMPTB cmp ecx, 9
  JMPTB je public_44f05f
  JMPTB cmp ecx, 0xA
  JMPTB je public_44f05f
  JMPTB cmp ecx, 0xB
  JMPTB je public_44f05f
  JMPTB cmp ecx, 0xC
  JMPTB je public_44efd3
  JMPTB int 3
        public_44ee96 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_5cc560 @0x44ee9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc560
        push edi
        push eax
        call dword ptr ds : [public_5c6268]
        mov edx, dword ptr ds : [esi+0x3C]
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5cc554 @0x44eeb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc554
        push edi
        push edx
        mov byte ptr ss : [esp+0x33], al
        call dword ptr ds : [public_5c6264]
        mov cl, byte ptr ss : [esp+0x33]
        add esp, 0x20
        test cl, cl
        je public_44eee5
        test al, al
        je public_44eee5
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        call public_45b430
        add esp, 8
        public_44eee5 : nop
        mov edx, dword ptr ds : [esi+0x3C]
/*FIXUP push offset public_5cabec @0x44eee8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabec
        push edi
        push edx
        call dword ptr ds : [public_5c625c]
        add esp, 0xC
        test eax, eax
        je public_44ef09
        push eax
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        mov dword ptr ds : [esi+0x58], eax
        public_44ef09 : nop
        push ebp
        push edi
        mov ecx, esi
        call public_44d630
        mov dword ptr ss : [esp+0x24], eax
        jmp public_44f03e
        public_44ef1b : nop
        push ebp
        push edi
        mov ecx, esi
        call public_44d810
        jmp public_44f03e
        public_44ef29 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_44ef61
        mov ecx, dword ptr ds : [public_611004]
        mov eax, dword ptr ss : [ebp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        push ebp
        mov ecx, esi
        push edi
        je public_44ef57
        call public_44e030
        jmp public_44f03e
        public_44ef57 : nop
        call public_44e180
        jmp public_44f03e
        public_44ef61 : nop
        push ebp
        push edi
        mov ecx, esi
        call public_44e1f0
        jmp public_44f03e
        public_44ef6f : nop
        push ebp
        push edi
        mov ecx, esi
        call public_44ded0
        jmp public_44f03e
        public_44ef7d : nop
        push ebp
        push edi
        mov ecx, esi
        call public_44dd80
        jmp public_44f03e
        public_44ef8b : nop
        push ebp
        push edi
        mov ecx, esi
        call public_44d9b0
        jmp public_44f03e
        public_44ef99 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        push ebp
        mov ecx, esi
        push edi
        jne public_44efaf
        call public_44dba0
        jmp public_44f03e
        public_44efaf : nop
        call public_44dc20
        jmp public_44f03e
        public_44efb9 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        push ebp
        mov ecx, esi
        push edi
        jne public_44efcc
        call public_44e260
        jmp public_44f03e
        public_44efcc : nop
        call public_44e2d0
        jmp public_44f03e
        public_44efd3 : nop
        test eax, eax
        jne public_44efed
/*FIXUP push offset public_5cc540 @0x44efd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc540
        call dword ptr ds : [public_5c61a8]
        mov ebx, dword ptr ss : [esp+0x24]
        add esp, 4
        test al, al
        je public_44f05f
        public_44efed : nop
        mov edx, dword ptr ds : [public_611008]
        mov eax, dword ptr ss : [ebp+0x3C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44f014
        push ebp
        push edi
        mov ecx, esi
        call public_44e3c0
        jmp public_44f03e
        public_44f014 : nop
        mov eax, dword ptr ds : [public_61100c]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44f035
        call public_446be0
        test eax, eax
        je public_44f05f
        public_44f035 : nop
        push ebp
        mov ecx, esi
        push edi
        call public_44e340
        public_44f03e : nop
        mov ebx, eax
        test ebx, ebx
        je public_44f05f
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x50]
        public_44f05f : nop
        mov edx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [edx+edi*4], ebx
        public_44f065 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jl public_44ede3
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        public_44f078 : nop
        xor edi, edi
        test ebx, ebx
        jle public_44f0a2
        mov edi, edi
        public_44f080 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_44f09d
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x4C]
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+0x3C]
        public_44f09d : nop
        inc edi
        cmp edi, ebx
        jl public_44f080
        public_44f0a2 : nop
        xor edi, edi
        test ebx, ebx
        jle public_44f0cb
        public_44f0a8 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_44f0c6
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov dword ptr ds : [ecx+0x24], edi
        public_44f0c6 : nop
        inc edi
        cmp edi, ebx
        jl public_44f0a8
        public_44f0cb : nop
        xor ebp, ebp
        test ebx, ebx
        jle public_44f231
        public_44f0d5 : nop
        mov edx, dword ptr ds : [esi+0x48]
        cmp dword ptr ds : [edx+ebp*4], 0
        je public_44f228
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [edx+ebp*4]
        mov edi, eax
        mov al, byte ptr ds : [edi+4]
        and al, 1
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x58]
        test al, al
        jne public_44f224
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_44f224
        mov eax, dword ptr ds : [edi]
        cmp eax, 3
        jne public_44f15b
        mov ecx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [ecx+ebp*4]
        mov ecx, dword ptr ds : [edi+0x44]
        mov edx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [edx+ebp*4]
        mov edx, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov edx, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        jmp public_44f176
        public_44f15b : nop
        cmp eax, 6
        jne public_44f176
        mov eax, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [eax+4]
        push 0xFFFFFFFF
        lea edx, ds:[edi+0x44]
        add eax, 4
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_44f176 : nop
        mov al, byte ptr ds : [esi+0x56]
        test al, al
        je public_44f1d5
        mov eax, dword ptr ds : [edi]
        cmp eax, 1
        je public_44f198
        cmp eax, 2
        je public_44f198
        cmp eax, 3
        je public_44f198
        cmp eax, 6
        je public_44f198
        cmp eax, 0xD
        jne public_44f1c0
        public_44f198 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ds:[edi+8]
        add eax, 0xC
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ds:[edi+0x14]
        add eax, 0xC
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_44f1c0 : nop
        cmp dword ptr ds : [edi], 2
        jne public_44f1d5
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        public_44f1d5 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, 7
        jne public_44f1ed
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+ebp*4]
        push ecx
        push edi
        mov ecx, esi
        call public_44d6a0
        jmp public_44f224
        public_44f1ed : nop
        cmp eax, 3
        jne public_44f224
        lea edx, ds:[edi+0x44]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ds : [eax+ebp*4]
        lea edx, ss:[esp+0x38]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_44da40
        public_44f224 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_44f228 : nop
        inc ebp
        cmp ebp, ebx
        jl public_44f0d5
        public_44f231 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x44ed90)
        ASM_EXPORT_ENTRY_SINGLE(0x44efd3, public_44efd3)
    }
}

#undef public_44edc4
#undef public_44edd3
#undef public_44ede3
#undef public_44ee32
#undef public_44ee4f
#undef public_44ee7c
#undef public_44ee96
#undef public_44eee5
#undef public_44ef09
#undef public_44ef1b
#undef public_44ef29
#undef public_44ef57
#undef public_44ef61
#undef public_44ef6f
#undef public_44ef7d
#undef public_44ef8b
#undef public_44ef99
#undef public_44efaf
#undef public_44efb9
#undef public_44efcc
#undef public_44efd3
#undef public_44efed
#undef public_44f014
#undef public_44f035
#undef public_44f03e
#undef public_44f05f
#undef public_44f065
#undef public_44f078
#undef public_44f080
#undef public_44f09d
#undef public_44f0a2
#undef public_44f0a8
#undef public_44f0c6
#undef public_44f0cb
#undef public_44f0d5
#undef public_44f15b
#undef public_44f176
#undef public_44f198
#undef public_44f1c0
#undef public_44f1d5
#undef public_44f1ed
#undef public_44f224
#undef public_44f228
#undef public_44f231

#pragma init_seg(compiler)
extern "C" void const* const public_44efd3 = __AsmFindLabelExport(&internal_44ed90, 0x44efd3);
