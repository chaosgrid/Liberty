#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_510160);
CLANG_FORWARD_PROC_SYMBOL(public_510990);
CLANG_FORWARD_PROC_SYMBOL(public_512660);

#define public_5101bd _public_5101bd
#define public_5101de _public_5101de
#define public_5101e1 _public_5101e1
#define public_510214 _public_510214
#define public_510229 _public_510229
#define public_51028b _public_51028b
#define public_5102a5 _public_5102a5
#define public_5102d1 _public_5102d1
#define public_5102d8 _public_5102d8
#define public_51097d _public_51097d
#define public_510982 _public_510982

PROC_DECLARE(0x510160, internal_510160, public_510160);
extern "C" NAKED register_t __cdecl internal_510160()
{
    __asm
    {
        sub esp, 0x144
        push ebx
        push ebp
        push esi
        push edi
        push 2
        push 5
        mov edi, ecx
        call public_4220c0
        mov eax, dword ptr ds : [edi+0x34]
        xor ebp, ebp
        add esp, 8
        cmp eax, ebp
        jne public_5101e1
        lea ebx, ds:[edi+0x14]
        push ebx
        lea ecx, ss:[esp+0x13C]
        xor esi, esi
        call public_4205c0
        lea eax, ss:[esp+0x138]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, offset public_6750a0
        call public_512660
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, dword ptr ds : [public_6750a4]
        je public_5101bd
        lea esi, ds:[eax+0x28]
        cmp esi, ebp
        jne public_5101de
        public_5101bd : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x5101c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x5101d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_5101de : nop
        mov dword ptr ds : [edi+0x34], esi
        public_5101e1 : nop
        mov ecx, dword ptr ds : [edi+0x34]
        cmp ecx, ebp
        je public_510982
        mov ebx, dword ptr ss : [esp+0x15C]
        mov eax, dword ptr ds : [ebx+0x88]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [edi+0x3C]
        fnstsw ax
        test ah, 0x41
        jne public_510214
        mov edx, dword ptr ds : [edi+0x3C]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_510229
        public_510214 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [edi+0x38]
        fnstsw ax
        test ah, 5
        jp public_510229
        mov eax, dword ptr ds : [edi+0x38]
        mov dword ptr ss : [esp+0x18], eax
        public_510229 : nop
        lea edx, ds:[ebx+0x7C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ebx+0x14]
        fld dword ptr ds : [eax+0x2F0]
        mov edx, dword ptr ds : [edx+8]
        fld st(0)
        mov dword ptr ss : [esp+0x2C], edx
        fmul dword ptr ds : [eax+0x2AC]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+0x2AC]
        mov eax, dword ptr ds : [eax+0x10]
        fxch 
        mov dword ptr ss : [esp+0x3C], eax
        fadd qword ptr ds : [public_5c89b8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        fmulp 
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x64]
        jne public_51028b
        mov dword ptr ss : [esp+0x40], ebp
        jmp public_5102a5
        public_51028b : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        mov eax, 0x2E8BA2E9
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x40], edx
        public_5102a5 : nop
        push ebp
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 8
        cmp eax, ebp
        mov dword ptr ss : [esp+0x60], ebp
        jle public_51097d
        mov dword ptr ss : [esp+0x68], ebp
        jmp public_5102d8
        public_5102d1 : nop
        mov ebx, dword ptr ss : [esp+0x15C]
        public_5102d8 : nop
        mov esi, dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [esi+ebp+8]
        add esi, ebp
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi]
        fmul dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], edx
        fmul qword ptr ds : [public_5c75e8]
        fld st(0)
        fchs 
        fld st(0)
        fld st(1)
        fstp dword ptr ss : [esp+0x10C]
        fld st(1)
        fstp dword ptr ss : [esp+0x124]
        fxch 
        fstp dword ptr ss : [esp+0x118]
        fld dword ptr ds : [public_5c75dc]
        fdiv st, st(3)
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7474]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0xF0]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7474]
        fstp dword ptr ss : [esp+0x80]
        fmul dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0xF4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x10C]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x10C]
        fmul dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x7C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x124]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x124]
        fmul dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x118]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0xE4]
        push ebx
        fld dword ptr ss : [esp+0x14]
        push eax
        fmul st, st(2)
        push ecx
        push edx
        mov ecx, edi
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x128]
        fmul dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xF8]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fst dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x90]
        fsubr st, st(1)
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xD4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0x8C]
        fsubr st, st(1)
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0xC4]
        fld dword ptr ss : [esp+0x7C]
        fsubr st, st(1)
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0xDC]
        fsub dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xE0]
        call public_510990
        fld dword ptr ds : [public_61346c]
        mov eax, dword ptr ds : [edi+0x34]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ds : [ebx+0x64]
        fxch 
        fmul dword ptr ds : [public_61346c]
        faddp 
        fmul dword ptr ds : [esi+0x28]
        fmul dword ptr ss : [esp+0x160]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fsubr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+8]
        fmul st, st(2)
        faddp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        fsubr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+8]
        fmul st, st(2)
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        faddp 
        push edx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi+0x1C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi+0x20]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x13C]
        fxch st(3)
        fld st(0)
        fmul dword ptr ds : [esi+0x10]
        fld st(1)
        fmul dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0xE4]
        fxch 
        fmul dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0xE8]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0xE4]
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x50]
        fstp st(2)
        fstp st(1)
        fld dword ptr ss : [esp+0xE8]
        fadd dword ptr ss : [esp+0x13C]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0xB4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0xB8]
        fld st(0)
        fmul dword ptr ds : [esi+0x10]
        fld st(1)
        fmul dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x108]
        fxch 
        fmul dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x10C]
        fadd dword ptr ss : [esp+0xB0]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x108]
        fadd dword ptr ss : [esp+0xB4]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x10C]
        fadd dword ptr ss : [esp+0xB8]
        fstp dword ptr ss : [esp+0x60]
        call public_421ca0
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        push 0
        push eax
        mov edx, dword ptr ds : [esi+0x10]
        push ecx
        push edx
        call public_421bd0
        mov eax, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x108]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [edx+0xC]
        mov ebp, dword ptr ss : [esp+0x44]
        push eax
        push ebp
        call public_421ca0
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x4C]
        mov ebx, dword ptr ss : [esp+0x4C]
        push ebx
        push ecx
        push edx
        push eax
        call public_421bd0
        mov ecx, dword ptr ss : [esp+0xC4]
        mov edx, dword ptr ss : [esp+0xC0]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 0x48
        push ecx
        push ebp
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        push ebx
        push edx
        push eax
        push ecx
        call public_421bd0
        mov edx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xA8]
        push 0
        push edx
        push eax
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        push edx
        call public_421ca0
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        push 0
        push eax
        push ecx
        push edx
        call public_421bd0
        mov eax, dword ptr ss : [esp+0x100]
        mov ecx, dword ptr ss : [esp+0xFC]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [edx+0xC]
        add esp, 0x48
        push eax
        push ebp
        call public_421ca0
        push ebx
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        push edx
        push eax
        call public_421bd0
        mov ecx, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ss : [esp+0x9C]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x40]
        push ecx
        push edx
        call public_421ca0
        mov ebx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+0x7C]
        push ebx
        push eax
        push ecx
        push edx
        call public_421bd0
        mov eax, dword ptr ss : [esp+0xDC]
        mov ecx, dword ptr ss : [esp+0xD8]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 0x48
        push eax
        push ecx
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        push ebx
        push edx
        push eax
        push ecx
        call public_421bd0
        mov edx, dword ptr ss : [esp+0xD0]
        mov eax, dword ptr ss : [esp+0xCC]
        push 0
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [ecx+0x14]
        push edx
        push ebp
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x74]
        push eax
        mov eax, dword ptr ss : [esp+0x74]
        push ecx
        push edx
        push eax
        call public_421bd0
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xCC]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ss : [esp+0x64]
        add esp, 0x48
        push ecx
        push ebp
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        push ebx
        push edx
        push eax
        push ecx
        call public_421bd0
        mov edx, dword ptr ss : [esp+0xB8]
        mov eax, dword ptr ss : [esp+0xB4]
        push 0
        push edx
        push eax
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x1C]
        push ebx
        push eax
        push ecx
        push edx
        call public_421bd0
        mov eax, dword ptr ss : [esp+0x124]
        mov ecx, dword ptr ss : [esp+0x120]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 0x48
        push edx
        push eax
        call public_421ca0
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x1C]
        push ebx
        push ecx
        push edx
        push eax
        call public_421bd0
        mov ecx, dword ptr ss : [esp+0xE8]
        mov edx, dword ptr ss : [esp+0xE4]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+0x14]
        push ecx
        push ebp
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x7C]
        push ebx
        push edx
        push eax
        push ecx
        call public_421bd0
        mov edx, dword ptr ss : [esp+0xF4]
        mov eax, dword ptr ss : [esp+0xF0]
        push 0
        push edx
        push eax
        call public_421cc0
        mov eax, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ss : [esp+0xB0]
        add esp, 0x48
        inc eax
        mov dword ptr ss : [esp+0x60], eax
        add edx, 0x2C
        cmp eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x68], edx
        jl public_5102d1
        public_51097d : nop
        call public_421690
        public_510982 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x144
        ret 0xC
        UNREACHABLE_TRAP(0x510160)
    }
}

#undef public_5101bd
#undef public_5101de
#undef public_5101e1
#undef public_510214
#undef public_510229
#undef public_51028b
#undef public_5102a5
#undef public_5102d1
#undef public_5102d8
#undef public_51097d
#undef public_510982
