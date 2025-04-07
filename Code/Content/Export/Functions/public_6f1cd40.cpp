#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cd40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadccd);

#define public_6f1cd80 _public_6f1cd80
#define public_6f1cd8d _public_6f1cd8d
#define public_6f1cda1 _public_6f1cda1
#define public_6f1cdc0 _public_6f1cdc0
#define public_6f1cdcd _public_6f1cdcd
#define public_6f1cde1 _public_6f1cde1
#define public_6f1ce30 _public_6f1ce30
#define public_6f1ce3d _public_6f1ce3d
#define public_6f1ce51 _public_6f1ce51

PROC_DECLARE(0x6f1cd40, internal_6f1cd40, public_6f1cd40);
extern "C" NAKED register_t __cdecl internal_6f1cd40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadccd @0x6f1cd42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadccd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6fb85b8
        mov eax, dword ptr ss : [ebp+0x30]
        mov edi, dword ptr ds : [eax]
        lea esi, ss:[ebp+0x28]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr ss : [esp+0x24], 1
        je public_6f1cda1
        nop 
        public_6f1cd80 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_6f1cd8d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1cd8d : nop
        mov edx, dword ptr ds : [esi]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f1cd80
        public_6f1cda1 : nop
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6fb479c
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov byte ptr ss : [esp+0x24], 2
        je public_6f1cde1
        lea esp, ss:[esp]
        public_6f1cdc0 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_6f1cdcd
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6f1cdcd : nop
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f1cdc0
        public_6f1cde1 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], bl
        call public_6fa8370
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        lea esi, ss:[ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_6fb479c
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x24], 3
        je public_6f1ce51
        nop 
        lea esp, ss:[esp]
        public_6f1ce30 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_6f1ce3d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1ce3d : nop
        mov edx, dword ptr ds : [esi]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f1ce30
        public_6f1ce51 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6fa8370
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [esi+4], ebx
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f1cd40)
    }
}

#undef public_6f1cd80
#undef public_6f1cd8d
#undef public_6f1cda1
#undef public_6f1cdc0
#undef public_6f1cdcd
#undef public_6f1cde1
#undef public_6f1ce30
#undef public_6f1ce3d
#undef public_6f1ce51
