#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225a50);
CLANG_FORWARD_PROC_SYMBOL(public_6230840);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249809);

#define public_622f63e _public_622f63e
#define public_622f640 _public_622f640
#define public_622f660 _public_622f660
#define public_622f66d _public_622f66d

PROC_DECLARE(0x622f550, internal_622f550, public_622f550);
extern "C" NAKED register_t __cdecl internal_622f550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249809 @0x622f552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249809
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push edi
        push 0xA8
        mov ebp, ecx
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0
        je public_622f63e
        push esi
        lea esi, ds:[edi+4]
        mov ecx, esi
        mov dword ptr ds : [edi], offset public_624ba48
        mov dword ptr ss : [esp+0x10], esi
        call public_6243ff0
        lea ecx, ds:[esi+0x64]
        mov byte ptr ss : [esp+0x1C], 1
        call public_6230840
        mov dword ptr ds : [esi+0x5C], offset public_624bd84
        lea ecx, ds:[esi+0x84]
        mov byte ptr ss : [esp+0x1C], 2
        call public_6230840
        mov dword ptr ds : [esi+0x7C], offset public_624bd84
        lea ecx, ds:[esi+0x64]
/*FIXUP push offset public_6257a70 @0x622f5d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257a70
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [esi], offset public_624e4d8
        call public_6225a50
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        call public_623ef70
        add esp, 4
        lea ecx, ds:[esi+0x84]
        mov dword ptr ds : [esi+0x60], eax
/*FIXUP push offset public_6257a70 @0x622f5fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257a70
        call public_6225a50
        mov eax, dword ptr ds : [esi+0x8C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x9C], 0
        mov dword ptr ds : [esi], offset public_624e790
        mov dword ptr ds : [edi], offset public_624e730
        mov dword ptr ds : [edi+0xA4], 1
        pop esi
        jmp public_622f640
        public_622f63e : nop
        xor edi, edi
        public_622f640 : nop
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        cmp eax, edi
        je public_622f66d
        test eax, eax
        je public_622f660
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0x7C], 0
        public_622f660 : nop
        test edi, edi
        mov dword ptr ss : [ebp+0x7C], edi
        je public_622f66d
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_622f66d : nop
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+4]
        mov dword ptr ss : [ebp+0xC0], edi
        mov dword ptr ss : [ebp+0xA8], eax
        mov dword ptr ss : [ebp+0x80], eax
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x622f550)
    }
}

#undef public_622f63e
#undef public_622f640
#undef public_622f660
#undef public_622f66d
