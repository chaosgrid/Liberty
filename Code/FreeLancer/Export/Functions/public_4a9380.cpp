#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a92a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a9380);
CLANG_FORWARD_PROC_SYMBOL(public_4afe30);
CLANG_FORWARD_PROC_SYMBOL(public_4b0370);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bce03);

#define public_4a9495 _public_4a9495
#define public_4a9497 _public_4a9497
#define public_4a94db _public_4a94db
#define public_4a9523 _public_4a9523
#define public_4a9567 _public_4a9567
#define public_4a95a7 _public_4a95a7

PROC_DECLARE(0x4a9380, internal_4a9380, public_4a9380);
extern "C" NAKED register_t __cdecl internal_4a9380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bce03 @0x4a9382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bce03
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        push esi
        push 0x980
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_4a9495
        mov ecx, esi
        call public_59f860
        mov al, byte ptr ss : [esp+8]
        mov byte ptr ds : [esi+0x504], al
        mov dword ptr ds : [esi+0x508], ebp
        mov dword ptr ds : [esi+0x50C], ebp
        mov dword ptr ds : [esi+0x510], ebp
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ds:[esi+0x514]
        mov byte ptr ss : [esp+0x24], 2
        call public_5a6900
        lea edx, ss:[esp+9]
        push edx
        lea ecx, ds:[esi+0x524]
        mov byte ptr ss : [esp+0x24], 3
        call public_5a6900
        lea eax, ss:[esp+0xA]
        push eax
        lea ecx, ds:[esi+0x534]
        mov byte ptr ss : [esp+0x24], 4
        call public_5a6900
        lea ecx, ss:[esp+0xB]
        push ecx
        lea ecx, ds:[esi+0x544]
        mov byte ptr ss : [esp+0x24], 5
        call public_5a6900
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[esi+0x554]
        mov byte ptr ss : [esp+0x24], 6
        call public_5a6900
        lea eax, ss:[esp+0xD]
        push eax
        lea ecx, ds:[esi+0x7FC]
        mov byte ptr ss : [esp+0x24], 7
        call public_5a6900
        lea ecx, ss:[esp+0xE]
        push ecx
        lea ecx, ds:[esi+0x80C]
        mov byte ptr ss : [esp+0x24], 8
        call public_5a6900
        lea edx, ss:[esp+0xF]
        push edx
        lea ecx, ds:[esi+0x81C]
        mov byte ptr ss : [esp+0x24], 9
        call public_5a6900
        mov dword ptr ds : [esi], offset public_5d4a5c
        mov dword ptr ds : [esi+0x7C], offset public_5d4a4c
        jmp public_4a9497
        public_4a9495 : nop
        xor esi, esi
/*FIXUP public_4a9497 : nop
        push offset public_5d4a28 @0x4a9497*/
  FIXUP public_4a9497 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a28
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x32E], 1
        call public_4afe30
        call public_4a92a0
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4a94db
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_4a94db : nop
        push ebx
        push edi
/*FIXUP push offset public_5d4a14 @0x4a94dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a14
        call public_5b36b0
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_4a9523
        mov edx, dword ptr ds : [edi]
        mov eax, ebx
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x10], eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [edi+0x14]
        fcomp dword ptr ds : [edi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4a9523
        fld dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi]
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        fstp dword ptr ds : [edi+0x14]
        mov ecx, edi
        call dword ptr ds : [eax+4]
/*FIXUP public_4a9523 : nop
        push offset public_5d4a00 @0x4a9523*/
  FIXUP public_4a9523 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a00
        call public_5b36b0
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_4a9567
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x10], edx
        call dword ptr ds : [eax]
        fld dword ptr ds : [edi+0x14]
        fcomp dword ptr ds : [edi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4a9567
        fld dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [edi]
        fst dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        fstp dword ptr ds : [edi+0x14]
        mov ecx, edi
        call dword ptr ds : [edx+4]
/*FIXUP public_4a9567 : nop
        push offset public_5d49ec @0x4a9567*/
  FIXUP public_4a9567 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d49ec
        call public_5b36b0
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_4a95a7
        mov edx, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        mov dword ptr ds : [edi+0x10], ebp
        call dword ptr ds : [edx]
        fld dword ptr ds : [edi+0x14]
        fcomp dword ptr ds : [edi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4a95a7
        fld dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi]
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        fstp dword ptr ds : [edi+0x14]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        public_4a95a7 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5ca230]
        call public_5b7ec0
        push eax
        mov ecx, esi
        call public_4b0370
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop ebx
        pop esi
        mov al, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4a9380)
    }
}

#undef public_4a9495
#undef public_4a9497
#undef public_4a94db
#undef public_4a9523
#undef public_4a9567
#undef public_4a95a7
