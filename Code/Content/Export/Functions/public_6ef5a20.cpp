#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f67440);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ef5a43 _public_6ef5a43
#define public_6ef5a61 _public_6ef5a61
#define public_6ef5a70 _public_6ef5a70
#define public_6ef5a7b _public_6ef5a7b
#define public_6ef5a7d _public_6ef5a7d
#define public_6ef5a90 _public_6ef5a90
#define public_6ef5a9b _public_6ef5a9b
#define public_6ef5aa0 _public_6ef5aa0
#define public_6ef5ad0 _public_6ef5ad0
#define public_6ef5adb _public_6ef5adb
#define public_6ef5add _public_6ef5add
#define public_6ef5ae1 _public_6ef5ae1
#define public_6ef5ae2 _public_6ef5ae2
#define public_6ef5af0 _public_6ef5af0
#define public_6ef5b26 _public_6ef5b26
#define public_6ef5b35 _public_6ef5b35
#define public_6ef5b41 _public_6ef5b41

PROC_DECLARE(0x6ef5a20, internal_6ef5a20, public_6ef5a20);
extern "C" NAKED register_t __cdecl internal_6ef5a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        push ebp
        push esi
        push edi
        je public_6ef5b35
        mov ebp, dword ptr ss : [esp+0x24]
        add ecx, 4
        mov dword ptr ss : [esp+0x10], ecx
        public_6ef5a43 : nop
        mov esi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        xor edi, edi
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x24], edx
        je public_6ef5af0
        public_6ef5a61 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef5a7b
        nop 
        lea esp, ss:[esp]
        public_6ef5a70 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef5a7d
        add eax, 4
        cmp eax, ecx
        jne public_6ef5a70
        public_6ef5a7b : nop
        mov eax, ecx
        public_6ef5a7d : nop
        cmp eax, ecx
        jne public_6ef5ae1
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x2C]
        cmp eax, ecx
        je public_6ef5a9b
        nop 
        lea esp, ss:[esp]
        public_6ef5a90 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef5aa0
        add eax, 4
        cmp eax, ecx
        jne public_6ef5a90
        public_6ef5a9b : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, ecx
        public_6ef5aa0 : nop
        cmp eax, ecx
        jne public_6ef5ae1
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        lea eax, ds:[esi+0x10]
        je public_6ef5ae2
/*FIXUP push offset public_6fd0830 @0x6ef5aae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push eax
        call public_6f32480
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+0x2C]
        add eax, 0x14
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, eax
        je public_6ef5adb
        lea ecx, ds:[ecx]
        public_6ef5ad0 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6ef5add
        add ecx, 4
        cmp ecx, eax
        jne public_6ef5ad0
        public_6ef5adb : nop
        mov ecx, eax
        public_6ef5add : nop
        cmp ecx, eax
        je public_6ef5ae2
        public_6ef5ae1 : nop
        inc edi
        public_6ef5ae2 : nop
        mov eax, dword ptr ss : [ebp+0x30]
        add esi, 0x38
        cmp esi, eax
        jne public_6ef5a61
        public_6ef5af0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f75f30
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_6fcf2f8 @0x6ef5b03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcf2f8
/*FIXUP push offset public_6fcf300 @0x6ef5b08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcf300
        push edx
        push eax
        call public_6f67440
        add esp, 0x18
        cmp edi, 1
        jl public_6ef5b26
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, edi
        cmp eax, ecx
        jg public_6ef5b41
        public_6ef5b26 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [eax+4]
        jne public_6ef5a43
        public_6ef5b35 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 0xC
        public_6ef5b41 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ef5a20)
    }
}

#undef public_6ef5a43
#undef public_6ef5a61
#undef public_6ef5a70
#undef public_6ef5a7b
#undef public_6ef5a7d
#undef public_6ef5a90
#undef public_6ef5a9b
#undef public_6ef5aa0
#undef public_6ef5ad0
#undef public_6ef5adb
#undef public_6ef5add
#undef public_6ef5ae1
#undef public_6ef5ae2
#undef public_6ef5af0
#undef public_6ef5b26
#undef public_6ef5b35
#undef public_6ef5b41
