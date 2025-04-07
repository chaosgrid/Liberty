#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c41f0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4670);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6efe);

#define public_65c4c82 _public_65c4c82
#define public_65c4ce3 _public_65c4ce3
#define public_65c4d01 _public_65c4d01
#define public_65c4d57 _public_65c4d57

PROC_DECLARE(0x65c4bf0, internal_65c4bf0, public_65c4bf0);
extern "C" NAKED register_t __cdecl internal_65c4bf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6efe @0x65c4bf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6efe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x56C]
        mov dword ptr ss : [esp+0xC], esi
        call public_65c41f0
        lea ebp, ds:[esi+4]
        push ebp
/*FIXUP push offset public_65c75b0 @0x65c4c20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75b0
        xor edi, edi
        push 1
        push edi
        mov dword ptr ds : [esi], offset public_65c74d8
        mov dword ptr ss : [ebp], edi
        mov byte ptr ds : [esi+0x564], 0
        mov dword ptr ds : [esi+0x998], edi
        mov dword ptr ds : [esi+0x560], edi
/*FIXUP push offset public_65c75d0 @0x65c4c46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75d0
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ds : [public_65ca284], esi
        call dword ptr ds : [public_65c70e0]
        test eax, eax
        je public_65c4c82
        push edi
        push 0xD4
        call dword ptr ds : [public_65ca0b4]
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_65c4c82 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, edi
        je public_65c4d57
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
/*FIXUP push offset _public_65c4670 @0x65c4c91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c4670
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        lea ebx, ds:[esi+8]
        xor eax, eax
        mov ecx, 0x12
        mov edi, ebx
        rep stosd
        lea eax, ds:[esi+0x50]
/*FIXUP push offset public_65c7508 @0x65c4cac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7508
        push eax
        mov dword ptr ds : [ebx], 0x48
        mov dword ptr ds : [esi+0xC], 1
        mov dword ptr ds : [esi+0x30], 0x10
        mov dword ptr ds : [esi+0x38], eax
        call dword ptr ds : [public_65c707c]
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        add esp, 8
        cmp eax, edi
        je public_65c4ce3
        mov edx, dword ptr ds : [eax]
        push edi
        push ebx
        push eax
        call dword ptr ds : [edx+0x30]
        public_65c4ce3 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [ebp]
        and edx, 0xFFFFFF7F
        cmp eax, edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0xC], edx
        je public_65c4d01
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_65c4d01 : nop
        mov eax, dword ptr ds : [public_65c74e4]
        mov ebp, dword ptr ss : [ebp]
        lea edx, ds:[esi+0x20]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [public_65c74e8]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [public_65c74ec]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [public_65c74f0]
        mov eax, 0x3E8
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x24], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ds : [edx+0xC], ecx
        mov dword ptr ss : [esp+0x1C], 0x14
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x28], 5
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0x74]
        pop ebx
        public_65c4d57 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x65c4bf0)
    }
}

#undef public_65c4c82
#undef public_65c4ce3
#undef public_65c4d01
#undef public_65c4d57
