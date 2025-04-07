#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f05f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f336a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f571a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faeb24);

#define public_6f33916 _public_6f33916
#define public_6f33921 _public_6f33921
#define public_6f33931 _public_6f33931
#define public_6f33968 _public_6f33968
#define public_6f33972 _public_6f33972
#define public_6f33994 _public_6f33994
#define public_6f3399b _public_6f3399b
#define public_6f339af _public_6f339af
#define public_6f33a03 _public_6f33a03
#define public_6f33a17 _public_6f33a17
#define public_6f33a61 _public_6f33a61
#define public_6f33a73 _public_6f33a73
#define public_6f33a9a _public_6f33a9a
#define public_6f33b10 _public_6f33b10
#define public_6f33b34 _public_6f33b34
#define public_6f33b62 _public_6f33b62
#define public_6f33be7 _public_6f33be7
#define public_6f33c18 _public_6f33c18
#define public_6f33c51 _public_6f33c51
#define public_6f33c77 _public_6f33c77

PROC_DECLARE(0x6f336a0, internal_6f336a0, public_6f336a0);
extern "C" NAKED register_t __cdecl internal_6f336a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faeb24 @0x6f336a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faeb24
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4D0
        push ebx
        mov ebx, dword ptr ss : [esp+0x4E4]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        mov dword ptr ss : [esp+0xEC], ebp
        call public_6f571a0
        xor esi, esi
        mov dword ptr ss : [ebp+0x174], offset public_6fb61e8
        mov dword ptr ss : [esp+0x4E8], esi
        mov dword ptr ss : [ebp+0x178], esi
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x4EC], 1
        mov byte ptr ss : [ebp+0x17C], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [ebp+0x180], eax
        mov dword ptr ss : [ebp+0x184], esi
        mov edi, dword ptr ds : [public_6fb3030]
        mov dword ptr ss : [ebp+0x1A0], esi
        mov dword ptr ss : [ebp+0x1A8], esi
        mov dword ptr ss : [ebp+0x1AC], 0xBFF00000
        mov byte ptr ss : [ebp+0x1B1], 0
        mov ecx, dword ptr ds : [ebx+0x4FC]
        mov dword ptr ss : [ebp+0x1B4], ecx
        mov dword ptr ss : [ebp+0x1B8], 5
        mov edx, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [ebp+0x1BC], edx
        mov eax, dword ptr ds : [ebx+0x10C]
        mov dword ptr ss : [ebp+0x1C0], eax
        mov ecx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x1C4], ecx
        mov edx, dword ptr ds : [ebx+0x108]
        lea ecx, ss:[ebp+0x1CC]
        mov byte ptr ss : [esp+0x4E8], 2
        mov dword ptr ss : [ebp+0x1C8], edx
        call edi
        lea ecx, ss:[ebp+0x1D0]
        call dword ptr ds : [public_6fb309c]
        mov al, byte ptr ds : [ebx+0x78]
        lea ecx, ss:[ebp+0x5AC]
        mov byte ptr ss : [ebp+0x5A8], al
        call edi
        mov dword ptr ss : [ebp], offset public_6fb95a0
        mov dword ptr ss : [ebp+0x118], offset public_6fb959c
        mov dword ptr ss : [ebp+0x174], offset public_6fb9574
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push esi
        push esi
        push esi
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        call public_6eb7810
        push esi
        push esi
        push esi
        lea ecx, ss:[esp+0x54]
        call public_6eb7810
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x78], esi
        mov dword ptr ss : [esp+0x7C], esi
        call dword ptr ds : [public_6fb31b8]
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x4E8], 3
        call public_6eac5b0
        or eax, 0xFFFFFFFF
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xC8], eax
        mov dword ptr ss : [esp+0xCC], esi
        mov dword ptr ss : [esp+0xD0], esi
        mov dword ptr ss : [esp+0xD4], eax
        mov dword ptr ss : [esp+0xD8], esi
        mov dword ptr ss : [esp+0xDC], esi
        mov dword ptr ss : [esp+0xE0], esi
        call public_6efc7a0
        mov eax, dword ptr ds : [ebx+0x7C]
        mov ecx, dword ptr ss : [ebp+0x138]
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [esp+0xD4], edx
        mov eax, dword ptr ds : [eax+0x48]
        lea ecx, ds:[ebx+0xB4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], edx
        lea esi, ds:[ebx+0x90]
        mov ecx, 9
        lea edi, ss:[esp+0x54]
        rep movsd
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [ebp+0x170]
        mov byte ptr ss : [esp+0x4E8], 4
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x24], edx
        je public_6f33916
        mov eax, dword ptr ds : [eax+0x48]
        mov dword ptr ss : [esp+0xD0], eax
        jmp public_6f33921
        public_6f33916 : nop
        mov dword ptr ss : [esp+0xD0], 0
        public_6f33921 : nop
        mov esi, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [ebx+0x88]
        cmp esi, eax
        je public_6f339af
        public_6f33931 : nop
        push 8
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+4]
        mov edi, eax
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        mov al, byte ptr ss : [esp+0x90]
        add esp, 4
        test al, al
        je public_6f33968
        mov eax, dword ptr ss : [esp+0x90]
        test eax, eax
        je public_6f33968
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x90], ecx
        jmp public_6f33972
        public_6f33968 : nop
        push 0xC
        call public_6fa912a
        add esp, 4
        public_6f33972 : nop
        mov edx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ss : [esp+0x88]
        test ecx, ecx
        je public_6f33994
        mov dword ptr ds : [ecx], eax
        jmp public_6f3399b
        public_6f33994 : nop
        mov dword ptr ss : [esp+0x84], eax
        public_6f3399b : nop
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [ebx+0x88]
        add esi, 8
        cmp esi, eax
        jne public_6f33931
        public_6f339af : nop
        mov ecx, dword ptr ds : [ebx+0xC4]
        mov edx, dword ptr ds : [ebx+0xC8]
        lea eax, ds:[ebx+0xC4]
        mov dword ptr ss : [esp+0x94], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x98], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x9C], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0xA0], edx
        xor edx, edx
        test ecx, ecx
        mov dword ptr ss : [esp+0xC4], ecx
        jle public_6f33a17
        lea esi, ss:[esp+0x94]
        lea ecx, ss:[esp+0xA4]
        sub eax, esi
        public_6f33a03 : nop
        mov esi, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ss : [esp+0xC4]
        inc edx
        add ecx, 4
        cmp edx, esi
        jl public_6f33a03
        public_6f33a17 : nop
        mov ecx, dword ptr ds : [ebx]
        call public_6f33f80
        mov ecx, dword ptr ds : [ebx+0x500]
        mov dword ptr ss : [esp+0xC8], eax
        mov eax, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [esp+0xCC], eax
        mov dword ptr ss : [esp+0xE0], ecx
        lea ecx, ds:[ebx+0x118]
        lea eax, ss:[ebp+0x17C]
        cmp eax, ecx
        je public_6f33a9a
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f33a73
        public_6f33a61 : nop
        cmp esi, ecx
        je public_6f33a73
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6f33a61
        public_6f33a73 : nop
        push edi
        push eax
        lea eax, ss:[esp+0xEC]
        push eax
        lea ecx, ss:[ebp+0x17C]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x17C]
        call public_6ed0230
        public_6f33a9a : nop
        mov edx, dword ptr ds : [ebx+0x4FC]
        lea ecx, ss:[esp+0x24]
        lea eax, ss:[ebp+4]
        push ecx
        push eax
        mov dword ptr ss : [ebp+0x1B4], edx
        call dword ptr ds : [public_6fb350c]
        add esp, 8
        lea ecx, ss:[esp+0xEC]
        call dword ptr ds : [public_6fb3098]
        mov byte ptr ss : [esp+0x104], 1
        lea esi, ds:[ebx+0x124]
        mov ecx, 0xF6
        lea edi, ss:[esp+0x108]
        rep movsd
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eb6bb0
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_6f50650
        mov dword ptr ss : [ebp+0x550], 0
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [eax+0x64]
        add esp, 4
        cmp ecx, edx
        je public_6f33b34
        mov edi, edi
        public_6f33b10 : nop
        mov edx, dword ptr ss : [ebp+0x550]
        cmp edx, 0x10
        jge public_6f33b34
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+edx*4+0x554], esi
        inc dword ptr ss : [ebp+0x550]
        mov edx, dword ptr ds : [eax+0x64]
        add ecx, 8
        cmp ecx, edx
        jne public_6f33b10
        public_6f33b34 : nop
        mov ecx, 0xF6
        lea esi, ds:[ebx+0x124]
        lea edi, ss:[ebp+0x1D0]
        rep movsd
        mov eax, dword ptr ds : [ebx+0xC0]
        cmp eax, 0xFFFFFFFF
        jne public_6f33b62
        push 0
/*FIXUP push offset public_6fb8ad8 @0x6f33b54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8ad8
        call dword ptr ds : [public_6fb30b4]
        add esp, 8
        public_6f33b62 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0xF8], eax
        lea eax, ss:[ebp+0x174]
        mov dword ptr ss : [esp+0xFC], eax
        lea eax, ss:[ebp+0x118]
        mov dword ptr ss : [esp+0x100], eax
        lea eax, ss:[esp+0xEC]
        push eax
        push ecx
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        lea edx, ss:[esp+0x14]
        xor edi, edi
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edi
        call public_6f57c90
        push edi
        lea eax, ds:[ebx+0x60]
        push eax
        mov ecx, ebp
        call public_6f57840
        mov eax, dword ptr ds : [ebx+0xFC]
        cmp eax, edi
        je public_6f33c77
        cmp dword ptr ds : [eax+8], edi
        jne public_6f33be7
        mov ecx, dword ptr ss : [ebp+0x178]
        cmp ecx, edi
        je public_6f33c77
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x178], edi
        jmp public_6f33c77
        public_6f33be7 : nop
        mov dword ptr ds : [eax+0xC], ebp
        mov eax, dword ptr ds : [ebx+0x114]
        cmp eax, edi
        mov byte ptr ss : [esp+0x13], 1
        je public_6f33c18
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        test eax, 0xC40
        jne public_6f33c18
        mov byte ptr ss : [esp+0x13], 0
        public_6f33c18 : nop
        mov eax, dword ptr ss : [ebp+0x178]
        cmp eax, edi
        mov ebx, dword ptr ds : [ebx+0xFC]
        lea esi, ss:[ebp+0x178]
        je public_6f33c51
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb31b4]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6f57c60
        mov ecx, dword ptr ds : [esi]
        cmp ecx, edi
        je public_6f33c51
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], edi
        public_6f33c51 : nop
        cmp dword ptr ds : [ebx+8], edi
        je public_6f33c77
        push esi
        push ebx
        call public_6f05f00
        mov al, byte ptr ss : [esp+0x1B]
        add esp, 8
        test al, al
        je public_6f33c77
        cmp dword ptr ss : [ebp+0x160], edi
        jne public_6f33c77
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_6f33c77 : nop
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[ebp+0x190]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [ebp+0x188], edi
        mov dword ptr ss : [ebp+0x19C], edi
        mov dword ptr ss : [ebp+0x18C], edi
        mov byte ptr ss : [esp+0x4E8], 2
        call dword ptr ds : [public_6fb31b0]
        mov ecx, dword ptr ss : [esp+0x4E0]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4DC
        ret 4
        UNREACHABLE_TRAP(0x6f336a0)
    }
}

#undef public_6f33916
#undef public_6f33921
#undef public_6f33931
#undef public_6f33968
#undef public_6f33972
#undef public_6f33994
#undef public_6f3399b
#undef public_6f339af
#undef public_6f33a03
#undef public_6f33a17
#undef public_6f33a61
#undef public_6f33a73
#undef public_6f33a9a
#undef public_6f33b10
#undef public_6f33b34
#undef public_6f33b62
#undef public_6f33be7
#undef public_6f33c18
#undef public_6f33c51
#undef public_6f33c77
