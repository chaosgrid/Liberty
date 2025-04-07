#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6205720);
CLANG_FORWARD_PROC_SYMBOL(public_6205f00);
CLANG_FORWARD_PROC_SYMBOL(public_6206020);
CLANG_FORWARD_PROC_SYMBOL(public_6206b60);
CLANG_FORWARD_PROC_SYMBOL(public_6206be0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6206ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6206cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62085b0);
CLANG_FORWARD_PROC_SYMBOL(public_62085d0);
CLANG_FORWARD_PROC_SYMBOL(public_6208640);
CLANG_FORWARD_PROC_SYMBOL(public_6208690);
CLANG_FORWARD_PROC_SYMBOL(public_6208aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6208b00);
CLANG_FORWARD_PROC_SYMBOL(public_6208b50);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6247447);

#define public_620577f _public_620577f
#define public_620578e _public_620578e
#define public_620579a _public_620579a
#define public_62057d6 _public_62057d6
#define public_62058c8 _public_62058c8
#define public_62058d0 _public_62058d0
#define public_6205995 _public_6205995
#define public_6205a46 _public_6205a46
#define public_6205b8a _public_6205b8a
#define public_6205c4a _public_6205c4a
#define public_6205d1f _public_6205d1f
#define public_6205d76 _public_6205d76
#define public_6205d99 _public_6205d99
#define public_6205dbc _public_6205dbc
#define public_6205df2 _public_6205df2
#define public_6205e33 _public_6205e33
#define public_6205e59 _public_6205e59
#define public_6205ebf _public_6205ebf
#define public_6205ed7 _public_6205ed7

PROC_DECLARE(0x6205720, internal_6205720, public_6205720);
extern "C" NAKED register_t __cdecl internal_6205720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247447 @0x6205722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247447
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        lea eax, ss:[esp+0x1C]
        push edi
        lea ecx, ds:[ebx+0xE4]
        push eax
        mov dword ptr ss : [esp+0x6C], ecx
        call public_62085b0
        mov ecx, dword ptr ds : [public_6257900]
        xor edx, edx
        inc ecx
        mov dword ptr ss : [esp+0x100], edx
        mov dword ptr ds : [public_6257900], ecx
        mov ecx, dword ptr ds : [ebx+0x9C]
        cmp ecx, edx
        mov byte ptr ss : [esp+0x1F], dl
        jne public_620577f
        mov dword ptr ss : [esp+0x24], edx
        jmp public_620578e
        public_620577f : nop
        mov eax, dword ptr ds : [ebx+0xA0]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x24], eax
        public_620578e : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x2C], edx
        cmp eax, edx
        jle public_62057d6
        public_620579a : nop
        mov eax, dword ptr ds : [ebx+0x9C]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [eax+ecx*4]
        mov ecx, ebp
        mov edx, dword ptr ss : [ebp]
        call dword ptr ds : [edx+0x70]
        mov esi, eax
        mov edi, offset public_6255810
        mov ecx, 0xC
        xor eax, eax
        repe cmpsb
        je public_6205995
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x24]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jl public_620579a
        public_62057d6 : nop
        cmp dword ptr ds : [ebx+0xB4], 2
        jl public_6205ed7
        mov ecx, dword ptr ds : [ebx+0xF0]
        mov eax, dword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x100], 1
        mov edx, dword ptr ds : [ecx+0x60]
        mov esi, dword ptr ds : [eax]
        and edx, 0x200
        mov dword ptr ss : [esp+0x24], esi
        cmp edx, 0x200
        je public_62058c8
        add eax, 0xC
        lea ecx, ds:[esi+0xC]
        push eax
        lea eax, ss:[esp+0x14]
        push ecx
        push eax
        call public_6206c10
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x6C], eax
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        faddp 
        fcomp dword ptr ds : [public_624b60c]
        fnstsw ax
        and eax, 0x4100
        jne public_62058c8
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x58]
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ds : [eax+0x24]
        fld dword ptr ds : [eax+0x24]
        lea eax, ss:[esp+0x4C]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        fstp st(0)
        call public_6206c40
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ds:[ecx+0xC]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_6206c10
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x18
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x1F], 1
        public_62058c8 : nop
        mov byte ptr ss : [esp+0x100], 0
        public_62058d0 : nop
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], ebx
        call public_6206c70
        mov eax, dword ptr ds : [public_6257908]
        mov ecx, dword ptr ss : [esp+0x78]
        mov ebp, 0xFFFF
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xA0], 0
        mov word ptr ss : [esp+0x6C], bp
        mov edx, dword ptr ds : [eax]
        push eax
        lea esi, ds:[ecx+0x4C]
        call dword ptr ds : [edx+0x10]
        lea ecx, ss:[esp+0xC8]
        push esi
        push ecx
        mov ecx, eax
        call public_6208640
        mov ecx, 0xC
        lea esi, ss:[esp+0xC8]
        lea edi, ss:[esp+0x7C]
        rep movsd
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ss : [esp+0x1F]
        test cl, cl
        lea edx, ds:[eax+0xC]
        mov byte ptr ss : [esp+0x100], 2
        mov byte ptr ss : [esp+0x2B], 0
        mov dword ptr ss : [esp+0x30], edx
        je public_6205df2
        mov ecx, dword ptr ds : [ebx+0xF0]
        mov edx, dword ptr ds : [ecx+0x60]
        and edx, 0x100
        cmp edx, 0x100
        je public_6205a46
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x2B], 1
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_6205df2
        public_6205995 : nop
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x30]
        push edx
        push 0
        push ebp
        call dword ptr ds : [ecx+0x40]
        lea eax, ss:[esp+0x4C]
        lea ecx, ds:[ebx+0x70]
        push eax
        call public_6206b60
        lea ecx, ss:[esp+0x4C]
        lea edx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        call public_6208690
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x48], edx
        add eax, 0xC
        push ecx
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        call public_6206c10
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x64], eax
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x60], edx
        faddp 
        fcomp dword ptr ds : [public_624b60c]
        fnstsw ax
        and eax, 0x4100
        jne public_62057d6
        mov byte ptr ss : [esp+0x1F], 1
        jmp public_62058d0
        public_6205a46 : nop
        lea edx, ss:[esp+0x2C]
        lea ecx, ss:[esp+0xB8]
        push edx
        lea edx, ss:[esp+0x28]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x7C]
        call public_6205f00
        fld dword ptr ss : [esp+0xC4]
        fmul dword ptr ds : [public_624babc]
        call public_6246188
        fld dword ptr ss : [esp+0xB8]
        fmul dword ptr ds : [public_624babc]
        mov esi, eax
        shl esi, 8
        call public_6246188
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ds : [public_624babc]
        and eax, 0xFF
        or esi, eax
        shl esi, 8
        call public_6246188
        fld dword ptr ss : [esp+0xC0]
        fmul dword ptr ds : [public_624babc]
        and eax, 0xFF
        or esi, eax
        shl esi, 8
        call public_6246188
        and eax, 0xFF
        or esi, eax
        mov al, byte ptr ds : [public_625580c]
        test al, al
        je public_6205b8a
        lea eax, ss:[esp+0x34]
        lea ecx, ss:[esp+0x7C]
        push eax
        call public_6206ca0
        fld dword ptr ss : [esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_6206c40
        lea edx, ss:[esp+0x58]
        lea eax, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x20]
        push eax
        push ecx
        call public_6206c10
        mov eax, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x44]
        add esp, 0x18
        mov ecx, dword ptr ds : [eax+0xC4]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        push eax
        push ecx
        mov ecx, offset public_625792c
        call public_6208aa0
        mov word ptr ss : [esp+0x10], ax
        lea edx, ss:[esp+0x4C]
        lea eax, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x38]
        push eax
        push ecx
        call public_6206be0
        mov eax, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 0xC
        mov ecx, dword ptr ds : [eax+0xCC]
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push esi
        push edx
        push eax
        push ecx
        mov ecx, offset public_625792c
        call public_6208aa0
        mov word ptr ss : [esp+0x12], ax
        public_6205b8a : nop
        mov al, byte ptr ds : [public_6255808]
        test al, al
        je public_6205c4a
        lea edx, ss:[esp+0x34]
        lea ecx, ss:[esp+0x7C]
        push edx
        call public_6206cc0
        fld dword ptr ss : [esp+0x24]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_6206c40
        lea ecx, ss:[esp+0x58]
        lea edx, ss:[esp+0x4C]
        push ecx
        lea eax, ss:[esp+0x44]
        push edx
        push eax
        call public_6206c10
        mov edx, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 0x18
        mov eax, dword ptr ds : [edx+0xC4]
        mov edx, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        push ecx
        push edx
        push eax
        mov ecx, offset public_625792c
        call public_6208aa0
        lea ecx, ss:[esp+0x4C]
        mov word ptr ss : [esp+0x14], ax
        lea edx, ss:[esp+0x40]
        push ecx
        lea eax, ss:[esp+0x38]
        push edx
        push eax
        call public_6206be0
        mov edx, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 0xC
        mov eax, dword ptr ds : [edx+0xCC]
        mov edx, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        push ecx
        push edx
        push eax
        mov ecx, offset public_625792c
        call public_6208aa0
        mov word ptr ss : [esp+0x16], ax
        public_6205c4a : nop
        cmp word ptr ss : [esp+0x6C], bp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        je public_6205dbc
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 2
        cmp al, 2
        sete al
        test al, al
        je public_6205d76
        lea ecx, ss:[esp+0xAC]
        lea edx, ss:[esp+0x40]
        push ecx
        lea eax, ss:[esp+0x50]
        push edx
        push eax
        call public_6206be0
        lea ecx, ss:[esp+0x58]
        push 0x3F000000
        lea edx, ss:[esp+0x44]
        push ecx
        push edx
        call public_6206c40
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 0x18
        push 0x3F000000
        push 0x3F000000
        push esi
        push eax
        push ecx
        push edx
        mov ecx, offset public_625792c
        call public_6208aa0
        mov esi, eax
        mov al, byte ptr ds : [public_625580c]
        test al, al
        je public_6205d1f
        mov eax, dword ptr ss : [esp+0x6E]
        mov ecx, dword ptr ss : [esp+0x6C]
        push esi
        push eax
        push ecx
        mov ecx, offset public_625792c
        call public_6208b00
        mov edi, dword ptr ss : [esp+0x12]
        mov edx, dword ptr ss : [esp+0x6E]
        push esi
        push edi
        push edx
        mov ecx, offset public_625792c
        call public_6208b00
        push esi
        push ebx
        push edi
        mov ecx, offset public_625792c
        call public_6208b00
        mov eax, dword ptr ss : [esp+0x6C]
        push esi
        push eax
        push ebx
        mov ecx, offset public_625792c
        call public_6208b00
        public_6205d1f : nop
        mov al, byte ptr ds : [public_6255808]
        test al, al
        je public_6205dbc
        mov ecx, dword ptr ss : [esp+0x72]
        mov edx, dword ptr ss : [esp+0x70]
        push esi
        push ecx
        push edx
        mov ecx, offset public_625792c
        call public_6208b00
        mov edi, dword ptr ss : [esp+0x16]
        mov eax, dword ptr ss : [esp+0x72]
        push esi
        push edi
        push eax
        mov ecx, offset public_625792c
        call public_6208b00
        push esi
        push ebp
        push edi
        mov ecx, offset public_625792c
        call public_6208b00
        mov ecx, dword ptr ss : [esp+0x70]
        push esi
        push ecx
        push ebp
        mov ecx, offset public_625792c
        call public_6208b00
        jmp public_6205dbc
        public_6205d76 : nop
        mov al, byte ptr ds : [public_625580c]
        test al, al
        je public_6205d99
        mov edx, dword ptr ss : [esp+0x12]
        mov eax, dword ptr ss : [esp+0x6E]
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        push ebx
        push eax
        push ecx
        mov ecx, offset public_625792c
        call public_6208b50
        public_6205d99 : nop
        mov al, byte ptr ds : [public_6255808]
        test al, al
        je public_6205dbc
        mov edx, dword ptr ss : [esp+0x16]
        mov eax, dword ptr ss : [esp+0x72]
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, offset public_625792c
        call public_6208b50
        public_6205dbc : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0xB0], eax
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x6C], ebx
        inc eax
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xAC], edx
        mov dword ptr ss : [esp+0xB4], ecx
        public_6205df2 : nop
        mov ebx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x6C]
        push ebx
        push eax
        call public_6206020
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], esi
        mov al, byte ptr ss : [esp+0x2B]
        mov byte ptr ss : [esp+0x100], 3
        test al, al
        je public_6205e33
        mov ecx, dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x30]
        push eax
        call public_62085b0
        mov esi, dword ptr ds : [eax]
        public_6205e33 : nop
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x24], esi
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        call public_62085d0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x64]
        cmp edx, eax
        mov byte ptr ss : [esp+0x100], 4
        je public_6205ed7
        public_6205e59 : nop
        lea edi, ds:[esi+0xC]
        push ebx
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        call public_6206c10
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x6C], eax
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        faddp 
        fcomp dword ptr ds : [public_624b60c]
        fnstsw ax
        and eax, 0x4100
        jne public_6205ebf
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        lea ecx, ss:[esp+0x74]
        call public_6206020
        mov ebx, edi
        public_6205ebf : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, dword ptr ds : [esi]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], esi
        jne public_6205e59
        public_6205ed7 : nop
        mov ecx, dword ptr ss : [esp+0xF8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x6205720)
    }
}

#undef public_620577f
#undef public_620578e
#undef public_620579a
#undef public_62057d6
#undef public_62058c8
#undef public_62058d0
#undef public_6205995
#undef public_6205a46
#undef public_6205b8a
#undef public_6205c4a
#undef public_6205d1f
#undef public_6205d76
#undef public_6205d99
#undef public_6205dbc
#undef public_6205df2
#undef public_6205e33
#undef public_6205e59
#undef public_6205ebf
#undef public_6205ed7
