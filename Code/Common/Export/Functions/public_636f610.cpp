#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636f610);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);

#define public_636f646 _public_636f646
#define public_636f65b _public_636f65b
#define public_636f670 _public_636f670
#define public_636f679 _public_636f679
#define public_636f689 _public_636f689
#define public_636f68f _public_636f68f
#define public_636f6a9 _public_636f6a9
#define public_636f6bf _public_636f6bf
#define public_636f6d5 _public_636f6d5
#define public_636f6de _public_636f6de
#define public_636f6f2 _public_636f6f2
#define public_636f6f9 _public_636f6f9
#define public_636f701 _public_636f701
#define public_636f71f _public_636f71f
#define public_636f771 _public_636f771

PROC_DECLARE(0x636f610, internal_636f610, public_636f610);
extern "C" NAKED register_t __cdecl internal_636f610()
{
    __asm
    {
        mov edx, dword ptr ds : [public_658b24c]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x3C]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x3C]
        mov ebp, dword ptr ds : [eax+4]
        add eax, 4
        xor ebx, ebx
        add ecx, 4
        add eax, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], ebx
        jne public_636f646
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        jmp public_636f68f
        public_636f646 : nop
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        cmp esi, ebp
        jne public_636f65b
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], 1
        jmp public_636f68f
        public_636f65b : nop
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        cmp esi, ebp
        jne public_636f670
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], 2
        jmp public_636f68f
        public_636f670 : nop
        mov ebx, 3
        cmp edx, ebx
        jle public_636f68f
        public_636f679 : nop
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        cmp esi, ebp
        je public_636f689
        inc ebx
        cmp ebx, edx
        jl public_636f679
        jmp public_636f68f
        public_636f689 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        public_636f68f : nop
        mov eax, dword ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x20]
        add ecx, 4
        cmp edi, eax
        jne public_636f6a9
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], 0
        jmp public_636f6f9
        public_636f6a9 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp edi, eax
        jne public_636f6bf
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], 1
        jmp public_636f6f9
        public_636f6bf : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp edi, eax
        jne public_636f6d5
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], 2
        jmp public_636f6f9
        public_636f6d5 : nop
        mov eax, 3
        cmp edx, eax
        jle public_636f6f9
        public_636f6de : nop
        mov ebp, dword ptr ds : [ecx]
        add ecx, 4
        cmp edi, ebp
        je public_636f6f2
        inc eax
        cmp eax, edx
        jl public_636f6de
        mov ebp, dword ptr ss : [esp+0x20]
        jmp public_636f6f9
        public_636f6f2 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp], eax
        public_636f6f9 : nop
        cmp ebx, edx
        jge public_636f701
        cmp eax, edx
        jl public_636f71f
        public_636f701 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [edi+0x4C]
        push ecx
        push edx
/*FIXUP push offset public_63eef3c @0x636f709*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eef3c
        call public_6356960
        push esi
        push edi
        push 5
        call public_637e2e0
        add esp, 0x18
        public_636f71f : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+0x34]
        push eax
        mov eax, dword ptr ds : [public_658b24c]
        push edx
        push eax
        push ecx
        call public_636e9c0
        mov ebx, eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 4
        jl public_636f771
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
        mov eax, dword ptr ds : [edi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63eef08 @0x636f762*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eef08
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_636f771 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636f610)
    }
}

#undef public_636f646
#undef public_636f65b
#undef public_636f670
#undef public_636f679
#undef public_636f689
#undef public_636f68f
#undef public_636f6a9
#undef public_636f6bf
#undef public_636f6d5
#undef public_636f6de
#undef public_636f6f2
#undef public_636f6f9
#undef public_636f701
#undef public_636f71f
#undef public_636f771
