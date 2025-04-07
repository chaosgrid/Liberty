#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4252d0);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_4f4930);
CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_547550);
CLANG_FORWARD_PROC_SYMBOL(public_5475b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0b8b);

#define public_53ac66 _public_53ac66
#define public_53ac68 _public_53ac68
#define public_53acad _public_53acad
#define public_53acb5 _public_53acb5
#define public_53acd1 _public_53acd1
#define public_53ad44 _public_53ad44
#define public_53ad90 _public_53ad90
#define public_53ad94 _public_53ad94
#define public_53ae92 _public_53ae92
#define public_53af15 _public_53af15
#define public_53af29 _public_53af29
#define public_53af64 _public_53af64
#define public_53af7c _public_53af7c
#define public_53afa4 _public_53afa4
#define public_53b039 _public_53b039
#define public_53b056 _public_53b056
#define public_53b058 _public_53b058
#define public_53b1ba _public_53b1ba
#define public_53b1be _public_53b1be
#define public_53b1f7 _public_53b1f7
#define public_53b1fc _public_53b1fc
#define public_53b204 _public_53b204

PROC_DECLARE(0x53ac10, internal_53ac10, public_53ac10);
extern "C" NAKED register_t __cdecl internal_53ac10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0b8b @0x53ac18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0b8b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x158
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_5c6a28]
        test al, al
        je public_53b204
        push 0x208
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x170], edi
        je public_53ac66
        mov ecx, eax
        call public_5475b0
        mov ebx, eax
        jmp public_53ac68
        public_53ac66 : nop
        xor ebx, ebx
        public_53ac68 : nop
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ss : [esp+0x2C], al
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov ebp, dword ptr ss : [esp+0x17C]
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x170], 1
        je public_53acad
        push eax
        call dword ptr ds : [public_5c6200]
        add esp, 4
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6a24]
        public_53acad : nop
        mov esi, dword ptr ss : [ebp+0x74]
        cmp esi, dword ptr ss : [ebp+0x78]
        je public_53acd1
        public_53acb5 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        push 1
        push ecx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6a20]
        mov eax, dword ptr ss : [ebp+0x78]
        add esi, 0x20
        cmp esi, eax
        jne public_53acb5
        public_53acd1 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_53ad44
        mov edx, dword ptr ds : [ebx]
        lea esi, ss:[ebp+4]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x16C]
        test al, al
        jne public_53b039
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x67
/*FIXUP push offset public_5dec60 @0x53acfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100002
/*FIXUP push offset public_5dec24 @0x53ad06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec24
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 0x14
        lea ecx, ds:[ebx+0xC]
        push 1
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x178], 0xFFFFFFFF
        call dword ptr ds : [public_5c6a1c]
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        jmp public_53b1fc
        public_53ad44 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [public_5c61f8]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+0x168]
        mov ecx, esi
        call dword ptr ds : [public_5c65c8]
        lea eax, ds:[ebx+0xC]
        cmp eax, edi
        je public_53ad90
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_53ad90
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        mov dword ptr ss : [esp+0x10], eax
        je public_53ad94
        public_53ad90 : nop
        mov dword ptr ss : [esp+0x10], edi
        public_53ad94 : nop
        lea ecx, ss:[esp+0x54]
        call public_4f4930
        mov esi, dword ptr ds : [public_5c6030]
        lea ecx, ss:[esp+0x10C]
        mov byte ptr ss : [esp+0x170], 2
        call esi
        lea ecx, ss:[esp+0x114]
        mov byte ptr ss : [esp+0x110], 0
        call esi
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x118], 0
        mov byte ptr ss : [esp+0x119], 0
        mov dword ptr ss : [esp+0x11C], edi
        call esi
        mov dl, byte ptr ss : [esp+0x17]
        push edi
        push edi
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x12C], edi
        mov dword ptr ss : [esp+0x130], edi
        mov dword ptr ss : [esp+0x134], edi
        mov dword ptr ss : [esp+0x138], 0
        mov dword ptr ss : [esp+0x13C], edi
        mov byte ptr ss : [esp+0x140], dl
        call public_42a7e0
        mov dword ptr ss : [esp+0x13C], eax
        mov dword ptr ss : [esp+0x140], edi
        fild dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [public_613ed0]
        mov dword ptr ss : [esp+0x54], eax
        fstp dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        lea edx, ss:[ebp+0x4C]
        mov dword ptr ss : [esp+0xB0], eax
        mov dword ptr ss : [esp+0x134], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [public_6789f8]
        cmp eax, edi
        mov byte ptr ss : [esp+0x170], 3
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        jne public_53ae92
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53ae92 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x58]
        push edx
        lea edx, ss:[esp+0x148]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, 9
        lea esi, ss:[esp+0x144]
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ss : [esp+0xB4], eax
        lea eax, ss:[ebp+0x14]
        mov dword ptr ss : [esp+0xEC], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xBC], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0xB8], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC4], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0xC0], edx
        xor edx, edx
        test ecx, ecx
        mov dword ptr ss : [esp+0xE8], ecx
        jle public_53af29
        lea esi, ss:[esp+0xB8]
        lea ecx, ss:[esp+0xC8]
        sub eax, esi
        public_53af15 : nop
        mov esi, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ss : [esp+0xE8]
        inc edx
        add ecx, 4
        cmp edx, esi
        jl public_53af15
        public_53af29 : nop
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0xF4]
        call dword ptr ds : [public_5c6a24]
        lea edx, ss:[ebp+0x80]
        lea eax, ss:[esp+0x100]
        cmp eax, edx
        je public_53afa4
        mov ecx, dword ptr ss : [esp+0x104]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [edx]
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_53af7c
        public_53af64 : nop
        cmp esi, edx
        je public_53af7c
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_53af64
        public_53af7c : nop
        push edi
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x10C]
        call dword ptr ds : [public_5c65c0]
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push esi
        push edi
        lea ecx, ss:[esp+0x10C]
        call dword ptr ds : [public_5c63b0]
        public_53afa4 : nop
        mov cl, byte ptr ss : [ebp+0xAD]
        mov edx, dword ptr ss : [esp+0x54]
        lea eax, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x118], cl
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x11D], 1
        mov dword ptr ss : [esp+0x110], edx
        call dword ptr ds : [public_5c65cc]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x13C]
        mov byte ptr ss : [esp+0x174], 4
        call public_53e430
        mov edx, dword ptr ss : [esp+0x13C]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x144]
        call public_4a2f80
        mov edx, dword ptr ss : [esp+0x13C]
        push edx
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x13C], eax
        mov dword ptr ss : [esp+0x140], eax
        mov byte ptr ss : [esp+0x170], 1
        call public_4f4a10
        public_53b039 : nop
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_53b056
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_53b056
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_53b058
        public_53b056 : nop
        xor esi, esi
        public_53b058 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        lea eax, ss:[esp+0x2C]
        push 1
        push eax
        call public_4252d0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_425480
        mov edx, dword ptr ds : [ebx]
        add esp, 0xC
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        movzx eax, byte ptr ss : [ebp+0xA8]
        mov ecx, dword ptr ds : [public_673344]
        push eax
        push ecx
        mov ecx, ebx
        call public_547550
        push 0
        push ebx
        call public_540c30
        add esp, 8
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c65c4]
        call public_54baf0
        mov esi, eax
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53b1f7
        test esi, esi
        je public_53b1f7
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x50], eax
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fst dword ptr ss : [esp+0x18]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_53b1f7
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x3C], edx
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x40], eax
        jp public_53b1ba
        fadd dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        jmp public_53b1be
        public_53b1ba : nop
        fsub dword ptr ss : [esp+0x18]
        public_53b1be : nop
        mov edx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x40]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        mov ebx, eax
        test ebx, ebx
        je public_53b1f7
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_53b1f7
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edi+0x7C]
        public_53b1f7 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        public_53b1fc : nop
        call public_5b7e1d
        add esp, 4
        public_53b204 : nop
        mov ecx, dword ptr ss : [esp+0x168]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x164
        ret 8
        UNREACHABLE_TRAP(0x53ac10)
    }
}

#undef public_53ac66
#undef public_53ac68
#undef public_53acad
#undef public_53acb5
#undef public_53acd1
#undef public_53ad44
#undef public_53ad90
#undef public_53ad94
#undef public_53ae92
#undef public_53af15
#undef public_53af29
#undef public_53af64
#undef public_53af7c
#undef public_53afa4
#undef public_53b039
#undef public_53b056
#undef public_53b058
#undef public_53b1ba
#undef public_53b1be
#undef public_53b1f7
#undef public_53b1fc
#undef public_53b204
