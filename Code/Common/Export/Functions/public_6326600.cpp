#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_6281f70);
CLANG_FORWARD_PROC_SYMBOL(public_62a1d40);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_62b9840);
CLANG_FORWARD_PROC_SYMBOL(public_6324e50);
CLANG_FORWARD_PROC_SYMBOL(public_6325bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6327410);
CLANG_FORWARD_PROC_SYMBOL(public_6327440);
CLANG_FORWARD_PROC_SYMBOL(public_6327480);
CLANG_FORWARD_PROC_SYMBOL(public_63286a0);
CLANG_FORWARD_PROC_SYMBOL(public_6328ba0);
CLANG_FORWARD_PROC_SYMBOL(public_632a550);
CLANG_FORWARD_PROC_SYMBOL(public_632c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632c490);
CLANG_FORWARD_PROC_SYMBOL(public_632c550);
CLANG_FORWARD_PROC_SYMBOL(public_632c5b0);
CLANG_FORWARD_PROC_SYMBOL(public_632c5e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c630);
CLANG_FORWARD_PROC_SYMBOL(public_632c8f0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_632d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_632d130);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);
CLANG_FORWARD_JUMP_SYMBOL(public_63970e5);

#define public_6326776 _public_6326776
#define public_63267d5 _public_63267d5
#define public_6326854 _public_6326854
#define public_632686f _public_632686f
#define public_632689f _public_632689f
#define public_6326988 _public_6326988
#define public_63269ca _public_63269ca
#define public_63269f5 _public_63269f5
#define public_63269fa _public_63269fa
#define public_6326a34 _public_6326a34
#define public_6326acd _public_6326acd
#define public_6326b0e _public_6326b0e
#define public_6326bcb _public_6326bcb
#define public_6326be2 _public_6326be2
#define public_6326bf0 _public_6326bf0
#define public_6326bfa _public_6326bfa
#define public_6326c09 _public_6326c09
#define public_6326c4a _public_6326c4a
#define public_6326c66 _public_6326c66
#define public_6326d6d _public_6326d6d
#define public_6326d85 _public_6326d85
#define public_6326e57 _public_6326e57
#define public_6326ebb _public_6326ebb
#define public_6326ebd _public_6326ebd
#define public_6326ecc _public_6326ecc
#define public_6326f3a _public_6326f3a
#define public_6326f4f _public_6326f4f
#define public_6326f51 _public_6326f51
#define public_6326f55 _public_6326f55
#define public_6326f60 _public_6326f60
#define public_6327018 _public_6327018
#define public_632702d _public_632702d
#define public_6327034 _public_6327034
#define public_632707b _public_632707b
#define public_632707f _public_632707f
#define public_6327092 _public_6327092
#define public_63270d2 _public_63270d2
#define public_63270d6 _public_63270d6
#define public_63270e0 _public_63270e0
#define public_63270f1 _public_63270f1
#define public_63270f7 _public_63270f7
#define public_6327103 _public_6327103
#define public_632712a _public_632712a
#define public_6327172 _public_6327172
#define public_6327183 _public_6327183
#define public_63271ae _public_63271ae
#define public_63271b7 _public_63271b7
#define public_63271c0 _public_63271c0
#define public_63271d8 _public_63271d8
#define public_6327202 _public_6327202
#define public_6327263 _public_6327263
#define public_632728d _public_632728d

PROC_DECLARE(0x6326600, internal_6326600, public_6326600);
extern "C" NAKED register_t __cdecl internal_6326600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63970e5 @0x6326602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63970e5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x238
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x16], bl
        mov al, byte ptr ss : [esp+0x16]
        push ebx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], al
        call public_62b9490
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ebx
        mov ebp, dword ptr ss : [esp+0x258]
        lea ecx, ss:[esp+0x110]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x254], ebx
        call public_6327410
        lea edi, ss:[ebp+4]
        lea edx, ss:[esp+0x110]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0xAC], edi
        call public_632c0d0
        mov eax, dword ptr ss : [esp+0x260]
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0xAC], offset public_63a3e54
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x254], 1
        call dword ptr ds : [public_63991cc]
        push 0xFFFFFFFF
/*FIXUP push offset public_63a45d0 @0x63266a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a45d0
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x258], 2
        mov dword ptr ss : [esp+0xB4], offset public_63a3fec
        call public_6328ba0
        mov dword ptr ss : [esp+0xF8], ebx
        mov byte ptr ss : [esp+0xF8], 0x10
        push 0xFF
        lea edx, ss:[esp+0xFC]
        push edx
        lea ecx, ss:[esp+0xEC]
        mov byte ptr ss : [esp+0x258], 4
        mov dword ptr ss : [esp+0xEC], offset public_63a3f64
        call public_63286a0
        mov dword ptr ss : [esp+0xF4], ebx
        lea eax, ss:[esp+0x110]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x254], 5
        call public_6327410
        lea ecx, ss:[esp+0x110]
        push ecx
        mov ecx, edi
        call public_632c0d0
        mov esi, dword ptr ss : [ebp+0x1C]
        mov ecx, ebp
        call public_6327480
        mov edx, dword ptr ss : [esp+0xF4]
        mov ecx, edx
        and edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0xF0]
        not ecx
        and ecx, dword ptr ss : [esp+0xE8]
        or ecx, edx
        and ecx, eax
        not eax
        and eax, esi
        or ecx, eax
        mov eax, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [ebp+0x1C], ecx
        cmp eax, ebx
        jne public_6326776
        mov eax, dword ptr ds : [public_639914c]
        public_6326776 : nop
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [ebp]
        push ecx
        lea ecx, ss:[esp+0xC8]
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x58]
        push edx
        mov ecx, edi
        call public_632c410
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        mov ecx, ebp
        call public_6327440
        mov ecx, edi
        call public_6281f70
        mov al, byte ptr ss : [esp+0x270]
        test al, al
        je public_63267d5
        mov eax, dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0x260]
        cmp eax, ecx
        jge public_63267d5
        sub ecx, eax
        mov dword ptr ss : [esp+0x260], ecx
        public_63267d5 : nop
        mov cl, byte ptr ss : [esp+0x12]
        xor esi, esi
        push esi
        mov byte ptr ss : [esp+0x1C], cl
        push esi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], esi
        call public_62b9840
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], esi
        mov edx, dword ptr ss : [esp+0x26C]
        mov ebx, dword ptr ss : [esp+0x260]
        lea eax, ss:[esp+0x5F]
        push eax
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x254], 6
        mov dword ptr ss : [esp+0x54], edx
        call public_632c5b0
        mov edi, dword ptr ss : [esp+0x25C]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x254], 7
        call public_632c410
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x78], edi
        call public_632c630
        public_6326854 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        test eax, eax
        jne public_632686f
        test esi, esi
        jne public_632686f
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        je public_63270d2
        public_632686f : nop
        test esi, esi
        mov byte ptr ss : [esp+0x13], 0
        jne public_6326a34
        test eax, eax
        je public_6326acd
        lea ecx, ss:[esp+0x78]
        call public_632c5e0
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_632689f
        lea ecx, ss:[esp+0x78]
        call public_632c8f0
        jmp public_6326854
        public_632689f : nop
        mov eax, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x154], eax
        mov dword ptr ss : [esp+0x150], edx
        mov edx, dword ptr ss : [esp+0x98]
        push 1
        lea eax, ss:[esp+0x23C]
        mov dword ptr ss : [esp+0x15C], ecx
        push eax
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x164], edx
        call public_632d130
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x90]
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x144], eax
        mov dword ptr ss : [esp+0x140], edx
        mov edx, dword ptr ss : [esp+0x98]
        push 1
        lea eax, ss:[esp+0x22C]
        mov dword ptr ss : [esp+0x14C], ecx
        push eax
        lea ecx, ss:[esp+0x148]
        mov dword ptr ss : [esp+0x154], edx
        call public_632d130
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        test eax, eax
        je public_6326988
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x108]
        mov dword ptr ss : [esp+0x108], edx
        mov eax, dword ptr ds : [eax+4]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x110], eax
        call public_632c630
        xor esi, esi
        jmp public_6326854
        public_6326988 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        test eax, eax
        je public_6326a34
        movzx eax, word ptr ds : [eax+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0xC4]
        push edx
        mov ecx, offset public_6401950
        mov dword ptr ss : [esp+0x30], eax
        call public_62a1d40
        mov eax, dword ptr ss : [esp+0xC0]
        cmp eax, dword ptr ds : [public_6401954]
        je public_63269ca
        lea esi, ds:[eax+0x10]
        jmp public_63269fa
        public_63269ca : nop
        mov al, byte ptr ds : [public_640194c]
        test al, 1
        jne public_63269f5
        mov dl, al
        or dl, 1
        mov ecx, offset public_6401940
        mov byte ptr ds : [public_640194c], dl
        call public_6325bb0
/*FIXUP push offset _public_632a550 @0x63269e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_632a550
        call public_6391f9e
        add esp, 4
        public_63269f5 : nop
        mov esi, offset public_6401940
        public_63269fa : nop
        lea eax, ss:[esp+0x1F8]
        push eax
        mov ecx, esi
        call public_632c410
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x100], ecx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x100]
        push eax
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x108], edx
        call public_632c630
        xor esi, esi
        jmp public_6326854
        public_6326a34 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test edi, edi
        je public_6326c4a
        mov edx, dword ptr ds : [esi]
        push 0
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x130]
        push ecx
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x134]
        mov edx, dword ptr ss : [esp+0x130]
        mov ecx, dword ptr ss : [esp+0x138]
        mov dword ptr ss : [esp+0x160], edx
        mov edx, dword ptr ss : [esp+0x13C]
        mov dword ptr ss : [esp+0x164], eax
        mov dword ptr ss : [esp+0x168], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x160]
        push eax
        mov dword ptr ss : [esp+0x170], edx
        push ecx
        lea edx, ss:[esp+0x210]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x17C], esi
        mov byte ptr ss : [esp+0x180], 1
        call public_632c550
        xor esi, esi
        public_6326acd : nop
        mov al, byte ptr ss : [esp+0x270]
        test al, al
        je public_6326bcb
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6326bcb
        mov edx, dword ptr ss : [esp+0x64]
        cmp dword ptr ss : [esp+0xC4], edx
        jl public_6326b0e
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x220]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_62728a0
        public_6326b0e : nop
        xor eax, eax
        lea edx, ss:[esp+0x1A8]
        mov dword ptr ss : [esp+0x1A8], eax
        mov dword ptr ss : [esp+0x1AC], eax
        mov dword ptr ss : [esp+0x1B0], eax
        mov dword ptr ss : [esp+0x1B4], eax
        lea ecx, ss:[esp+0xE4]
        mov byte ptr ss : [esp+0x1BC], al
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x1BC], ecx
        push eax
        lea ecx, ss:[esp+0x1F8]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_632c550
        mov edx, dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0xCC]
        mov eax, dword ptr ss : [esp+0xC8]
        mov dword ptr ss : [esp+0x110], edx
        mov edx, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x118], ecx
        mov dword ptr ss : [esp+0x114], eax
        lea ecx, ss:[esp+0x110]
        push ecx
        mov dword ptr ss : [esp+0x120], edx
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x124], eax
        push edx
        lea eax, ss:[esp+0x228]
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x130], 0
        call public_632c550
        public_6326bcb : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        xor ebx, ebx
        xor edi, edi
        cmp eax, ebp
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_6326c09
        public_6326be2 : nop
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        sub ecx, edx
        cmp ecx, edi
        jle public_6326bf0
        mov edi, ecx
        public_6326bf0 : nop
        cmp edx, dword ptr ss : [esp+0x54]
        jle public_6326bfa
        mov dword ptr ss : [esp+0x54], edx
        public_6326bfa : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax]
        add ebx, edx
        cmp eax, ebp
        jne public_6326be2
        mov dword ptr ss : [esp+0x28], ebx
        public_6326c09 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x14]
        add edi, ecx
        sub eax, 0
        mov ecx, dword ptr ss : [esp+0x268]
        mov ebx, ecx
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6326f4f
        dec eax
        je public_6326f3a
        dec eax
        jne public_6326f55
        mov ebx, dword ptr ss : [esp+0x64]
        sub ebx, dword ptr ss : [esp+0x28]
        add ebx, ecx
        jmp public_6326f51
        public_6326c4a : nop
        test eax, eax
        je public_6326c66
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        push 0
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx+4]
        xor esi, esi
        jmp public_6326854
        public_6326c66 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x40]
        push ecx
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        cmp dword ptr ss : [esp+0x40], ebx
        jle public_6326ecc
        mov al, byte ptr ss : [esp+0x270]
        test al, al
        jne public_6326d85
        mov al, byte ptr ss : [esp+0x278]
        test al, al
        je public_6326d6d
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0
        push ebx
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        test al, al
        je public_6326d6d
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        lea ecx, ss:[esp+0x218]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_627f280
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        lea ecx, ss:[esp+0x1FC]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_627f280
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x40]
        push eax
        push ebp
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1D8], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x1DC], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1E0], eax
        mov dword ptr ss : [esp+0x1E4], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x1D8]
        push eax
        mov dword ptr ss : [esp+0x1EC], edx
        push ecx
        lea edx, ss:[esp+0x204]
        push edx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x1F8], 0
        call public_632c550
        mov esi, dword ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x13], 1
        mov byte ptr ss : [esp+0x12], 1
        jmp public_6326acd
        public_6326d6d : nop
        cmp ebx, dword ptr ss : [esp+0x260]
        je public_6326d85
        mov al, byte ptr ss : [esp+0x278]
        test al, al
        jne public_6326ebd
        public_6326d85 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push 1
        push ebx
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        test al, al
        je public_6326e57
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        lea edx, ss:[esp+0x20C]
        push edx
        lea ecx, ss:[esp+0x40]
        call public_627f280
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        lea edx, ss:[esp+0x214]
        push edx
        lea ecx, ss:[esp+0x40]
        call public_627f280
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x40]
        push edx
        push ebp
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x190], eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x194], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x198], edx
        lea edx, ss:[esp+0x190]
        mov dword ptr ss : [esp+0x19C], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x1A4], ecx
        push eax
        lea ecx, ss:[esp+0x21C]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x1B0], 0
        call public_632c550
        mov esi, dword ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x13], 1
        mov byte ptr ss : [esp+0x12], 1
        jmp public_6326acd
        public_6326e57 : nop
        mov al, byte ptr ss : [esp+0x270]
        test al, al
        jne public_6326ebb
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x1C0], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x1C4], eax
        mov dword ptr ss : [esp+0x1C8], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x1C0]
        push eax
        mov dword ptr ss : [esp+0x1D0], edx
        push ecx
        lea edx, ss:[esp+0x224]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1DC], esi
        mov byte ptr ss : [esp+0x1E0], 0
        call public_632c550
        public_6326ebb : nop
        xor esi, esi
        public_6326ebd : nop
        mov byte ptr ss : [esp+0x13], 1
        mov byte ptr ss : [esp+0x12], 1
        jmp public_6326acd
        public_6326ecc : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x178], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x17C], edx
        lea edx, ss:[esp+0x178]
        mov dword ptr ss : [esp+0x180], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x188], ecx
        push eax
        lea ecx, ss:[esp+0x22C]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x194], esi
        mov byte ptr ss : [esp+0x198], 0
        call public_632c550
        sub ebx, dword ptr ss : [esp+0x40]
        xor esi, esi
        jmp public_6326854
        public_6326f3a : nop
        mov ebx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x64]
        sub eax, ebx
        cdq 
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        add ebx, ecx
        jmp public_6326f51
        public_6326f4f : nop
        mov ebx, ecx
        public_6326f51 : nop
        mov dword ptr ss : [esp+0x2C], ebx
        public_6326f55 : nop
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6327092
        public_6326f60 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        jne public_632707f
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jle public_632702d
        mov dword ptr ss : [esp+0xD4], offset public_63a420c
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x50]
        sub edx, eax
        add edx, ebp
        mov dword ptr ss : [esp+0x28], edx
        fild dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0xD4]
        mov byte ptr ss : [esp+0x250], 8
        fstp dword ptr ss : [esp+0xDC]
        mov byte ptr ss : [esp+0xD9], 0
        fild dword ptr ss : [esp+0x2C]
        mov byte ptr ss : [esp+0xD8], 0
        fstp dword ptr ss : [esp+0xE0]
        call dword ptr ds : [public_63a4228]
        mov dword ptr ss : [esp+0x68], eax
        mov ebp, dword ptr ss : [esp+0x264]
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x68]
        push ecx
        push eax
        lea edx, ss:[esp+0x208]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x25C], 9
        call public_632c490
        mov ecx, dword ptr ss : [esp+0x68]
        test ecx, ecx
        mov byte ptr ss : [esp+0x250], 8
        je public_6327018
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x68], 0
        public_6327018 : nop
        mov byte ptr ss : [esp+0x250], 7
        mov dword ptr ss : [esp+0xD4], offset public_63a3e54
        jmp public_6327034
        public_632702d : nop
        mov ebp, dword ptr ss : [esp+0x264]
        public_6327034 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push eax
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x25C], 0xA
        call public_632c490
        mov ecx, dword ptr ss : [esp+0x6C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x250], 7
        je public_632707b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x6C], 0
        public_632707b : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_632707f : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi]
        add ebx, ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x2C], ebx
        jne public_6326f60
        public_6327092 : nop
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x58]
        push ebp
        push eax
        lea ecx, ss:[esp+0x78]
        add edi, edx
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5C], edi
        call public_62728a0
        mov al, byte ptr ss : [esp+0x270]
        test al, al
        mov ebx, dword ptr ss : [esp+0x260]
        mov ebp, dword ptr ss : [esp+0x258]
        je public_6326854
        jmp public_63270d6
        public_63270d2 : nop
        mov edi, dword ptr ss : [esp+0x50]
        public_63270d6 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_63270f7
        public_63270e0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_63270f1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x38]
        public_63270f1 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_63270e0
        public_63270f7 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_632712a
        public_6327103 : nop
        push 0
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6271cc0
        cmp dword ptr ss : [esp+0x14], esi
        jne public_6327103
        public_632712a : nop
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x14]
        push ecx
        push edx
        mov ecx, ebp
        call public_6324e50
        mov eax, dword ptr ss : [ebp]
        add esi, 0x18
        push esi
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0xA8]
        call public_6281f70
        mov eax, dword ptr ss : [esp+0x274]
        xor ebx, ebx
        cmp eax, ebx
        je public_6327172
        sub edi, dword ptr ss : [esp+0x26C]
        mov dword ptr ds : [eax], edi
        public_6327172 : nop
        cmp dword ptr ss : [esp+0xA4], ebx
        mov byte ptr ss : [esp+0x250], 6
        je public_63271c0
        public_6327183 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0xA4]
        add ecx, 8
        dec eax
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0xA4], eax
        je public_63271ae
        cmp ecx, dword ptr ss : [esp+0x80]
        jne public_63271b7
        public_63271ae : nop
        lea ecx, ss:[esp+0x78]
        call public_632d0b0
        public_63271b7 : nop
        cmp dword ptr ss : [esp+0xA4], ebx
        jne public_6327183
        public_63271c0 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x250], 5
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6327202
        public_63271d8 : nop
        push ebx
        lea edx, ss:[esp+0x74]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6271cc0
        cmp dword ptr ss : [esp+0x14], esi
        jne public_63271d8
        mov eax, dword ptr ss : [esp+0x1C]
        public_6327202 : nop
        push eax
        call public_6391d5a
        mov esi, offset public_63a3e54
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0xE4], esi
        mov dword ptr ss : [esp+0xAC], offset public_63a3fec
        push 1
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x254], 0xB
        call dword ptr ds : [public_6399160]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xAC], esi
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x250], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_632728d
        public_6327263 : nop
        push ebx
        lea edx, ss:[esp+0x74]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6271cc0
        cmp dword ptr ss : [esp+0x14], esi
        jne public_6327263
        mov eax, dword ptr ss : [esp+0x38]
        public_632728d : nop
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x24C]
        mov al, byte ptr ss : [esp+0x16]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x244
        ret 
        UNREACHABLE_TRAP(0x6326600)
    }
}

#undef public_6326776
#undef public_63267d5
#undef public_6326854
#undef public_632686f
#undef public_632689f
#undef public_6326988
#undef public_63269ca
#undef public_63269f5
#undef public_63269fa
#undef public_6326a34
#undef public_6326acd
#undef public_6326b0e
#undef public_6326bcb
#undef public_6326be2
#undef public_6326bf0
#undef public_6326bfa
#undef public_6326c09
#undef public_6326c4a
#undef public_6326c66
#undef public_6326d6d
#undef public_6326d85
#undef public_6326e57
#undef public_6326ebb
#undef public_6326ebd
#undef public_6326ecc
#undef public_6326f3a
#undef public_6326f4f
#undef public_6326f51
#undef public_6326f55
#undef public_6326f60
#undef public_6327018
#undef public_632702d
#undef public_6327034
#undef public_632707b
#undef public_632707f
#undef public_6327092
#undef public_63270d2
#undef public_63270d6
#undef public_63270e0
#undef public_63270f1
#undef public_63270f7
#undef public_6327103
#undef public_632712a
#undef public_6327172
#undef public_6327183
#undef public_63271ae
#undef public_63271b7
#undef public_63271c0
#undef public_63271d8
#undef public_6327202
#undef public_6327263
#undef public_632728d
