#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f59b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f59d0);

#define public_65f5a2b _public_65f5a2b
#define public_65f5a35 _public_65f5a35
#define public_65f5a48 _public_65f5a48
#define public_65f5a60 _public_65f5a60
#define public_65f5aa8 _public_65f5aa8
#define public_65f5ac5 _public_65f5ac5
#define public_65f5ad3 _public_65f5ad3

PROC_DECLARE(0x65f59d0, internal_65f59d0, public_65f59d0);
extern "C" NAKED register_t __cdecl internal_65f59d0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ds : [public_6603134]
        push ebx
        push esi
        lea edx, ss:[esp+8]
        push edx
        mov ebx, ecx
        xor esi, esi
/*FIXUP push offset public_6602634 @0x65f59e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602634
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f5a35
/*FIXUP push offset public_66025f4 @0x65f59f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66025f4
        push 0x4EF
/*FIXUP push offset public_6602570 @0x65f5a03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f5a0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x14
        cmp eax, esi
        je public_65f5a2b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_65f5a2b : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 8
        public_65f5a35 : nop
        cmp dword ptr ds : [ebx+4], esi
        mov dword ptr ss : [esp+0x10], esi
        jle public_65f5ac5
        push ebp
        push edi
        mov dword ptr ss : [esp+0x14], esi
        public_65f5a48 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [eax+edx]
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        jle public_65f5aa8
        xor ebp, ebp
        xor ebx, ebx
        nop 
        public_65f5a60 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov ecx, dword ptr ds : [ebx+eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+ebp+8]
        push ecx
/*FIXUP push offset _public_65f59b0 @0x65f5a8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65f59b0
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi+8]
        inc edi
        add ebx, 0x70
        add ebp, 0x34
        cmp edi, eax
        jl public_65f5a60
        mov ebx, dword ptr ss : [esp+0x1C]
        public_65f5aa8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+4]
        inc eax
        add edx, 0x34
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_65f5a48
        pop edi
        pop ebp
        public_65f5ac5 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_65f5ad3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65f5ad3 : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x65f59d0)
    }
}

#undef public_65f5a2b
#undef public_65f5a35
#undef public_65f5a48
#undef public_65f5a60
#undef public_65f5aa8
#undef public_65f5ac5
#undef public_65f5ad3
