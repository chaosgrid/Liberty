#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fca80);
CLANG_FORWARD_PROC_SYMBOL(public_66fdc30);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);
CLANG_FORWARD_JUMP_SYMBOL(public_6700db3);

#define public_66fda8f _public_66fda8f
#define public_66fdaab _public_66fdaab
#define public_66fdacc _public_66fdacc
#define public_66fdaf5 _public_66fdaf5
#define public_66fdb1e _public_66fdb1e
#define public_66fdb45 _public_66fdb45
#define public_66fdb5d _public_66fdb5d
#define public_66fdb76 _public_66fdb76
#define public_66fdb8d _public_66fdb8d
#define public_66fdbfc _public_66fdbfc
#define public_66fdbfe _public_66fdbfe
#define public_66fdc17 _public_66fdc17

PROC_DECLARE(0x66fda40, internal_66fda40, public_66fda40);
extern "C" NAKED register_t __cdecl internal_66fda40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700db3 @0x66fda42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700db3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp eax, ebx
        je public_66fdb76
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
/*FIXUP push offset public_6702f98 @0x66fda75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702f98
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_66fdaab
/*FIXUP push offset public_6702f40 @0x66fda85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702f40
        push 0x118
/*FIXUP public_66fda8f : nop
        push offset public_6702b2c @0x66fda8f*/
  FIXUP public_66fda8f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov eax, 0x100001
/*FIXUP push offset public_6702b10 @0x66fda99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push eax
        mov eax, dword ptr ds : [public_6701000]
        call dword ptr ds : [eax]
        jmp public_66fdb5d
        public_66fdaab : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x10]
        push esi
/*FIXUP push offset public_67012b0 @0x66fdab4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67012b0
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jge public_66fdacc
/*FIXUP push offset public_6702ee8 @0x66fdac0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ee8
        push 0x11E
        jmp public_66fda8f
        public_66fdacc : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x14]
        push esi
/*FIXUP push offset public_67011f8 @0x66fdadd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67011f8
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_66fdaf5
/*FIXUP push offset public_6702e88 @0x66fdae9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702e88
        push 0x125
        jmp public_66fdb45
        public_66fdaf5 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x18]
        push esi
/*FIXUP push offset public_6701310 @0x66fdb06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701310
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_66fdb1e
/*FIXUP push offset public_6702e30 @0x66fdb12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702e30
        push 0x12C
        jmp public_66fdb45
        public_66fdb1e : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0xC]
        push esi
/*FIXUP push offset public_6702e20 @0x66fdb2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702e20
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_66fdb8d
/*FIXUP push offset public_6702dd0 @0x66fdb3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702dd0
        push 0x133
        public_66fdb45 : nop
        mov edx, dword ptr ds : [public_6701000]
/*FIXUP push offset public_6702b2c @0x66fdb4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov eax, 0x100001
/*FIXUP push offset public_6702b10 @0x66fdb55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push eax
        call dword ptr ds : [edx]
        public_66fdb5d : nop
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x14
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_66fdb76
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fdb76 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_66fdb8d : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        call public_66fca80
        push 0x88
        call public_6700810
        mov esi, eax
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x18], 1
        je public_66fdbfc
        push ebp
        lea ebp, ds:[esi+0xC]
        mov ecx, ebp
        mov dword ptr ds : [esi+4], ebx
        call public_66fdc30
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        lea ebp, ds:[esi+0x3C]
        mov ecx, ebp
        call public_66fdc30
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov dword ptr ds : [esi+0x84], 1
        mov dword ptr ds : [esi], offset public_6702d88
        pop ebp
        jmp public_66fdbfe
        public_66fdbfc : nop
        xor esi, esi
        public_66fdbfe : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_66fdc17
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_66fdc17 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x66fda40)
    }
}

#undef public_66fda8f
#undef public_66fdaab
#undef public_66fdacc
#undef public_66fdaf5
#undef public_66fdb1e
#undef public_66fdb45
#undef public_66fdb5d
#undef public_66fdb76
#undef public_66fdb8d
#undef public_66fdbfc
#undef public_66fdbfe
#undef public_66fdc17
