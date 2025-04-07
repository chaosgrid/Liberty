#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700cf8);

#define public_66fa477 _public_66fa477
#define public_66fa495 _public_66fa495
#define public_66fa4bb _public_66fa4bb
#define public_66fa4ed _public_66fa4ed
#define public_66fa4f7 _public_66fa4f7
#define public_66fa50d _public_66fa50d

PROC_DECLARE(0x66fa3f0, internal_66fa3f0, public_66fa3f0);
extern "C" NAKED register_t __cdecl internal_66fa3f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700cf8 @0x66fa3f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700cf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov cl, byte ptr ds : [esi+0x78]
        test cl, cl
        mov eax, dword ptr ds : [esi+8]
        push edi
        jne public_66fa495
        lea edi, ds:[esi+0x74]
        mov dword ptr ds : [esi+0x6C], eax
        cmp dword ptr ds : [edi], 0
        mov byte ptr ds : [esi+0x78], 1
        jne public_66fa495
/*FIXUP push offset public_67025e0 @0x66fa427*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67025e0
        mov dword ptr ss : [esp+0xC], offset public_67025e0
        call dword ptr ds : [public_6701004]
        add esp, 4
        push edi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jge public_66fa477
/*FIXUP push offset public_67025ac @0x66fa454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67025ac
        push 0x24
/*FIXUP push offset public_670257c @0x66fa45b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670257c
        mov eax, 0x100002
/*FIXUP push offset public_6702560 @0x66fa465*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702560
        push eax
        mov eax, dword ptr ds : [public_6701000]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_66fa495
        public_66fa477 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [edi]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        test eax, eax
        jl public_66fa495
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x70], eax
        public_66fa495 : nop
        mov edi, dword ptr ss : [esp+0x38]
        test edi, edi
        je public_66fa50d
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_66fa50d
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, dword ptr ds : [esi+0x68]
        je public_66fa4bb
        mov dword ptr ds : [esi+0x68], eax
        public_66fa4bb : nop
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
/*FIXUP push offset public_67013f0 @0x66fa4cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [ecx]
        test eax, eax
        push edi
        jge public_66fa4ed
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        jmp public_66fa4f7
        public_66fa4ed : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        public_66fa4f7 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_66fa50d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fa50d : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x66fa3f0)
    }
}

#undef public_66fa477
#undef public_66fa495
#undef public_66fa4bb
#undef public_66fa4ed
#undef public_66fa4f7
#undef public_66fa50d
