#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_5687c0);
CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_568830);
CLANG_FORWARD_PROC_SYMBOL(public_56f180);
CLANG_FORWARD_PROC_SYMBOL(public_56f610);
CLANG_FORWARD_PROC_SYMBOL(public_575520);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_58a110);
CLANG_FORWARD_PROC_SYMBOL(public_58c470);
CLANG_FORWARD_PROC_SYMBOL(public_58cb80);
CLANG_FORWARD_PROC_SYMBOL(public_58cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_58cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_58d250);
CLANG_FORWARD_PROC_SYMBOL(public_58d560);
CLANG_FORWARD_PROC_SYMBOL(public_58d570);
CLANG_FORWARD_PROC_SYMBOL(public_58d590);
CLANG_FORWARD_PROC_SYMBOL(public_58d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d5d0);
CLANG_FORWARD_PROC_SYMBOL(public_58d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_58d960);
CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_595f30);
CLANG_FORWARD_PROC_SYMBOL(public_595f50);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_JUMP_SYMBOL(public_5c301c);

#define public_56de48 _public_56de48
#define public_56e235 _public_56e235
#define public_56e2d8 _public_56e2d8
#define public_56e375 _public_56e375
#define public_56e412 _public_56e412
#define public_56e4af _public_56e4af
#define public_56e54c _public_56e54c
#define public_56e5e9 _public_56e5e9
#define public_56e626 _public_56e626
#define public_56e663 _public_56e663
#define public_56e700 _public_56e700
#define public_56e79d _public_56e79d
#define public_56e834 _public_56e834
#define public_56e840 _public_56e840
#define public_56e880 _public_56e880
#define public_56e93c _public_56e93c
#define public_56e947 _public_56e947
#define public_56e978 _public_56e978
#define public_56e983 _public_56e983
#define public_56ea42 _public_56ea42
#define public_56ea5c _public_56ea5c
#define public_56ea72 _public_56ea72
#define public_56eaa0 _public_56eaa0
#define public_56eab7 _public_56eab7
#define public_56eaf0 _public_56eaf0
#define public_56eb18 _public_56eb18
#define public_56ec57 _public_56ec57
#define public_56ec90 _public_56ec90
#define public_56ecb0 _public_56ecb0
#define public_56ece1 _public_56ece1
#define public_56ecfb _public_56ecfb
#define public_56ed27 _public_56ed27
#define public_56edd3 _public_56edd3
#define public_56ee17 _public_56ee17
#define public_56ee49 _public_56ee49
#define public_56ee52 _public_56ee52
#define public_56f160 _public_56f160

PROC_DECLARE(0x56dbf0, internal_56dbf0, public_56dbf0);
extern "C" NAKED register_t __cdecl internal_56dbf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c301c @0x56dbf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c301c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x4AC
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_591cd0
        test al, al
        je public_56f160
        mov byte ptr ds : [esi+0x294], 0
        mov dword ptr ds : [esi+0x2CC], 3
        mov ecx, dword ptr ds : [public_67ecb8]
        push ebp
        mov dword ptr ds : [esi+0x2BC], ecx
        mov edx, dword ptr ds : [public_67ecb8]
        push edi
        or ebp, 0xFFFFFFFF
        lea edi, ds:[esi+0x7C]
        mov dword ptr ds : [esi+0x2C0], edx
        mov dword ptr ds : [esi+0x2C8], ebp
        mov dword ptr ds : [esi+0xB4], ebx
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2e50 @0x56dc63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e50
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xB8], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e29f8 @0x56dc75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29f8
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xBC], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2e44 @0x56dc87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e44
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xC0], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2c4c @0x56dc99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2c4c
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xC4], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2e34 @0x56dcab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e34
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xC8], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e29bc @0x56dcbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29bc
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xD0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2e20 @0x56dccf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e20
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xCC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2e18 @0x56dce1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e18
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xD4], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e1ac8 @0x56dcf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1ac8
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xD8], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2e08 @0x56dd05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e08
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xE0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2df8 @0x56dd17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2df8
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xE4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2dec @0x56dd29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2dec
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xDC], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2de4 @0x56dd3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2de4
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        push ebx
        push esi
/*FIXUP push offset public_5d73fc @0x56dd47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d73fc
        mov dword ptr ds : [esi+0xE8], eax
/*FIXUP push offset public_5e2ddc @0x56dd52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2ddc
        call public_59db20
        add esp, 0x10
        cmp eax, ebx
        mov dword ptr ds : [esi+0xEC], eax
        je public_56de48
/*FIXUP push offset public_5d0608 @0x56dd6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        call public_4177b0
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x18]
        push ebx
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        push 1
        mov dword ptr ss : [esp+0x20], ebx
        fild qword ptr ss : [esp+0x1C]
        push ebx
        push 0x3F800000
        fmul dword ptr ds : [public_5e2554]
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x34], 0x3EA3D70A
        mov dword ptr ss : [esp+0x38], 0xBEB33333
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push 0x3E800000
        push ebx
        push ecx
        mov ecx, dword ptr ds : [esi+0xEC]
/*FIXUP push offset public_5d0608 @0x56ddc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        mov dword ptr ss : [esp+0x50], 0xBF800000
        call public_58a110
        mov eax, dword ptr ds : [public_67eca8]
        push 0x100
        lea edx, ss:[esp+0xC0]
        push edx
        push 0x4F7
        push eax
        call public_4347e0
        mov ax, word ptr ds : [public_67ecba]
        xor ecx, ecx
        mov cl, al
        xor edx, edx
        mov dl, ah
        lea eax, ss:[esp+0xCC]
        and ecx, 0xFF
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x2D8]
        push ecx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0xEC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x20
        push ebx
        lea eax, ss:[esp+0x2C0]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [eax+0x6C], 0xFC
        public_56de48 : nop
        push 0xF
        lea ecx, ds:[esi+0x80]
        call public_5760d0
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc64 @0x56de62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc64
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x26C], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc40 @0x56de7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc40
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x270], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2db8 @0x56de9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2db8
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x274], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2d94 @0x56deb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2d94
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x278], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2d6c @0x56ded6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2d6c
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x27C], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2d44 @0x56def3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2d44
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x280], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2d1c @0x56df10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2d1c
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x284], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2cf4 @0x56df2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2cf4
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [esi+0x288], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2cc4 @0x56df4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2cc4
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [esi+0x28C], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e2c90 @0x56df67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2c90
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0x290], eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xAC7
        mov ecx, dword ptr ds : [esi+0xBC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAC6
        mov ecx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xAF0
        mov ecx, dword ptr ds : [esi+0xD0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAC8
        mov ecx, dword ptr ds : [esi+0xCC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xADE
        mov ecx, dword ptr ds : [esi+0xD4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAC9
        mov ecx, dword ptr ds : [esi+0xC4]
        push 3
        call public_58d5e0
        mov eax, dword ptr ds : [esi+0x1BC]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x1B8]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x727
        call public_57da40
        mov eax, dword ptr ds : [esi+0x1C8]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x1C4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x728
        call public_57da40
        mov eax, dword ptr ds : [esi+0x1A4]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x1A0]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        mov ebx, dword ptr ds : [public_5c62b0]
        push ebp
/*FIXUP push offset public_5e2c84 @0x56e079*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2c84
        lea ecx, ss:[esp+0x28]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x4D0], 1
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62ac]
        mov eax, dword ptr ds : [esi+0x1B0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x1AC]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_46c860
        push ebp
/*FIXUP push offset public_5e2c7c @0x56e0f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2c7c
        lea ecx, ss:[esp+0x28]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ebx, 2
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x4D0], 3
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62ac]
        mov eax, dword ptr ds : [esi+0x180]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x17C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x729
        call public_57da40
        mov eax, dword ptr ds : [esi+0x18C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x188]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x744
        call public_57da40
        mov eax, dword ptr ds : [esi+0x1D4]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x1D0]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x750
        call public_57da40
        mov eax, dword ptr ds : [esi+0x1E0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x1DC]
        add esp, 8
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x74F
        call public_57da40
        mov eax, dword ptr ds : [esi+0x198]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x194]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x6007C
        call public_57da40
        add esp, 8
        test al, al
        je public_56e235
        push edi
        call public_57eb40
        add esp, 4
        public_56e235 : nop
        mov eax, dword ptr ds : [esi+0x1F8]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x1F4]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_46c860
        mov edi, dword ptr ds : [public_5c62b8]
        push 0x43E0
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 5
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 4
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x6007D
        call public_57da40
        add esp, 8
        test al, al
        je public_56e2d8
        lea eax, ds:[esi+0x1F4]
        push eax
        call public_57eb40
        add esp, 4
        public_56e2d8 : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x1E8]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0x1DF5
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 7
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 6
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x60072
        call public_57da40
        add esp, 8
        test al, al
        je public_56e375
        lea eax, ds:[esi+0x1E8]
        push eax
        call public_57eb40
        add esp, 4
        public_56e375 : nop
        mov eax, dword ptr ds : [esi+0x21C]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x218]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0xBB80
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 9
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 8
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x60058
        call public_57da40
        add esp, 8
        test al, al
        je public_56e412
        lea eax, ds:[esi+0x218]
        push eax
        call public_57eb40
        add esp, 4
        public_56e412 : nop
        mov eax, dword ptr ds : [esi+0x228]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x224]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0xBB80
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 0xB
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0xA
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x60057
        call public_57da40
        add esp, 8
        test al, al
        je public_56e4af
        lea eax, ds:[esi+0x224]
        push eax
        call public_57eb40
        add esp, 4
        public_56e4af : nop
        mov eax, dword ptr ds : [esi+0x234]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x230]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0x9CA4
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 0xD
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0xC
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x60055
        call public_57da40
        add esp, 8
        test al, al
        je public_56e54c
        lea eax, ds:[esi+0x230]
        push eax
        call public_57eb40
        add esp, 4
        public_56e54c : nop
        mov eax, dword ptr ds : [esi+0x240]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x23C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0xBB80
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0xE
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 0xF
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0xE
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x60056
        call public_57da40
        add esp, 8
        test al, al
        je public_56e5e9
        lea eax, ds:[esi+0x23C]
        push eax
        call public_57eb40
        add esp, 4
        public_56e5e9 : nop
        mov eax, dword ptr ds : [esi+0x204]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x200]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push ebx
        push 0x6007B
        call public_57da40
        add esp, 8
        test al, al
        je public_56e626
        lea eax, ds:[esi+0x200]
        push eax
        call public_57eb40
        add esp, 4
        public_56e626 : nop
        mov eax, dword ptr ds : [esi+0x210]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x20C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_46c860
        push ebx
        push 0x6007A
        call public_57da40
        add esp, 8
        test al, al
        je public_56e663
        lea eax, ds:[esi+0x20C]
        push eax
        call public_57eb40
        add esp, 4
        public_56e663 : nop
        mov eax, dword ptr ds : [esi+0x24C]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x248]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_46c860
        push 0x5724
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 0x11
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0x10
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x601EB
        call public_57da40
        add esp, 8
        test al, al
        je public_56e700
        lea eax, ds:[esi+0x248]
        push eax
        call public_57eb40
        add esp, 4
        public_56e700 : nop
        mov eax, dword ptr ds : [esi+0x258]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x254]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0xC9B7
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 0x13
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0x12
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x601EF
        call public_57da40
        add esp, 8
        test al, al
        je public_56e79d
        lea eax, ds:[esi+0x254]
        push eax
        call public_57eb40
        add esp, 4
        public_56e79d : nop
        mov eax, dword ptr ds : [esi+0x264]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x260]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0xC9B7
        lea ecx, ss:[esp+0x24]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C4], 0x14
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x4D0], 0x15
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C4], 0x14
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x601EE
        call public_57da40
        add esp, 8
        test al, al
        je public_56e834
        push ebx
        call public_57eb40
        add esp, 4
        public_56e834 : nop
        xor ebx, ebx
        lea edi, ds:[esi+0x11C]
        lea esp, ss:[esp]
        public_56e840 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_46c860
        mov ecx, dword ptr ds : [ebx*4+public_5e2604]
        push edi
        push ecx
        call public_57da40
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 8
        push ebx
        push 0
        call public_58d960
        test eax, eax
        je public_56e880
        mov edx, dword ptr ds : [ebx*4+public_5e2624]
        mov dword ptr ds : [eax+4], edx
        public_56e880 : nop
        inc ebx
        add edi, 0xC
        cmp ebx, 8
        jl public_56e840
        mov ecx, dword ptr ds : [esi+0xC4]
/*FIXUP push offset public_679bb4 @0x56e88f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_58d560
        mov ecx, dword ptr ds : [esi+0xC4]
        push 0x3B83126F
        call public_58d570
        mov ecx, dword ptr ds : [esi+0xC4]
        push 1
        xor edi, edi
        push edi
        call public_58d590
        mov ecx, dword ptr ds : [esi+0xC4]
        push 1
        call public_58d5d0
        mov ecx, dword ptr ds : [esi+0xC4]
        push 1
        call public_58cbb0
        mov ecx, dword ptr ds : [esi+0xC4]
        push 1
        push edi
        push edi
        push edi
        call public_58cb80
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58cbe0
        mov ecx, dword ptr ds : [esi+0xC4]
        push 2
        push 2
        call public_58d5b0
        mov ecx, dword ptr ds : [esi+0xC8]
/*FIXUP push offset public_679bb4 @0x56e904*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
/*FIXUP push offset public_679bb4 @0x56e909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_595f30
        mov ecx, dword ptr ds : [esi+0xC8]
/*FIXUP push offset public_679bb4 @0x56e919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
/*FIXUP push offset public_679bb4 @0x56e91e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_595f50
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [eax+0x4A4]
        cmp ecx, edi
        jne public_56e93c
        xor eax, eax
        jmp public_56e947
        public_56e93c : nop
        mov eax, dword ptr ds : [eax+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_56e947 : nop
        mov ecx, dword ptr ds : [esi+0xC8]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        call public_595d60
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [eax+0x4A4]
        cmp ecx, edi
        jne public_56e978
        xor eax, eax
        jmp public_56e983
        public_56e978 : nop
        mov eax, dword ptr ds : [eax+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_56e983 : nop
        mov ecx, dword ptr ds : [esi+0xC8]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xC8]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0xC8]
        push edi
        call public_595db0
        mov eax, dword ptr ds : [esi+0xC8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [esi+0xD0]
        push 1
        call public_5799f0
        xor bl, bl
        mov dword ptr ss : [esp+0x38], edi
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x4C4], 0x16
        call public_5687e0
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+eax*4+0x3C], 0x80000001
        inc dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [public_6143b0]
        push 0x20019
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_568830
        test eax, eax
        je public_56ea5c
        push 0x20019
/*FIXUP push offset public_5e2c4c @0x56ea1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2c4c
        lea ecx, ss:[esp+0x40]
        call public_568830
        test eax, eax
        je public_56ea5c
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ds:[esi+0x2D0]
        call public_58c470
        test al, al
        je public_56ea42
        mov bl, 1
        public_56ea42 : nop
        mov eax, dword ptr ss : [esp+0x38]
        xor edi, edi
        cmp eax, edi
        jle public_56ea72
        lea ecx, ss:[esp+0x38]
        call public_5687c0
        push eax
        call dword ptr ds : [public_5c6000]
        public_56ea5c : nop
        cmp dword ptr ss : [esp+0x38], edi
        jle public_56ea72
        lea ecx, ss:[esp+0x38]
        call public_5687c0
        push eax
        call dword ptr ds : [public_5c6000]
        public_56ea72 : nop
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x4C4], ebp
        call public_5687e0
        test bl, bl
        jne public_56eab7
        mov ecx, dword ptr ds : [esi+0xC4]
        lea eax, ds:[esi+0x2D0]
        push eax
        call public_58d0f0
        xor eax, eax
        lea ebx, ds:[ebx]
        public_56eaa0 : nop
        mov edx, dword ptr ds : [eax+public_5e2644]
        mov ecx, dword ptr ds : [esi+0x2E4]
        mov dword ptr ds : [ecx+eax], edx
        add eax, 4
        cmp eax, 0x20
        jl public_56eaa0
        public_56eab7 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        lea eax, ds:[esi+0x2D0]
        push eax
        call public_58d250
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [eax+0x4B4]
        cmp ecx, edi
        je public_56eb18
        mov eax, dword ptr ds : [eax+0x4B8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 8
        jne public_56eb18
        lea ebx, ds:[esi+0x11C]
        nop 
        public_56eaf0 : nop
        push 0
        push 0
        push ebx
        push edi
        push 0
        mov ecx, esi
        call public_56f180
        inc edi
        add ebx, 0xC
        cmp edi, 8
        jb public_56eaf0
        mov ecx, dword ptr ds : [esi+0xC4]
        push 0
        call public_58d0b0
        mov byte ptr ds : [eax], 0
        public_56eb18 : nop
        mov ecx, dword ptr ds : [esi+0xD8]
        call public_57b370
        mov ebx, dword ptr ds : [public_5c62c0]
        push 1
        lea ecx, ss:[esp+0x24]
        call ebx
        mov ecx, dword ptr ds : [esi+0xD8]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x17
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62bc]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x1E8]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xD8]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x18
        call public_57b470
        mov edi, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        mov ecx, dword ptr ds : [esi+0xDC]
        call public_57b370
        push 0
        lea ecx, ss:[esp+0x24]
        call ebx
        mov ecx, dword ptr ds : [esi+0xDC]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x19
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62bc]
        lea eax, ds:[esi+0x1F4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+0xDC]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x1A
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [esi+0xDC]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x1B
        call public_57b470
        mov al, byte ptr ds : [public_615b10]
        mov ecx, dword ptr ds : [esi+0xDC]
        test al, al
        mov dword ptr ss : [esp+0x4C4], ebp
        lea eax, ds:[esi+0x260]
        jne public_56ec57
        lea eax, ds:[esi+0x254]
        public_56ec57 : nop
        push eax
        call public_57b3e0
        mov eax, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [eax+0x498], 1
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        mov ebx, 1
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], eax
        jle public_56ed27
        lea esp, ss:[esp]
        public_56ec90 : nop
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4B0]
        mov dword ptr ss : [esp+0x18], 0
        call public_5ad970
        test eax, eax
        jbe public_56ece1
        lea ecx, ds:[ecx]
        public_56ecb0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0xC4]
        push eax
        push ebx
        call public_58cbf0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0xC4]
        inc edx
        lea ecx, ds:[eax+0x4B0]
        mov dword ptr ss : [esp+0x18], edx
        call public_5ad970
        cmp dword ptr ss : [esp+0x18], eax
        jb public_56ecb0
        public_56ece1 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebx
        call public_58d0b0
        test eax, eax
        je public_56ecfb
        push 0
        lea ecx, ds:[eax+8]
        call public_575520
        public_56ecfb : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebx
        call public_58d0b0
        mov byte ptr ds : [eax+1], 0
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebx
        call public_58d0b0
        mov byte ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x34]
        inc ebx
        cmp ebx, eax
        jl public_56ec90
        public_56ed27 : nop
        mov ecx, esi
        call public_56f610
        mov ecx, dword ptr ds : [esi+0xCC]
        push 2
        call public_579a60
        mov eax, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [eax+0x498], 1
        mov ecx, dword ptr ds : [esi+0xCC]
        call public_57b370
        mov ebx, dword ptr ds : [public_5c62c0]
        push 2
        lea ecx, ss:[esp+0x24]
        call ebx
        mov ecx, dword ptr ds : [esi+0xCC]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x1C
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ds : [esi+0x2CC]
        dec eax
        je public_56ee17
        dec eax
        je public_56edd3
        sub eax, 2
        je public_56ee17
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x218]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xCC]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x1E
        call public_57b470
        lea ecx, ss:[esp+0x10]
        jmp public_56ee49
        public_56edd3 : nop
        lea eax, ds:[esi+0x230]
        push eax
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0xCC]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x1F
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        mov eax, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [eax+0x498], 1
        jmp public_56ee52
        public_56ee17 : nop
        lea eax, ds:[esi+0x224]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [esi+0xCC]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x1D
        call public_57b470
        lea ecx, ss:[esp+0x18]
        public_56ee49 : nop
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        public_56ee52 : nop
        mov ecx, dword ptr ds : [esi+0xE8]
        call public_57b370
        push 0x76EC
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0xE8]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x20
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x24]
        call ebx
        mov ecx, dword ptr ds : [esi+0xE8]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x21
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ds : [esi+0x284]
        mov ebx, dword ptr ds : [public_5c62f0]
        push eax
        lea ecx, ss:[esp+0x24]
        call ebx
        mov ecx, dword ptr ds : [esi+0xE8]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x22
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62ec]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x20C]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xE8]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x23
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        push ebp
/*FIXUP push offset public_5e2c58 @0x56ef3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2c58
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62b0]
        mov ecx, dword ptr ds : [esi+0xE8]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x24
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62ac]
        mov eax, dword ptr ds : [esi+0x288]
        push eax
        lea ecx, ss:[esp+0x24]
        call ebx
        mov ecx, dword ptr ds : [esi+0xE8]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x25
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C4], ebp
        call dword ptr ds : [public_5c62ec]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x200]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xE8]
        mov dword ptr ss : [esp+0x4C4], 0x26
        lea edx, ss:[esp+0x10]
        push edx
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        xor eax, eax
        mov dword ptr ds : [esi+0x108], eax
        mov byte ptr ds : [esi+0x110], al
        mov dword ptr ds : [esi+0x114], eax
        mov eax, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x10C], 0xBFF80000
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xC8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xE8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xD0]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xD8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xDC]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xCC]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [esi+0xB8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xBC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xC0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xD4]
        push 1
        call public_579a90
        mov eax, dword ptr ds : [esi+0xE0]
        add eax, 0x60
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0xE4]
        add eax, 0x60
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xFC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0xD0]
        call public_57b370
        push 0x4433
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0xD0]
        push eax
        mov dword ptr ss : [esp+0x4C8], 0x27
        call public_57b470
        mov dword ptr ss : [esp+0x4C4], ebp
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x188]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x4C8], 0x28
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C4], ebp
        call edi
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x34], eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        mov dword ptr ss : [esp+0x4C8], 0x29
        call public_57b470
        pop edi
        mov al, 1
        pop ebp
        public_56f160 : nop
        mov ecx, dword ptr ss : [esp+0x4B4]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4B8
        ret 8
        UNREACHABLE_TRAP(0x56dbf0)
    }
}

#undef public_56de48
#undef public_56e235
#undef public_56e2d8
#undef public_56e375
#undef public_56e412
#undef public_56e4af
#undef public_56e54c
#undef public_56e5e9
#undef public_56e626
#undef public_56e663
#undef public_56e700
#undef public_56e79d
#undef public_56e834
#undef public_56e840
#undef public_56e880
#undef public_56e93c
#undef public_56e947
#undef public_56e978
#undef public_56e983
#undef public_56ea42
#undef public_56ea5c
#undef public_56ea72
#undef public_56eaa0
#undef public_56eab7
#undef public_56eaf0
#undef public_56eb18
#undef public_56ec57
#undef public_56ec90
#undef public_56ecb0
#undef public_56ece1
#undef public_56ecfb
#undef public_56ed27
#undef public_56edd3
#undef public_56ee17
#undef public_56ee49
#undef public_56ee52
#undef public_56f160
