#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_4c71b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4e70e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4e727d _public_4e727d
#define public_4e7302 _public_4e7302
#define public_4e7304 _public_4e7304
#define public_4e7313 _public_4e7313
#define public_4e7315 _public_4e7315
#define public_4e734b _public_4e734b
#define public_4e734d _public_4e734d
#define public_4e73ec _public_4e73ec
#define public_4e7420 _public_4e7420
#define public_4e742f _public_4e742f
#define public_4e7431 _public_4e7431
#define public_4e7474 _public_4e7474
#define public_4e74c2 _public_4e74c2
#define public_4e74c4 _public_4e74c4
#define public_4e74de _public_4e74de
#define public_4e7567 _public_4e7567

PROC_DECLARE(0x4e70e0, internal_4e70e0, public_4e70e0);
extern "C" NAKED register_t __cdecl internal_4e70e0()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        push ebp
        mov ebp, ecx
        lea eax, ss:[ebp+0x4B4]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [ebp+0x4C0]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        fadd dword ptr ss : [ebp+0x4C4]
        mov edx, dword ptr ds : [eax+8]
        push esi
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ecx
        fadd dword ptr ss : [ebp+0x4C0]
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        fstp dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x18]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], edx
        fsub dword ptr ss : [ebp+0x4C4]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        fstp dword ptr ss : [esp+0x30]
        call public_4c71b0
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov edi, eax
        mov ebx, esi
        mov esi, dword ptr ds : [public_67dcac]
        mov dword ptr ss : [esp+0x78], edx
        mov dword ptr ss : [esp+0x40], ecx
        sub ecx, edx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [public_67dca4]
        mov eax, esi
        mov dword ptr ss : [esp+0x1C], ecx
        fild dword ptr ss : [esp+0x1C]
        sub eax, edx
        add esp, 0xC
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x38], edi
        fmul dword ptr ss : [esp+0xB8]
        fiadd dword ptr ss : [esp+0x6C]
        call public_5b7ec0
        sub esi, dword ptr ds : [public_67dca4]
        inc esi
        mov dword ptr ss : [esp+0x10], esi
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], eax
        fmul dword ptr ss : [esp+0xB8]
        fiadd dword ptr ss : [esp+0x34]
        call public_5b7ec0
        fmul dword ptr ds : [public_5d2a98]
        fild dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], eax
        fadd st, st(1)
        call public_5b7ec0
        sub edi, ebx
        mov dword ptr ss : [esp+0x10], edi
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], eax
        fmul dword ptr ds : [public_5d2a98]
        fiadd dword ptr ss : [esp+0x30]
        call public_5b7ec0
        fild dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x30], eax
        fsub st, st(1)
        call public_5b7ec0
        fild dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x34], eax
        fsub st, st(1)
        call public_5b7ec0
        fstp st(0)
        push 1
        lea ecx, ss:[esp+0x30]
        lea ebx, ss:[ebp+0x3B8]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x40], eax
        call public_40fb80
        mov al, byte ptr ds : [public_674b0c]
        test al, 1
        jne public_4e727d
        fld dword ptr ds : [public_6127b4]
        or al, 1
        fmul dword ptr ds : [public_5c77f4]
        mov byte ptr ds : [public_674b0c], al
        fptan 
        fstp st(0)
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ds : [public_674b08]
        public_4e727d : nop
        mov edx, dword ptr ds : [public_6127b4]
        push edx
        mov ecx, ebx
        call public_40f8c0
        mov al, byte ptr ss : [esp+0xB4]
        test al, al
        jne public_4e7420
        fld dword ptr ds : [public_674b08]
        lea ecx, ss:[esp+0x3C]
        fmul dword ptr ss : [ebp+0x388]
        fmul dword ptr ds : [public_5d8468]
        fstp dword ptr ss : [esp+0x10]
        call public_4215b0
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        je public_4e7302
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e7302
        add eax, 0xC
        test eax, eax
        je public_4e7302
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e7302
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e7302
        mov esi, eax
        jmp public_4e7304
        public_4e7302 : nop
        xor esi, esi
        public_4e7304 : nop
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        je public_4e7313
        lea ecx, ds:[eax-8]
        jmp public_4e7315
        public_4e7313 : nop
        xor ecx, ecx
        public_4e7315 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push eax
        add esi, 8
        lea eax, ss:[esp+0x90]
        push esi
        push eax
        call dword ptr ds : [public_5c65a0]
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0x398]
        add esp, 0xC
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        je public_4e734b
        lea ecx, ds:[eax-8]
        jmp public_4e734d
        public_4e734b : nop
        xor ecx, ecx
        public_4e734d : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        lea ecx, ss:[ebp+0x38C]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        mov ecx, eax
        call public_4e7090
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_411d60
        mov eax, dword ptr ss : [ebp+0x398]
        add esp, 0xC
        test eax, eax
        je public_4e73ec
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e73ec
        add eax, 0xC
        test eax, eax
        je public_4e73ec
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e73ec
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x803
        cmp eax, 0x803
        jne public_4e73ec
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5cfc9c]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5cfc9c]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5cfc9c]
        fstp dword ptr ss : [esp+0x1C]
        public_4e73ec : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0xC
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], edx
        mov dword ptr ss : [esp+0x68], eax
        jmp public_4e7567
        public_4e7420 : nop
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        je public_4e742f
        lea ecx, ds:[eax-8]
        jmp public_4e7431
        public_4e742f : nop
        xor ecx, ecx
        public_4e7431 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld qword ptr ds : [public_5d8ec0]
        mov esi, eax
        fcos 
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        lea eax, ss:[esp+0x44]
        mov ecx, 3
        fld qword ptr ds : [public_5d8ec0]
        fsin 
        public_4e7474 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_4e7474
        mov ecx, dword ptr ss : [ebp+0x398]
        fstp st(0)
        test ecx, ecx
        fstp st(0)
        fld dword ptr ds : [public_674b08]
        fmul dword ptr ss : [ebp+0x388]
        fmul dword ptr ds : [public_5d8468]
        fstp dword ptr ss : [esp+0x10]
        je public_4e74c2
        add ecx, 0xFFFFFFF8
        jmp public_4e74c4
        public_4e74c2 : nop
        xor ecx, ecx
        public_4e74c4 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        jne public_4e74de
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e74de : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x38C]
        push edx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x50]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        mov dword ptr ss : [esp+0x68], edx
        public_4e7567 : nop
        push 0x16B
/*FIXUP push offset public_5d8e84 @0x4e756c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8e84
        lea esi, ss:[esp+0x44]
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        mov byte ptr ds : [ebx+0x34], 1
        push ebx
        rep movsd
        call public_422610
        push ebx
        call public_422910
        add esp, 0x10
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x4B0], 1
        pop ebp
        pop ebx
        add esp, 0xA0
        ret 8
        UNREACHABLE_TRAP(0x4e70e0)
    }
}

#undef public_4e727d
#undef public_4e7302
#undef public_4e7304
#undef public_4e7313
#undef public_4e7315
#undef public_4e734b
#undef public_4e734d
#undef public_4e73ec
#undef public_4e7420
#undef public_4e742f
#undef public_4e7431
#undef public_4e7474
#undef public_4e74c2
#undef public_4e74c4
#undef public_4e74de
#undef public_4e7567
