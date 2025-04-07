#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6ebae20 _public_6ebae20
#define public_6ebae3a _public_6ebae3a
#define public_6ebb2bf _public_6ebb2bf
#define public_6ebb2cf _public_6ebb2cf

PROC_DECLARE(0x6ebae00, internal_6ebae00, public_6ebae00);
extern "C" NAKED register_t __cdecl internal_6ebae00()
{
    __asm
    {
        mov al, byte ptr ds : [public_6ed60b0]
        test al, 1
        push esi
        push edi
        jne public_6ebae3a
        or al, 1
        mov byte ptr ds : [public_6ed60b0], al
        mov esi, offset public_6ed60c0
        mov edi, 0x12
        lea esp, ss:[esp]
        public_6ebae20 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6ebae20
/*FIXUP push offset _public_6ebbfb0 @0x6ebae2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ebbfb0
        call public_6ed0ccb
        add esp, 4
        public_6ebae3a : nop
        mov eax, dword ptr ds : [public_6ed60d0]
        xor edi, edi
        cmp eax, edi
        jne public_6ebb2bf
        push ebx
/*FIXUP push offset public_6ed21dc @0x6ebae4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21dc
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed60d0
        mov dword ptr ds : [public_6ed60c0], edi
        mov dword ptr ds : [public_6ed60c4], offset public_6ed41f4
        mov dword ptr ds : [public_6ed60c8], offset public_6ed41e4
        mov dword ptr ds : [public_6ed60cc], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed21cc @0x6ebae80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21cc
        push 3
        mov ecx, offset public_6ed60e4
        call public_6eb28f0
/*FIXUP push offset public_6ed21dc @0x6ebae91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21dc
        push 3
        mov ecx, offset public_6ed60f8
        call public_6eb28f0
/*FIXUP push offset public_6ed21dc @0x6ebaea2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21dc
        push 3
        mov ecx, offset public_6ed611c
        mov dword ptr ds : [public_6ed610c], edi
        mov dword ptr ds : [public_6ed6110], offset public_6ed41e0
        mov dword ptr ds : [public_6ed6114], offset public_6ed41d0
        mov dword ptr ds : [public_6ed6118], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed21cc @0x6ebaed3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21cc
        push 3
        mov ecx, offset public_6ed6130
        call public_6eb28f0
/*FIXUP push offset public_6ed21dc @0x6ebaee4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21dc
        push 3
        mov ecx, offset public_6ed6144
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6ebaef5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed6168
        mov dword ptr ds : [public_6ed6158], edi
        mov dword ptr ds : [public_6ed615c], offset public_6ed41c8
        mov dword ptr ds : [public_6ed6160], offset public_6ed45c0
        mov dword ptr ds : [public_6ed6164], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed617c
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed6190
        call public_6eb28f0
        push 4
        mov ebx, offset public_6ed41a4
        push 8
        mov ecx, offset public_6ed61b4
        mov dword ptr ds : [public_6ed61a4], edi
        mov dword ptr ds : [public_6ed61a8], ebx
        mov dword ptr ds : [public_6ed61ac], offset public_6ed45a4
        mov dword ptr ds : [public_6ed61b0], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed61c8
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed61dc
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed6200
        mov dword ptr ds : [public_6ed61f0], 0x20000
        mov dword ptr ds : [public_6ed61f4], ebx
        mov dword ptr ds : [public_6ed61f8], offset public_6ed4584
        mov dword ptr ds : [public_6ed61fc], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6214
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6228
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed624c
        mov dword ptr ds : [public_6ed623c], 0x40000
        mov dword ptr ds : [public_6ed6240], ebx
        mov dword ptr ds : [public_6ed6244], offset public_6ed4564
        mov dword ptr ds : [public_6ed6248], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6260
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6274
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed6298
        mov dword ptr ds : [public_6ed6288], edi
        mov dword ptr ds : [public_6ed628c], offset public_6ed4690
        mov dword ptr ds : [public_6ed6290], offset public_6ed4688
        mov dword ptr ds : [public_6ed6294], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed62ac
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed62c0
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed62e4
        mov dword ptr ds : [public_6ed62d4], edi
        mov dword ptr ds : [public_6ed62d8], offset public_6ed4680
        mov dword ptr ds : [public_6ed62dc], offset public_6ed4678
        mov dword ptr ds : [public_6ed62e0], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed62f8
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed630c
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6ebb0a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed6330
        mov dword ptr ds : [public_6ed6320], edi
        mov dword ptr ds : [public_6ed6324], offset public_6ed481c
        mov dword ptr ds : [public_6ed6328], offset public_6ed4800
        mov dword ptr ds : [public_6ed632c], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed6344
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed6358
        call public_6eb28f0
        push 4
        mov ebx, offset public_6ed47f4
        push 8
        mov ecx, offset public_6ed637c
        mov dword ptr ds : [public_6ed636c], edi
        mov dword ptr ds : [public_6ed6370], ebx
        mov dword ptr ds : [public_6ed6374], offset public_6ed47d4
        mov dword ptr ds : [public_6ed6378], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed6390
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed63a4
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed63c8
        mov dword ptr ds : [public_6ed63b8], 0x20000
        mov dword ptr ds : [public_6ed63bc], ebx
        mov dword ptr ds : [public_6ed63c0], offset public_6ed47ac
        mov dword ptr ds : [public_6ed63c4], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed63dc
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed63f0
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6414
        mov dword ptr ds : [public_6ed6404], 0x40000
        mov dword ptr ds : [public_6ed6408], ebx
        mov dword ptr ds : [public_6ed640c], offset public_6ed4784
        mov dword ptr ds : [public_6ed6410], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6428
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed643c
        call public_6eb28f0
/*FIXUP push offset public_6ed2320 @0x6ebb1cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed2320
        push 2
        mov ecx, offset public_6ed6460
        mov dword ptr ds : [public_6ed6450], edi
        mov dword ptr ds : [public_6ed6454], offset public_6ed4778
        mov dword ptr ds : [public_6ed6458], offset public_6ed4764
        mov dword ptr ds : [public_6ed645c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed21fc @0x6ebb1fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21fc
        push 2
        mov ecx, offset public_6ed6474
        call public_6eb28f0
/*FIXUP push offset public_6ed21ec @0x6ebb20d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21ec
        push 2
        mov ecx, offset public_6ed6488
        call public_6eb28f0
        push edi
        push edi
/*FIXUP push offset public_6ed411c @0x6ebb220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push esi
/*FIXUP push offset public_6ed4748 @0x6ebb226*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4748
/*FIXUP push offset public_6ed466c @0x6ebb22b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed466c
        push edi
        push 7
        mov ecx, offset public_6ed649c
        call public_6eb4dc0
        push edi
        push edi
        push 4
        push esi
/*FIXUP push offset public_6ed4728 @0x6ebb242*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4728
/*FIXUP push offset public_6ed464c @0x6ebb247*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push edi
        push 8
        mov ecx, offset public_6ed64e8
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed4700 @0x6ebb25d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4700
/*FIXUP push offset public_6ed464c @0x6ebb262*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push 0x20000
        push 9
        mov ecx, offset public_6ed6534
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed46d8 @0x6ebb27c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed46d8
/*FIXUP push offset public_6ed464c @0x6ebb281*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push 0x40000
        push 9
        mov ecx, offset public_6ed6580
        call public_6eb4dc0
/*FIXUP push offset public_6ed21ec @0x6ebb297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21ec
/*FIXUP push offset public_6ed21fc @0x6ebb29c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed21fc
/*FIXUP push offset public_6ed2320 @0x6ebb2a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed2320
        push esi
/*FIXUP push offset public_6ed46c4 @0x6ebb2a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed46c4
/*FIXUP push offset public_6ed46b8 @0x6ebb2ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed46b8
        push edi
        push 2
        mov ecx, offset public_6ed65cc
        call public_6eb4dc0
        pop ebx
        public_6ebb2bf : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6ebb2cf
        mov dword ptr ds : [eax], offset public_6ed60c0
        public_6ebb2cf : nop
        mov eax, 0x12
        ret 4
        UNREACHABLE_TRAP(0x6ebae00)
    }
}

#undef public_6ebae20
#undef public_6ebae3a
#undef public_6ebb2bf
#undef public_6ebb2cf
