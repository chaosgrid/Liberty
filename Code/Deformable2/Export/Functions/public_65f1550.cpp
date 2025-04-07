#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1410);
CLANG_FORWARD_PROC_SYMBOL(public_65f1420);
CLANG_FORWARD_PROC_SYMBOL(public_65f1450);
CLANG_FORWARD_PROC_SYMBOL(public_65f14a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f1550);
CLANG_FORWARD_PROC_SYMBOL(public_65f1660);
CLANG_FORWARD_PROC_SYMBOL(public_65f1d90);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f156d _public_65f156d
#define public_65f157a _public_65f157a
#define public_65f15a0 _public_65f15a0
#define public_65f15d0 _public_65f15d0
#define public_65f15d2 _public_65f15d2
#define public_65f1617 _public_65f1617
#define public_65f1641 _public_65f1641
#define public_65f1651 _public_65f1651

PROC_DECLARE(0x65f1550, internal_65f1550, public_65f1550);
extern "C" NAKED register_t __cdecl internal_65f1550()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi]
        xor ebx, ebx
        cmp ecx, esi
        je public_65f157a
        cmp ecx, ebx
        je public_65f156d
        call public_65f1420
        mov dword ptr ds : [edi], ebx
        public_65f156d : nop
        cmp esi, ebx
        mov dword ptr ds : [edi], esi
        je public_65f157a
        mov ecx, esi
        call public_65f1410
        public_65f157a : nop
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+4]
        mov ecx, esi
        imul ecx, 0x70
        push ecx
        call public_6600bb6
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_65f15d0
        lea ebp, ds:[esi-1]
        cmp ebp, ebx
        jl public_65f15d2
        lea esi, ds:[eax+0x68]
        inc ebp
        public_65f15a0 : nop
        lea ecx, ds:[esi-0x28]
        mov dword ptr ds : [esi-0x64], 0xFFFFFFFF
        mov dword ptr ds : [esi-0x60], ebx
        mov dword ptr ds : [esi-0x2C], ebx
        call public_65f1660
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi-4], ebx
        mov dword ptr ds : [esi-0x68], offset public_66010a0
        add esi, 0x70
        dec ebp
        jne public_65f15a0
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_65f15d2
        public_65f15d0 : nop
        xor eax, eax
        public_65f15d2 : nop
        push edi
/*FIXUP push offset _public_65f1450 @0x65f15d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65f1450
        mov dword ptr ds : [edi+4], eax
        call public_65f1d90
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+0x1E80]
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        push ebx
        push eax
        push ecx
        call dword ptr ds : [edx+0x5C]
        push ebx
        push ebx
        mov esi, eax
        call public_65f1d90
        add esp, 8
        cmp esi, 0xFFFFFFFF
        je public_65f1651
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        xor esi, esi
        cmp ecx, ebx
        jle public_65f1651
        xor ebp, ebp
        public_65f1617 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ebx+ecx+4], 0xFFFFFFFF
        jne public_65f1641
        mov eax, dword ptr ds : [eax+ebp+8]
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x5C]
        push eax
        push esi
        mov ecx, edi
        call public_65f14a0
        or byte ptr ds : [eax+0x3C], 1
        public_65f1641 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        inc esi
        add ebx, 0x70
        add ebp, 0x34
        cmp esi, ecx
        jl public_65f1617
        public_65f1651 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65f1550)
    }
}

#undef public_65f156d
#undef public_65f157a
#undef public_65f15a0
#undef public_65f15d0
#undef public_65f15d2
#undef public_65f1617
#undef public_65f1641
#undef public_65f1651
