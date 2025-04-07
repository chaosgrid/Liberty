#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_50f850);

#define public_50f88d _public_50f88d
#define public_50f8a8 _public_50f8a8
#define public_50f8b7 _public_50f8b7
#define public_50f8e5 _public_50f8e5
#define public_50f8e8 _public_50f8e8
#define public_50f967 _public_50f967
#define public_50f976 _public_50f976
#define public_50f9db _public_50f9db
#define public_50f9dd _public_50f9dd
#define public_50fa23 _public_50fa23
#define public_50fb32 _public_50fb32
#define public_50fb37 _public_50fb37

PROC_DECLARE(0x50f850, internal_50f850, public_50f850);
extern "C" NAKED register_t __cdecl internal_50f850()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        push esi
        push edi
        jne public_50f8e8
        lea edi, ds:[ebx+0x14]
        push edi
        lea ecx, ss:[esp+0x4C]
        xor esi, esi
        call public_4205c0
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, offset public_6750a0
        call public_420690
        test al, al
        je public_50f88d
        mov eax, dword ptr ds : [public_6750b4]
        jmp public_50f8a8
        public_50f88d : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6750a0
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_6750b4], eax
        public_50f8a8 : nop
        cmp eax, dword ptr ds : [public_6750a4]
        je public_50f8b7
        lea esi, ds:[eax+0x28]
        test esi, esi
        jne public_50f8e5
        public_50f8b7 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push edi
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x50f8d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
/*FIXUP push offset public_5c958c @0x50f8da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_50f8e5 : nop
        mov dword ptr ds : [ebx+0x34], esi
        public_50f8e8 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov ebp, dword ptr ds : [eax+4]
        lea edx, ds:[ecx+0x7C]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x1C], esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+8]
        lea edi, ds:[esi+edx]
        mov dword ptr ss : [esp+0x68], edi
        mov edi, dword ptr ds : [eax+0xC]
        fild dword ptr ss : [esp+0x68]
        add edi, ebp
        mov dword ptr ss : [esp+0x68], edi
        fmul qword ptr ds : [public_5c75e8]
        fild dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ecx+0x64]
        fsubr qword ptr ds : [public_5c89b8]
        fld st(0)
        fmulp 
        fsubr qword ptr ds : [public_5c89b8]
        fld dword ptr ds : [ecx+0x88]
        fcom dword ptr ds : [ebx+0x3C]
        fnstsw ax
        test ah, 0x41
        jne public_50f967
        fstp st(0)
        fld dword ptr ds : [ebx+0x3C]
        jmp public_50f976
        public_50f967 : nop
        fcom dword ptr ds : [ebx+0x38]
        fnstsw ax
        test ah, 5
        jp public_50f976
        fstp st(0)
        fld dword ptr ds : [ebx+0x38]
        public_50f976 : nop
        fmul st, st(1)
        sub edx, esi
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        fmul dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x70]
        fstp st(0)
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fild dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_5c7720]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x68]
        fstp st(0)
        fld st(0)
        fmulp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcom dword ptr ss : [esp+0x68]
        fnstsw ax
        test ah, 5
        jp public_50f9db
        fdiv dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x6C]
        jmp public_50f9dd
        public_50f9db : nop
        fstp st(0)
        public_50f9dd : nop
        mov ecx, dword ptr ds : [ebx+0x34]
        fxch 
        test ecx, ecx
        fmul dword ptr ds : [public_5d4f28]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5d4f28]
        fstp dword ptr ss : [esp+0x34]
        je public_50fb37
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        mov edi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        cmp edi, eax
        je public_50fb32
        public_50fa23 : nop
        mov esi, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        call public_421bd0
        fld dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x40]
        push 0
        fmul st, st(1)
        push 0
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x80]
        call public_421ca0
        fld dword ptr ss : [esp+0x40]
        push 0
        fsub dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x40]
        push esi
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x34]
        push ebp
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x94]
        push 0
        push esi
        fstp dword ptr ss : [esp+0x48]
        mov esi, dword ptr ss : [esp+0x48]
        push esi
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0xA8]
        add esp, 0x40
        push 0
        fstp dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        push esi
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x7C]
        push 0
        push ecx
        push ebp
        call public_421cc0
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        add esp, 0x20
        cmp edi, eax
        jne public_50fa23
        public_50fb32 : nop
        call public_421690
        public_50fb37 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 0xC
        UNREACHABLE_TRAP(0x50f850)
    }
}

#undef public_50f88d
#undef public_50f8a8
#undef public_50f8b7
#undef public_50f8e5
#undef public_50f8e8
#undef public_50f967
#undef public_50f976
#undef public_50f9db
#undef public_50f9dd
#undef public_50fa23
#undef public_50fb32
#undef public_50fb37
