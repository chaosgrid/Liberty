#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266110);
CLANG_FORWARD_PROC_SYMBOL(public_6266270);
CLANG_FORWARD_PROC_SYMBOL(public_6271470);
CLANG_FORWARD_PROC_SYMBOL(public_627a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_62be260);
CLANG_FORWARD_PROC_SYMBOL(public_62df5d0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1000);
CLANG_FORWARD_PROC_SYMBOL(public_62f29d0);
CLANG_FORWARD_PROC_SYMBOL(public_62f35b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f7c50);
CLANG_FORWARD_PROC_SYMBOL(public_62fa0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6301090);
CLANG_FORWARD_PROC_SYMBOL(public_6301100);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_6304990);
CLANG_FORWARD_PROC_SYMBOL(public_6306080);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_63115e0);
CLANG_FORWARD_PROC_SYMBOL(public_631cbd0);
CLANG_FORWARD_PROC_SYMBOL(public_631e9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6337060);
CLANG_FORWARD_PROC_SYMBOL(public_6341790);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63961ae);

#define public_6308ef5 _public_6308ef5
#define public_6308f30 _public_6308f30
#define public_6308f62 _public_6308f62
#define public_6308f91 _public_6308f91
#define public_6308fb9 _public_6308fb9
#define public_630901e _public_630901e
#define public_6309084 _public_6309084
#define public_63090e9 _public_63090e9
#define public_6309150 _public_6309150
#define public_63091b7 _public_63091b7
#define public_63091ed _public_63091ed
#define public_6309223 _public_6309223
#define public_630923b _public_630923b
#define public_630926a _public_630926a
#define public_6309292 _public_6309292
#define public_63092ba _public_63092ba
#define public_63092f0 _public_63092f0
#define public_6309359 _public_6309359
#define public_630938f _public_630938f
#define public_63093c2 _public_63093c2
#define public_63093fe _public_63093fe
#define public_630942f _public_630942f
#define public_6309432 _public_6309432
#define public_6309446 _public_6309446
#define public_630945a _public_630945a
#define public_6309478 _public_6309478
#define public_6309505 _public_6309505
#define public_6309512 _public_6309512
#define public_630955d _public_630955d
#define public_630959a _public_630959a
#define public_63095ab _public_63095ab
#define public_63095bc _public_63095bc
#define public_63095df _public_63095df
#define public_6309604 _public_6309604
#define public_630960d _public_630960d
#define public_630967d _public_630967d
#define public_630968a _public_630968a
#define public_63096c4 _public_63096c4
#define public_63096c7 _public_63096c7
#define public_63096d1 _public_63096d1
#define public_6309701 _public_6309701
#define public_6309726 _public_6309726
#define public_630972f _public_630972f
#define public_6309744 _public_6309744
#define public_630974f _public_630974f
#define public_6309756 _public_6309756
#define public_630978d _public_630978d
#define public_630979e _public_630979e
#define public_63097b6 _public_63097b6
#define public_63097e3 _public_63097e3
#define public_6309801 _public_6309801
#define public_630980a _public_630980a
#define public_630982d _public_630982d

PROC_DECLARE(0x6308e60, internal_6308e60, public_6308e60);
extern "C" NAKED register_t __cdecl internal_6308e60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63961ae @0x6308e68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63961ae
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1674
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_63fcee8]
        push ebx
        xor bl, bl
        mov ecx, eax
        inc eax
        test ecx, ecx
        mov byte ptr ss : [esp+6], bl
        mov dword ptr ds : [public_63fcee8], eax
        jne public_630982d
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x11C]
        call public_630f660
        mov edx, dword ptr ss : [esp+0x1694]
        push 0
        push edx
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x1694], 0
        call public_630f9b0
        test al, al
        je public_6309478
        lea ecx, ss:[esp+0x11C]
        call public_6310070
        test al, al
        je public_630945a
        mov ebp, dword ptr ss : [esp+0x169C]
        mov edi, dword ptr ss : [esp+0x1698]
        public_6308ef5 : nop
        test bl, bl
        jne public_630945a
/*FIXUP push offset public_63a346c @0x6308efd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a346c
        lea ecx, ss:[esp+0x120]
        call public_63103c0
        test al, al
        je public_6309446
        lea ecx, ss:[esp+0x11C]
        call public_6310170
        test al, al
        je public_6309446
        lea ebx, ds:[ebx]
        public_6308f30 : nop
        test bl, bl
        jne public_6309446
        test ebp, ebp
        je public_6308f62
        mov esi, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x11C]
        call public_6310b70
        push eax
        mov ecx, ebp
        call dword ptr ds : [esi]
        test eax, eax
        je public_6308f62
        mov byte ptr ss : [esp+0x12], 1
        mov bl, byte ptr ss : [esp+0x12]
        jmp public_6309432
/*FIXUP public_6308f62 : nop
        push offset public_63a3460 @0x6308f62*/
  FIXUP public_6308f62 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3460
        lea ecx, ss:[esp+0x120]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6308f91
        call public_6310b70
        push eax
        call public_6337060
        add esp, 4
        jmp public_6309432
/*FIXUP public_6308f91 : nop
        push offset public_63a3454 @0x6308f91*/
  FIXUP public_6308f91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3454
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6308fb9
        call public_6310b70
        push eax
        call public_6304990
        add esp, 4
        jmp public_6309432
/*FIXUP public_6308fb9 : nop
        push offset public_6399f30 @0x6308fb9*/
  FIXUP public_6308fb9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f30
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_630901e
        push 0
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6302df0
        push edi
        lea ecx, ss:[esp+0x28]
        push 0
        push ecx
        call public_62f7c50
        add esp, 0x18
        test eax, eax
        jne public_6309432
        lea edx, ss:[esp+0x18]
        push edx
        push 0x5C
/*FIXUP push offset public_63a3428 @0x6308fff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3428
        mov eax, 0x100002
/*FIXUP push offset public_63a33e0 @0x6309009*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a33e0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6309432
/*FIXUP public_630901e : nop
        push offset public_63a33d4 @0x630901e*/
  FIXUP public_630901e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a33d4
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6309084
        push 0
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6302df0
        push edi
        lea edx, ss:[esp+0x28]
        push 0
        push edx
        call public_62f35b0
        add esp, 0x18
        test eax, eax
        jne public_6309432
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x68
/*FIXUP push offset public_63a3428 @0x630906a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3428
        mov eax, 0x100002
/*FIXUP push offset public_63a3390 @0x6309074*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3390
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6309432
/*FIXUP public_6309084 : nop
        push offset public_63a3384 @0x6309084*/
  FIXUP public_6309084 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3384
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63090e9
        push 0
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6302df0
        push edi
        lea ecx, ss:[esp+0x28]
        push 0
        push ecx
        call public_62f29d0
        add esp, 0x18
        test eax, eax
        jne public_6309432
        lea edx, ss:[esp+0x18]
        push edx
        push 0x75
/*FIXUP push offset public_63a3428 @0x63090ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3428
        mov eax, 0x100002
/*FIXUP push offset public_63a3340 @0x63090d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3340
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6309432
/*FIXUP public_63090e9 : nop
        push offset public_63a3330 @0x63090e9*/
  FIXUP public_63090e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3330
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6309150
        push 0
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6302df0
        lea edx, ss:[esp+0x24]
        push edi
        push edx
        call public_62fa0d0
        add esp, 0x14
        test eax, eax
        jne public_6309432
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x82
/*FIXUP push offset public_63a3428 @0x6309136*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3428
        mov eax, 0x100002
/*FIXUP push offset public_63a32e8 @0x6309140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a32e8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6309432
/*FIXUP public_6309150 : nop
        push offset public_63a32d8 @0x6309150*/
  FIXUP public_6309150 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a32d8
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63091b7
        push 0
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6302df0
        lea ecx, ss:[esp+0x24]
        push 0
        push ecx
        call public_63115e0
        add esp, 0x14
        test eax, eax
        jne public_6309432
        lea edx, ss:[esp+0x18]
        push edx
        push 0x8E
/*FIXUP push offset public_63a3428 @0x6309198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3428
        mov eax, 0x100002
/*FIXUP push offset public_63a3290 @0x63091a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3290
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6309432
/*FIXUP public_63091b7 : nop
        push offset public_63a3280 @0x63091b7*/
  FIXUP public_63091b7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3280
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63091ed
        push 0
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6302df0
        lea edx, ss:[esp+0x24]
        push edx
        call public_6301090
        jmp public_630942f
/*FIXUP public_63091ed : nop
        push offset public_63a3274 @0x63091ed*/
  FIXUP public_63091ed : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3274
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6309223
        push 0
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6302df0
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_6301100
        jmp public_630942f
/*FIXUP public_6309223 : nop
        push offset public_63a326c @0x6309223*/
  FIXUP public_6309223 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a326c
        call public_6310410
        test al, al
        je public_630923b
        call public_6266110
        jmp public_6309432
/*FIXUP public_630923b : nop
        push offset public_63a3264 @0x630923b*/
  FIXUP public_630923b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3264
        lea ecx, ss:[esp+0x120]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_630926a
        call public_6310b70
        push eax
        call public_6271470
        add esp, 4
        jmp public_6309432
/*FIXUP public_630926a : nop
        push offset public_63a325c @0x630926a*/
  FIXUP public_630926a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a325c
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6309292
        call public_6310b70
        push eax
        call public_6266270
        add esp, 4
        jmp public_6309432
/*FIXUP public_6309292 : nop
        push offset public_63a3254 @0x6309292*/
  FIXUP public_6309292 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3254
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63092ba
        call public_6310b70
        push eax
        call public_631cbd0
        add esp, 4
        jmp public_6309432
/*FIXUP public_63092ba : nop
        push offset public_63a324c @0x63092ba*/
  FIXUP public_63092ba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a324c
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63092f0
        push 0
        call public_6310b70
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        call public_6302df0
        lea eax, ss:[esp+0x24]
        push eax
        call public_631e9a0
        jmp public_630942f
/*FIXUP public_63092f0 : nop
        push offset public_63a3240 @0x63092f0*/
  FIXUP public_63092f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3240
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_6309359
        push 0
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6302df0
        push edi
        lea edx, ss:[esp+0x28]
        push 0
        push edx
        call public_62f1000
        add esp, 0x18
        test eax, eax
        jne public_6309432
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0xD3
/*FIXUP push offset public_63a3428 @0x630933f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3428
        mov eax, 0x100002
/*FIXUP push offset public_63a31f8 @0x6309349*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a31f8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6309432
/*FIXUP public_6309359 : nop
        push offset public_63a31f0 @0x6309359*/
  FIXUP public_6309359 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a31f0
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_630938f
        push 0
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6302df0
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_62be260
        jmp public_630942f
/*FIXUP public_630938f : nop
        push offset public_63a31e4 @0x630938f*/
  FIXUP public_630938f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a31e4
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63093c2
        push 0
        call public_6310b70
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        call public_6302df0
        lea eax, ss:[esp+0x24]
        push eax
        call public_6341790
        jmp public_630942f
/*FIXUP public_63093c2 : nop
        push offset public_63a31d8 @0x63093c2*/
  FIXUP public_63093c2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a31d8
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x11C]
        je public_63093fe
        push 0
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6302df0
        mov ecx, dword ptr ds : [public_63ed464]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x38]
        jmp public_6309432
/*FIXUP public_63093fe : nop
        push offset public_639b160 @0x63093fe*/
  FIXUP public_63093fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b160
        call public_6310410
        test al, al
        je public_6309432
        push 0
        lea ecx, ss:[esp+0x120]
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6302df0
        lea edx, ss:[esp+0x24]
        push edx
        call public_627a5b0
        public_630942f : nop
        add esp, 0x10
        public_6309432 : nop
        lea ecx, ss:[esp+0x11C]
        call public_6310170
        test al, al
        jne public_6308f30
        public_6309446 : nop
        lea ecx, ss:[esp+0x11C]
        call public_6310070
        test al, al
        jne public_6308ef5
        public_630945a : nop
        push 0
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_63a062c @0x6309460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a062c
        push eax
        call public_6302df0
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_62df5d0
        add esp, 0x10
        public_6309478 : nop
        lea edx, ss:[esp+0x1544]
        mov dword ptr ss : [esp+0x168C], 1
        mov dword ptr ss : [esp+0x14], edx
        mov ebx, dword ptr ss : [esp+0x1548]
        test ebx, ebx
        mov eax, dword ptr ds : [public_63991c0]
        mov ebp, dword ptr ds : [eax]
        mov byte ptr ss : [esp+0x168C], 2
        je public_6309505
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_6309505
        cmp al, 0xFF
        je public_6309505
        push 1
        lea ecx, ss:[esp+0x1548]
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        push 1
        push esi
        lea ecx, ss:[esp+0x154C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6309505
        mov ecx, dword ptr ss : [esp+0x1548]
        push esi
        push ebx
        push ecx
        call dword ptr ds : [public_639917c]
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x1548]
        call dword ptr ds : [public_63991d8]
        public_6309505 : nop
        mov eax, dword ptr ss : [esp+0x154C]
        cmp eax, ebp
        jae public_6309512
        mov ebp, eax
        public_6309512 : nop
        xor ebx, ebx
        cmp ebp, ebx
        jbe public_630955d
        mov edx, dword ptr ss : [esp+0x1548]
        sub eax, ebp
        push eax
        lea ecx, ds:[edx+ebp]
        push ecx
        push edx
        call dword ptr ds : [public_6399330]
        mov esi, dword ptr ss : [esp+0x1558]
        add esp, 0xC
        push ebx
        sub esi, ebp
        push esi
        lea ecx, ss:[esp+0x154C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_630955d
        mov edx, dword ptr ss : [esp+0x1548]
        mov dword ptr ss : [esp+0x154C], esi
        mov byte ptr ds : [edx+esi], bl
        public_630955d : nop
        mov eax, dword ptr ss : [esp+0x1554]
        mov ebp, dword ptr ds : [public_639913c]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_63095bc
        cmp dword ptr ss : [esp+0x1558], ebx
        je public_63095ab
        mov eax, dword ptr ss : [esp+0x155C]
        cmp eax, ebx
        je public_630959a
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x155C], ebx
        mov dword ptr ss : [esp+0x1560], ebx
        public_630959a : nop
        mov eax, dword ptr ss : [esp+0x1558]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1558], ebx
        public_63095ab : nop
        mov ecx, dword ptr ss : [esp+0x1554]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x1554], esi
        public_63095bc : nop
        mov eax, dword ptr ss : [esp+0x155C]
        cmp eax, ebx
        je public_63095df
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x155C], ebx
        mov dword ptr ss : [esp+0x1560], ebx
        public_63095df : nop
        mov eax, dword ptr ss : [esp+0x1548]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1564], ebx
        je public_630960d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6309604
        cmp cl, 0xFF
        je public_6309604
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_630960d
        public_6309604 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_630960d : nop
        mov dword ptr ss : [esp+0x1548], ebx
        mov dword ptr ss : [esp+0x154C], ebx
        mov dword ptr ss : [esp+0x1550], ebx
        mov eax, dword ptr ss : [esp+0x120]
        cmp eax, ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x168C], 3
        je public_630967d
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_630967d
        cmp cl, 0xFF
        je public_630967d
        push 1
        lea ecx, ss:[esp+0x120]
        mov esi, eax
        call dword ptr ds : [public_63991b8]
        push esi
        call dword ptr ds : [public_6399190]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x124]
        call dword ptr ds : [public_63991a4]
        mov eax, dword ptr ss : [esp+0x120]
        public_630967d : nop
        mov ecx, dword ptr ss : [esp+0x124]
        cmp ecx, edi
        jae public_630968a
        mov edi, ecx
        public_630968a : nop
        cmp edi, ebx
        jbe public_6309756
        sub ecx, edi
        push ecx
        lea ecx, ds:[eax+edi]
        push ecx
        push eax
        call dword ptr ds : [public_6399330]
        mov esi, dword ptr ss : [esp+0x130]
        add esp, 0xC
        lea ecx, ss:[esp+0x11C]
        sub esi, edi
        call public_6306080
        cmp eax, 2
        ja public_63096c4
        mov eax, 1
        jmp public_63096c7
        public_63096c4 : nop
        add eax, 0xFFFFFFFE
        public_63096c7 : nop
        cmp eax, esi
        jae public_63096d1
        call dword ptr ds : [public_63991b4]
        public_63096d1 : nop
        mov eax, dword ptr ss : [esp+0x120]
        cmp eax, ebx
        je public_6309701
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6309701
        cmp cl, 0xFF
        je public_6309701
        cmp esi, ebx
        jne public_630972f
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_63991b8]
        jmp public_630974f
        public_6309701 : nop
        cmp esi, ebx
        jne public_6309726
        cmp eax, ebx
        je public_6309756
        lea edx, ss:[esp+0x13]
        push edx
        push eax
        mov byte ptr ss : [esp+0x1B], 0
        mov dword ptr ss : [esp+0x12C], ebx
        call dword ptr ds : [public_6399184]
        add esp, 8
        jmp public_630974f
        public_6309726 : nop
        cmp dword ptr ss : [esp+0x128], esi
        jae public_6309744
        public_630972f : nop
        lea ecx, ss:[esp+0x11C]
        push esi
        call dword ptr ds : [public_63991b0]
        mov eax, dword ptr ss : [esp+0x120]
        public_6309744 : nop
        mov dword ptr ss : [esp+0x124], esi
        mov byte ptr ds : [eax+esi], 0
        public_630974f : nop
        mov eax, dword ptr ss : [esp+0x120]
        public_6309756 : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_63097b6
        cmp dword ptr ss : [esp+0x130], ebx
        je public_630979e
        mov eax, dword ptr ss : [esp+0x134]
        cmp eax, ebx
        je public_630978d
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        public_630978d : nop
        mov eax, dword ptr ss : [esp+0x130]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x130], ebx
        public_630979e : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        push ecx
        call ebp
        mov eax, dword ptr ss : [esp+0x120]
        mov dword ptr ss : [esp+0x12C], esi
        public_63097b6 : nop
        mov ecx, dword ptr ss : [esp+0x134]
        cmp ecx, ebx
        pop edi
        pop esi
        pop ebp
        je public_63097e3
        push ecx
        call dword ptr ds : [public_639932c]
        mov eax, dword ptr ss : [esp+0x118]
        add esp, 4
        mov dword ptr ss : [esp+0x128], ebx
        mov dword ptr ss : [esp+0x12C], ebx
        public_63097e3 : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x130], ebx
        je public_630980a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6309801
        cmp cl, 0xFF
        je public_6309801
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_630980a
        public_6309801 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_630980a : nop
        mov al, byte ptr ss : [esp+6]
        test al, al
        je public_630982d
        mov eax, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1674]
        mov dword ptr fs : [0], ecx
        add esp, 0x1680
        ret 
        public_630982d : nop
        mov ecx, dword ptr ss : [esp+0x1678]
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1680
        ret 
        UNREACHABLE_TRAP(0x6308e60)
    }
}

#undef public_6308ef5
#undef public_6308f30
#undef public_6308f62
#undef public_6308f91
#undef public_6308fb9
#undef public_630901e
#undef public_6309084
#undef public_63090e9
#undef public_6309150
#undef public_63091b7
#undef public_63091ed
#undef public_6309223
#undef public_630923b
#undef public_630926a
#undef public_6309292
#undef public_63092ba
#undef public_63092f0
#undef public_6309359
#undef public_630938f
#undef public_63093c2
#undef public_63093fe
#undef public_630942f
#undef public_6309432
#undef public_6309446
#undef public_630945a
#undef public_6309478
#undef public_6309505
#undef public_6309512
#undef public_630955d
#undef public_630959a
#undef public_63095ab
#undef public_63095bc
#undef public_63095df
#undef public_6309604
#undef public_630960d
#undef public_630967d
#undef public_630968a
#undef public_63096c4
#undef public_63096c7
#undef public_63096d1
#undef public_6309701
#undef public_6309726
#undef public_630972f
#undef public_6309744
#undef public_630974f
#undef public_6309756
#undef public_630978d
#undef public_630979e
#undef public_63097b6
#undef public_63097e3
#undef public_6309801
#undef public_630980a
#undef public_630982d
