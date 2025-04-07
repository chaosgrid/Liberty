#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27640);
CLANG_FORWARD_PROC_SYMBOL(public_6c33a10);
CLANG_FORWARD_PROC_SYMBOL(public_6c33bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c33a27 _public_6c33a27
#define public_6c33a7d _public_6c33a7d
#define public_6c33ab8 _public_6c33ab8
#define public_6c33ac9 _public_6c33ac9
#define public_6c33ad6 _public_6c33ad6
#define public_6c33b00 _public_6c33b00
#define public_6c33b14 _public_6c33b14
#define public_6c33b28 _public_6c33b28
#define public_6c33b72 _public_6c33b72
#define public_6c33b97 _public_6c33b97
#define public_6c33bbf _public_6c33bbf
#define public_6c33bdc _public_6c33bdc

PROC_DECLARE(0x6c33a10, internal_6c33a10, public_6c33a10);
extern "C" NAKED register_t __cdecl internal_6c33a10()
{
    __asm
    {
        sub esp, 0x420
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x2C]
        test al, al
        push esi
        je public_6c33a27
        call public_6c33bf0
        public_6c33a27 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x18], 0x10
        call dword ptr ds : [public_6c36004]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_6c37118 @0x6c33a4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37118
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6c33a7d
/*FIXUP push offset public_6c37c10 @0x6c33a5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37c10
        push 0x563
/*FIXUP push offset public_6c37a38 @0x6c33a64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a38
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c33a6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        jmp public_6c33ab8
        public_6c33a7d : nop
        mov ecx, dword ptr ds : [public_6c37a24]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push 3
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        mov ebx, eax
        cmp ebx, esi
        jne public_6c33ad6
        mov edx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37bc8 @0x6c33a9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37bc8
        push 0x568
/*FIXUP push offset public_6c37a38 @0x6c33aa6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a38
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c33ab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        call dword ptr ds : [edx]
        public_6c33ab8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x14
        cmp eax, esi
        je public_6c33ac9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6c33ac9 : nop
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x420
        ret 
        public_6c33ad6 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push 0x400
        lea ecx, ss:[esp+0x2C]
        push ecx
        push esi
        push ebx
        push eax
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_6c33bbf
        push edi
        lea esp, ss:[esp]
        public_6c33b00 : nop
        lea ecx, ss:[esp+0x2C]
        mov al, byte ptr ds : [ecx]
        cmp al, 0x3B
        je public_6c33b97
        test al, al
        mov edx, ecx
        je public_6c33b28
        public_6c33b14 : nop
        cmp al, 9
        je public_6c33b28
        cmp al, 0x20
        je public_6c33b28
        cmp al, 0x3B
        je public_6c33b28
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        test al, al
        jne public_6c33b14
        public_6c33b28 : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [public_6c37d4c]
        mov byte ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_6c36004]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6c33b97
        mov esi, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6c34eac
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6c33b72
        mov edi, eax
        public_6c33b72 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6c27640
        mov eax, dword ptr ss : [ebp+0x24]
        add esp, 8
        inc eax
        mov dword ptr ss : [ebp+0x24], eax
        xor esi, esi
        public_6c33b97 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push 0x400
        inc ecx
        lea edi, ss:[esp+0x30]
        push edi
        push ecx
        push ebx
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6c33b00
        pop edi
        public_6c33bbf : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        mov byte ptr ss : [ebp+0x2C], 1
        je public_6c33bdc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6c33bdc : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x420
        ret 
        UNREACHABLE_TRAP(0x6c33a10)
    }
}

#undef public_6c33a27
#undef public_6c33a7d
#undef public_6c33ab8
#undef public_6c33ac9
#undef public_6c33ad6
#undef public_6c33b00
#undef public_6c33b14
#undef public_6c33b28
#undef public_6c33b72
#undef public_6c33b97
#undef public_6c33bbf
#undef public_6c33bdc
