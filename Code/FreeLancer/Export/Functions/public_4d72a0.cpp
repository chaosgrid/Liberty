#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4d72a0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_JUMP_SYMBOL(public_5be258);

#define public_4d732b _public_4d732b

PROC_DECLARE(0x4d72a0, internal_4d72a0, public_4d72a0);
extern "C" NAKED register_t __cdecl internal_4d72a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be258 @0x4d72a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be258
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        call public_420d40
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], offset public_5d2efc
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov edi, dword ptr ss : [esp+0x58]
        push 1
        push 0
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ds : [esi+0x28], 0
        call public_59ec80
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        jne public_4d732b
        push edi
        push 0xF7
/*FIXUP push offset public_5d8198 @0x4d7311*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8198
        mov eax, 0x100001
/*FIXUP push offset public_5d8160 @0x4d731b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8160
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4d732b : nop
        fld dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0xC], 0
        fmul dword ptr ds : [public_5c77f4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [public_5c6d90]
        fst dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x10], 0
        fcos 
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0x3F800000
        fld dword ptr ss : [esp+0x58]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x4d72a0)
    }
}

#undef public_4d732b
