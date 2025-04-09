#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_4a7b60 _public_4a7b60
#define public_4a7f10 _public_4a7f10
#define public_4a800a _public_4a800a
#define public_4a801f _public_4a801f
#define public_4a8031 _public_4a8031
#define public_4a8043 _public_4a8043
#define public_4a8051 _public_4a8051

PROC_DECLARE(0x4a78c0, internal_4a78c0, public_4a78c0);
extern "C" NAKED register_t __cdecl internal_4a78c0()
{
    __asm
    {
        sub esp, 0x1C0
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 0
/*FIXUP push offset public_5ce994 @0x4a78d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
        call dword ptr ds : [eax+0x98]
        lea ecx, ds:[esi+0x80]
        push ecx
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x44]
        push edx
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x4a790c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d01d0 @0x4a7913*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d0a30 @0x4a7918*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a30
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0x3C9374BC
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x50], 0x3ECF5C29
        mov dword ptr ss : [esp+0x54], 0x3E74BC6A
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0c90
        push 1
        push 0
        push 1
        push 0x3A3
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3F56C8B4
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5ce91c @0x4a7975*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d499c @0x4a797a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d499c
        mov ecx, esi
        mov dword ptr ds : [esi+0x32C], eax
        mov dword ptr ss : [esp+0x40], 0xBED60419
        mov dword ptr ss : [esp+0x44], 0x3E839581
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x632
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3EB33333
        push 0
        lea edx, ss:[esp+0x34]
        push edx
/*FIXUP push offset public_5d01a8 @0x4a79c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d0a20 @0x4a79ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a20
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0xBECF5C29
        mov dword ptr ss : [esp+0x44], 0x3E570A3D
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x640
        mov dword ptr ss : [esp+0x24], 0x3C1374BC
        mov dword ptr ss : [esp+0x28], 0x3E570A3D
        mov dword ptr ss : [esp+0x2C], 0
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3EB5C28F
        push 0
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_5d01a8 @0x4a7a27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d4988 @0x4a7a2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4988
        mov ecx, esi
        call public_5a0e30
        push 1
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x3EAE147B
        push 0x3EC49BA6
/*FIXUP push offset public_5d4978 @0x4a7a49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4978
        mov ecx, esi
        mov dword ptr ds : [esi+0x330], eax
        mov dword ptr ss : [esp+0x28], 0x3C23D70A
        mov dword ptr ss : [esp+0x2C], 0x3E3020C5
        mov dword ptr ss : [esp+0x30], 0
        call public_5a10e0
        push 0
        push 0
        push 0x32B
        mov dword ptr ds : [esi+0x400], eax
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, 0xFD
        mov byte ptr ds : [eax+0x6C], cl
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
/*FIXUP push offset public_5ced30 @0x4a7a99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d30c0 @0x4a7a9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d30c0
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0x3E083127
        mov dword ptr ss : [esp+0x3C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x4C], 0x3E4CCCCD
        mov dword ptr ss : [esp+0x50], 0xBE570A3D
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x3A1
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5d0410 @0x4a7afb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d30a8 @0x4a7b00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d30a8
        mov ecx, esi
        mov dword ptr ds : [esi+0x404], eax
        mov dword ptr ss : [esp+0x40], 0x3D8F5C29
        mov dword ptr ss : [esp+0x44], 0xBE428F5C
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0e30
        mov ebx, dword ptr ds : [public_5c71ec]
        mov dword ptr ds : [esi+0x408], eax
        mov eax, dword ptr ds : [esi+0x404]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0x408]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        xor edi, edi
        mov byte ptr ds : [eax+0x6C], cl
        mov dword ptr ss : [esp+0x20], edi
        lea ebp, ds:[esi+0x34C]
        nop 
        lea esp, ss:[esp]
        public_4a7b60 : nop
        push edi
        lea edx, ss:[esp+0xD4]
/*FIXUP push offset public_5d495c @0x4a7b68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d495c
        push edx
        call ebx
        fild dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push 0
        fmul dword ptr ds : [public_5d4958]
        push 0
        push 0
        push 0
        fsubr dword ptr ds : [public_5d4954]
        push 0
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x40]
        fst dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [public_5d2c10]
        push ecx
/*FIXUP push offset public_5d1528 @0x4a7ba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        lea edx, ss:[esp+0xF0]
        push edx
        fstp dword ptr ss : [esp+0x50]
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0x3E3126E9
        mov dword ptr ss : [esp+0x3C], 0x3D0B4396
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x4C], 0xBE6C8B44
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0d00
        push edi
        mov dword ptr ss : [ebp-0x18], eax
        lea eax, ss:[esp+0xD4]
/*FIXUP push offset public_5d493c @0x4a7bec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d493c
        push eax
        call ebx
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_5d4938]
        add esp, 0xC
        push 0
        push 0
        push 1
        fstp dword ptr ss : [esp+0x64]
        push 0
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3EB74BC7
        push 0
        lea ecx, ss:[esp+0x74]
        push ecx
/*FIXUP push offset public_5d010c @0x4a7c23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0xF8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x80], 0xBE666667
        mov dword ptr ss : [esp+0x88], 0
        call public_5a0e30
        push edi
        mov dword ptr ss : [ebp], eax
        lea eax, ss:[esp+0xD4]
/*FIXUP push offset public_5d491c @0x4a7c58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d491c
        push eax
        call ebx
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_5d4918]
        add esp, 0xC
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        fst dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0x3D79DB23
        mov dword ptr ss : [esp+0x78], 0x3C656042
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x8C], 0xBE958106
        mov dword ptr ss : [esp+0x94], 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        lea edx, ss:[esp+0x98]
        push edx
        push 0
        lea eax, ss:[esp+0xB8]
        push eax
/*FIXUP push offset public_5d48e0 @0x4a7ce9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d48e0
        lea ecx, ss:[esp+0x10C]
        push ecx
        mov ecx, esi
        call public_5a0db0
        mov ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [public_679bb4]
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ss : [esp+0x13]
        mov eax, 0x55555556
        imul edx
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea eax, ss:[esp+0x10]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov byte ptr ss : [esp+0x1B], dl
        mov edx, dword ptr ds : [ecx]
        push 0x18
        call dword ptr ds : [edx+0xA8]
        push edi
        lea ecx, ss:[esp+0xD4]
/*FIXUP push offset public_5d48c8 @0x4a7d3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d48c8
        push ecx
        call ebx
        add esp, 0xC
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x78]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        lea ecx, ss:[esp+0x70]
        push ecx
        push 0
        mov dword ptr ss : [esp+0x6C], edx
        lea edx, ss:[esp+0x68]
        push edx
/*FIXUP push offset public_5d4890 @0x4a7d77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4890
        lea eax, ss:[esp+0x10C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xB8], 0
        mov dword ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0xC0], 0
        mov dword ptr ss : [esp+0x84], 0x3D79DB23
        mov dword ptr ss : [esp+0x88], 0x3C656042
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x74], 0xBE2E7D57
        mov dword ptr ss : [esp+0x7C], 0
        call public_5a0db0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [ebp+0x30], eax
        mov edx, dword ptr ds : [eax]
        push 0x18
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        inc edi
        add ebp, 4
        cmp edi, 6
        mov dword ptr ss : [esp+0x20], edi
        jl public_4a7b60
        xor ebp, ebp
        push ebp
        push 6
        push 5
        push ebp
        push 0x3ED2F1AA
        push 0x3C9BA5E3
        lea edx, ss:[esp+0x4C]
        push edx
/*FIXUP push offset public_5d487c @0x4a7e1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d487c
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xBD3851EC
        mov dword ptr ss : [esp+0x58], 0x3E343958
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a17e0
        mov dword ptr ds : [esi+0x394], eax
        mov eax, 1
        mov dword ptr ss : [esp+0xCC], ebp
        xor ecx, ecx
        mov dword ptr ss : [esp+0x24], ebp
        mov edi, 0x61D
        lea ebp, ds:[esi+0x398]
        mov dword ptr ss : [esp+0x90], edi
        mov dword ptr ss : [esp+0x94], 0x61E
        mov dword ptr ss : [esp+0x98], 0x61F
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0xA0], 0x64B
        mov dword ptr ss : [esp+0xA4], 0x641
        mov dword ptr ss : [esp+0xA8], 0x646
        mov dword ptr ss : [esp+0xAC], 0x647
        mov dword ptr ss : [esp+0xB0], 0x648
        mov dword ptr ss : [esp+0xB4], 0x649
        mov dword ptr ss : [esp+0xB8], eax
        mov dword ptr ss : [esp+0xBC], 0x64A
        mov dword ptr ss : [esp+0xC0], 0x64C
        mov dword ptr ss : [esp+0xC4], 0x64D
        mov dword ptr ss : [esp+0xC8], 0x64E
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x40], ebp
        lea ebx, ds:[ebx]
        public_4a7f10 : nop
        cmp edi, 1
        je public_4a8043
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        lea ecx, ss:[esp+0xD4]
/*FIXUP push offset public_5d4868 @0x4a7f25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4868
        push ecx
        call ebx
        fld dword ptr ds : [public_5d4248]
        fsub dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push 0
        push 0
        fsub dword ptr ds : [public_5d011c]
        push 0
        push edi
        push 0x3FC00000
        push 0x3D23D70A
        fst dword ptr ss : [esp+0x68]
        push 0x3EB74BC7
        fstp dword ptr ss : [esp+0x54]
        push 0
        lea edx, ss:[esp+0x54]
        push edx
/*FIXUP push offset public_5d010c @0x4a7f65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0xF8]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3E428F5C
        mov dword ptr ss : [esp+0x68], 0
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        lea edx, ss:[esp+0xD4]
        mov edi, eax
/*FIXUP push offset public_5d4854 @0x4a7f97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4854
        push edx
        mov dword ptr ss : [ebp+0x34], edi
        call ebx
        mov eax, dword ptr ss : [esp+0x5C]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3E408312
        push 0
        lea ecx, ss:[esp+0x64]
        push ecx
/*FIXUP push offset public_5d010c @0x4a7fc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0xF8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3EC28F5C
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], 0
        call public_5a0e30
        mov dword ptr ss : [ebp], eax
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov ecx, dword ptr ss : [esp+0x20]
        jne public_4a801f
        cmp ecx, 1
        je public_4a800a
        cmp ecx, 2
        jne public_4a801f
        public_4a800a : nop
        mov al, byte ptr ds : [edi+0x6C]
        mov ebp, dword ptr ss : [esp+0x40]
        and al, 0xFC
        mov byte ptr ds : [edi+0x6C], al
        mov eax, dword ptr ss : [ebp]
        and byte ptr ds : [eax+0x6C], 0xFC
        jmp public_4a8031
        public_4a801f : nop
        fld dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [public_5d011c]
        fstp dword ptr ss : [esp+0x10]
        public_4a8031 : nop
        mov edx, dword ptr ss : [esp+0x24]
        inc edx
        add ebp, 4
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x40], ebp
        jmp public_4a8051
        public_4a8043 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d1f04]
        fstp dword ptr ss : [esp+0x10]
        public_4a8051 : nop
        mov edi, dword ptr ss : [esp+ecx*4+0x94]
        inc ecx
        test edi, edi
        mov dword ptr ss : [esp+0x20], ecx
        jne public_4a7f10
        mov ecx, dword ptr ds : [esi+0x394]
        push 0xFFFFFFFF
        push edi
        mov dword ptr ds : [esi+0x41C], edi
        mov eax, dword ptr ds : [ecx]
        push 0x37
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov ecx, edi
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x1D8]
        mov edx, dword ptr ss : [esp+0x1D4]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+0x424], 0x3F800000
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x1C0
        ret 8
        UNREACHABLE_TRAP(0x4a78c0)
    }
}

#undef public_4a7b60
#undef public_4a7f10
#undef public_4a800a
#undef public_4a801f
#undef public_4a8031
#undef public_4a8043
#undef public_4a8051
