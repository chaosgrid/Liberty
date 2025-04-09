#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_57bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_57be00);
CLANG_FORWARD_PROC_SYMBOL(public_57be30);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1950);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbaf3);

#define public_472af0 _public_472af0
#define public_472be9 _public_472be9
#define public_472bef _public_472bef
#define public_472cc9 _public_472cc9
#define public_472d57 _public_472d57
#define public_472dc6 _public_472dc6
#define public_472dee _public_472dee
#define public_472e01 _public_472e01
#define public_472e09 _public_472e09
#define public_472e12 _public_472e12
#define public_472e76 _public_472e76
#define public_472eec _public_472eec
#define public_472f5c _public_472f5c
#define public_472fa3 _public_472fa3
#define public_47302e _public_47302e
#define public_473048 _public_473048
#define public_47304f _public_47304f

PROC_DECLARE(0x472ab0, internal_472ab0, public_472ab0);
extern "C" NAKED register_t __cdecl internal_472ab0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bbaf3 @0x472ab8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbaf3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebp
        push esi
        xor ebp, ebp
        push ebp
        push eax
        mov esi, ecx
        call public_4b5060
        test al, al
        jne public_472af0
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        public_472af0 : nop
        push ebx
        push edi
        push ebp
/*FIXUP push offset public_5c95fc @0x472af3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        add esp, 8
        mov ebx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        push ebp
        push ebp
        push 1
        push ebp
        push 1
        push 1
        push ebp
        push ebp
        push ebp
        lea eax, ss:[esp+0x4C]
        push eax
        mov dword ptr ds : [esi+0x33C], ecx
        push ebp
        lea ecx, ss:[esp+0x60]
        push ecx
/*FIXUP push offset public_5d076c @0x472b2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d076c
/*FIXUP push offset public_5d08c8 @0x472b2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d08c8
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0xBFD9999A
        call public_5a0db0
        fld dword ptr ds : [public_5d04fc]
        mov eax, dword ptr ds : [public_5d04f8]
        mov ecx, dword ptr ds : [public_5d04f4]
        push 1
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [public_5d0500]
        push ecx
        fstp dword ptr ss : [esp+0x40]
/*FIXUP push offset public_5d08bc @0x472bab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d08bc
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0xBF800000
        call public_5a10e0
        mov dword ptr ds : [esi+0x340], eax
        cmp dword ptr ds : [esi+0x33C], ebp
        jne public_472be9
        push ebp
        push esi
/*FIXUP push offset public_5d08ac @0x472bcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d08ac
/*FIXUP push offset public_5d08a0 @0x472bd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d08a0
        call public_59db20
        add esp, 0x10
        mov dword ptr ds : [esi+0x344], eax
        jmp public_472bef
        public_472be9 : nop
        mov dword ptr ds : [esi+0x344], ebp
        public_472bef : nop
        mov ecx, dword ptr ds : [esi+0x344]
        cmp ecx, ebp
        je public_472dee
        mov edx, dword ptr ds : [public_5d0508]
        mov eax, dword ptr ds : [public_5d0504]
        push edx
        push eax
        call public_579cc0
        fld dword ptr ds : [public_5d050c]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [public_5d0510]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x344]
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], 0xBF800000
        call public_579c40
        mov ecx, dword ptr ds : [esi+0x344]
        push ebp
        call public_579860
        mov ecx, dword ptr ds : [esi+0x344]
        push 1
        call public_57be00
        mov ecx, dword ptr ds : [esi+0x344]
        push 1
        call public_57bdd0
        mov ecx, dword ptr ds : [esi+0x344]
        push ebp
        call public_57be30
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x58], ebp
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx+0x500]
        add ecx, 0x4FC
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0x64], 1
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x60]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x58], 0
        je public_472cc9
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x60], ebp
        public_472cc9 : nop
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x58], edi
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx+0x4E0]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x4DC
        push eax
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        call public_46c860
        push 1
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x58], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx+0x4E0]
        add ecx, 0x4DC
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0x64], 3
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x60]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x58], 2
        je public_472d57
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x60], ebp
        public_472d57 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x58], edi
        call dword ptr ds : [public_5c62bc]
        push edi
/*FIXUP push offset public_5d0514 @0x472d66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0514
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 4
        mov ecx, eax
        mov dword ptr ss : [esp+0x58], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx+0x4E0]
        add ecx, 0x4DC
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0x64], 5
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x60]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x58], bl
        je public_472dc6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x60], ebp
        public_472dc6 : nop
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x58], edi
        call dword ptr ds : [public_5c62f4]
        mov ecx, dword ptr ds : [esi+0x344]
        call public_57d330
        mov ecx, dword ptr ds : [esi+0x344]
        call public_57c750
        mov ebx, dword ptr ss : [esp+0x64]
        public_472dee : nop
        mov ecx, dword ptr ds : [esi+0x33C]
        xor eax, eax
        xor edi, edi
        cmp ecx, ebp
        jne public_472e01
        mov eax, 0xD48
        public_472e01 : nop
        mov edx, dword ptr ds : [ebx]
        cmp edx, ebp
        je public_472e09
        mov eax, edx
        public_472e09 : nop
        mov edx, dword ptr ds : [ebx+4]
        cmp edx, ebp
        je public_472e12
        mov edi, edx
        public_472e12 : nop
        cmp ecx, ebp
        jne public_472e76
        push ebp
        push ebp
        push 0x411
        push eax
        push ebp
        push ebp
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5ced30 @0x472e2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d0894 @0x472e2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0894
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3D4CCCCD
        mov dword ptr ss : [esp+0x58], 0x3C8B4396
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0xBD851EB8
        mov dword ptr ss : [esp+0x50], 0xBF800000
        call public_5a1950
        mov dword ptr ds : [esi+0x350], eax
        jmp public_472fa3
        public_472e76 : nop
        cmp ecx, 1
        jne public_472eec
        push ebp
        push ebp
        push 0x4DC
        push eax
        push ebp
        push ebp
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5ced30 @0x472e8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d0888 @0x472e94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0888
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3D4CCCCD
        mov dword ptr ss : [esp+0x58], 0x3C8B4396
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x48], 0xBD8F5C29
        mov dword ptr ss : [esp+0x4C], 0xBD851EB8
        mov dword ptr ss : [esp+0x50], 0xBF800000
        call public_5a1950
        push ebp
        push ebp
        push 0x4DD
        push edi
        push ebp
        push ebp
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x3C]
        mov dword ptr ds : [esi+0x350], eax
        push edx
        jmp public_472f5c
        public_472eec : nop
        cmp ecx, 2
        jne public_472fa3
        push ebp
        push ebp
        push ebp
        push eax
        push ebp
        push ebp
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5ced30 @0x472f05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d0888 @0x472f0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0888
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3D4CCCCD
        mov dword ptr ss : [esp+0x58], 0x3C8B4396
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x48], 0xBD8F5C29
        mov dword ptr ss : [esp+0x4C], 0xBD851EB8
        mov dword ptr ss : [esp+0x50], 0xBF800000
        call public_5a1950
        push ebp
        push ebp
        push ebp
        push edi
        push ebp
        push ebp
        lea edx, ss:[esp+0x44]
        mov dword ptr ds : [esi+0x350], eax
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP public_472f5c : nop
        push offset public_5ced30 @0x472f5c*/
  FIXUP public_472f5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        mov ecx, esi
/*FIXUP push offset public_5d087c @0x472f63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d087c
        mov dword ptr ss : [esp+0x50], 0xBF800000
        mov dword ptr ss : [esp+0x4C], 0xBD851EB8
        mov dword ptr ss : [esp+0x48], 0x3D8F5C29
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0x3C8B4396
        mov dword ptr ss : [esp+0x54], 0x3D4CCCCD
        call public_5a1950
        mov dword ptr ds : [esi+0x34C], eax
        public_472fa3 : nop
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x54]
        push ecx
        push ebp
        lea edx, ss:[esp+0x68]
        push edx
        push ebp
/*FIXUP push offset public_5ced30 @0x472fb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebp
/*FIXUP push offset public_5cf1f4 @0x472fbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf1f4
/*FIXUP push offset public_5d0870 @0x472fc1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0870
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], 0x3CA3D70A
        mov dword ptr ss : [esp+0x78], 0x3CA3D70A
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0x3EB0A3D7
        mov dword ptr ss : [esp+0x84], 0x3DD70A3D
        mov dword ptr ss : [esp+0x88], 0xBF800000
        call public_5a0c90
        mov dword ptr ds : [esi+0x348], eax
        mov eax, dword ptr ds : [esi+0x33C]
        dec eax
        mov dword ptr ds : [esi+0x70], 0x6E
        mov dword ptr ds : [esi+0x78], 6
        je public_47302e
        dec eax
        jne public_47304f
        lea ecx, ds:[esi+0x32C]
        jmp public_473048
        public_47302e : nop
        lea edi, ds:[esi+0x32C]
        push 0x13
        mov ecx, edi
        call public_5760d0
        push 0x12
        mov ecx, edi
        call public_5760d0
        mov ecx, edi
        public_473048 : nop
        push 0xF
        call public_5760d0
        public_47304f : nop
        push esi
        call public_59d8c0
        mov ecx, dword ptr ss : [esp+0x54]
        add esp, 4
        pop edi
        pop ebx
        pop esi
        mov al, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x472ab0)
    }
}

#undef public_472af0
#undef public_472be9
#undef public_472bef
#undef public_472cc9
#undef public_472d57
#undef public_472dc6
#undef public_472dee
#undef public_472e01
#undef public_472e09
#undef public_472e12
#undef public_472e76
#undef public_472eec
#undef public_472f5c
#undef public_472fa3
#undef public_47302e
#undef public_473048
#undef public_47304f
