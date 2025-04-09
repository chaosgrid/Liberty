#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cecd0);
CLANG_FORWARD_PROC_SYMBOL(public_5018a0);
CLANG_FORWARD_PROC_SYMBOL(public_501c60);
CLANG_FORWARD_PROC_SYMBOL(public_501f80);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf778);

#define public_501920 _public_501920
#define public_50193f _public_50193f
#define public_501943 _public_501943
#define public_50198f _public_50198f
#define public_5019ab _public_5019ab
#define public_5019af _public_5019af
#define public_5019f9 _public_5019f9
#define public_501a19 _public_501a19
#define public_501a28 _public_501a28
#define public_501a41 _public_501a41
#define public_501a85 _public_501a85
#define public_501ab4 _public_501ab4
#define public_501afd _public_501afd
#define public_501b01 _public_501b01
#define public_501b1c _public_501b1c
#define public_501b2b _public_501b2b
#define public_501b33 _public_501b33
#define public_501b5d _public_501b5d
#define public_501b7e _public_501b7e
#define public_501ba0 _public_501ba0
#define public_501c0a _public_501c0a

PROC_DECLARE(0x5018a0, internal_5018a0, public_5018a0);
extern "C" NAKED register_t __cdecl internal_5018a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf778 @0x5018a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf778
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov ecx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push edx
        call public_501f80
        mov al, byte ptr ss : [esp+0x6C]
        xor ebp, ebp
        xor ebx, ebx
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov esi, dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x10], ebx
        lea edi, ds:[esi+1]
        call public_5ad970
        cmp eax, edi
        jae public_501920
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_5ad970
        mov edx, edi
        sub edx, eax
        push edx
        push ebp
        lea ecx, ss:[esp+0x30]
        call public_537260
        jmp public_50193f
        public_501920 : nop
        lea ecx, ss:[esp+0x24]
        call public_5ad970
        cmp edi, eax
        jae public_501943
        push ebp
        lea eax, ds:[edi*4]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_5995c0
        public_50193f : nop
        mov ebx, dword ptr ss : [esp+0x28]
        public_501943 : nop
        mov cl, byte ptr ss : [esp+0x6C]
        xor eax, eax
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x5C], 1
        mov dword ptr ss : [esp+0x68], eax
        call public_5ad970
        cmp eax, edi
        lea ecx, ss:[esp+0x14]
        jae public_50198f
        lea edx, ss:[esp+0x68]
        push edx
        call public_5ad970
        mov ecx, edi
        sub ecx, eax
        push ecx
        push 0
        lea ecx, ss:[esp+0x20]
        call public_537260
        jmp public_5019ab
        public_50198f : nop
        call public_5ad970
        cmp edi, eax
        jae public_5019af
        push 0
        lea edx, ds:[edi*4]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_5995c0
        public_5019ab : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_5019af : nop
        mov al, byte ptr ss : [esp+0x6C]
        mov byte ptr ss : [esp+0x34], al
        xor eax, eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x5C], 2
        mov dword ptr ss : [esp+0x68], eax
        call public_5ad970
        cmp eax, edi
        jae public_5019f9
        lea ecx, ss:[esp+0x68]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_5ad970
        sub edi, eax
        push edi
        push 0
        lea ecx, ss:[esp+0x40]
        call public_537260
        jmp public_501a19
        public_5019f9 : nop
        lea ecx, ss:[esp+0x34]
        call public_5ad970
        cmp edi, eax
        jae public_501a19
        push 0
        lea edx, ds:[edi*4]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_5995c0
        public_501a19 : nop
        mov eax, 1
        cmp esi, eax
        mov dword ptr ds : [ebx], 0x3F000000
        jle public_501a41
        public_501a28 : nop
        fld dword ptr ds : [public_5cfc9c]
        inc eax
        cmp eax, esi
        fsub dword ptr ds : [ebx+eax*4-8]
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [ebx+eax*4-4]
        jl public_501a28
        public_501a41 : nop
        cmp esi, 1
        fld dword ptr ds : [public_5d55b4]
        fsub dword ptr ds : [ebx+esi*4-4]
        mov edi, dword ptr ss : [esp+0x64]
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [ebx+esi*4]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [edi]
        fmul dword ptr ds : [ebx]
        fmul dword ptr ds : [public_5d4f28]
        fstp dword ptr ss : [ebp]
        jle public_501ab4
        lea ecx, ss:[ebp+4]
        mov edx, ebx
        sub ebp, edi
        sub edx, dword ptr ss : [esp+0x18]
        mov eax, edi
        mov dword ptr ss : [esp+0x64], edx
        lea edx, ds:[esi-1]
        mov dword ptr ss : [esp+0x68], edx
        public_501a85 : nop
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x64]
        fsub dword ptr ds : [eax]
        add eax, 4
        add ecx, 4
        fmul dword ptr ds : [public_5d4f28]
        fsub dword ptr ds : [eax+ebp-4]
        fmul dword ptr ds : [edx+ecx-4]
        mov edx, dword ptr ss : [esp+0x68]
        dec edx
        fstp dword ptr ds : [ecx-4]
        mov dword ptr ss : [esp+0x68], edx
        jne public_501a85
        mov ebp, dword ptr ss : [esp+0x18]
        public_501ab4 : nop
        fld dword ptr ds : [edi+esi*4]
        mov edx, dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [edi+esi*4-4]
        fmul dword ptr ds : [public_5d4f28]
        fsub dword ptr ss : [ebp+esi*4-4]
        fmul dword ptr ds : [ebx+esi*4]
        fstp dword ptr ss : [ebp+esi*4]
        mov eax, dword ptr ss : [ebp+esi*4]
        mov dword ptr ds : [edx+esi*4], eax
        lea eax, ds:[esi-1]
        test eax, eax
        jl public_501b1c
        mov ecx, ebp
        sub ecx, ebx
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, ebx
        sub ecx, edx
        lea eax, ds:[edx+eax*4]
        mov edx, esi
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_501b01
        public_501afd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_501b01 : nop
        fld dword ptr ds : [eax+4]
        add ecx, eax
        fmul dword ptr ds : [ecx]
        sub eax, 4
        fsubr dword ptr ds : [ecx+edx]
        mov ecx, dword ptr ss : [esp+0x68]
        dec ecx
        mov dword ptr ss : [esp+0x68], ecx
        fstp dword ptr ds : [eax+4]
        jne public_501afd
        public_501b1c : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_501b2b
        xor eax, eax
        jmp public_501b33
        public_501b2b : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        public_501b33 : nop
        cmp eax, esi
        jae public_501b5d
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x6C], eax
        call public_4cecd0
        mov edx, dword ptr ss : [esp+0x6C]
        mov ecx, esi
        sub ecx, eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push edx
        call public_501c60
        jmp public_501b7e
        public_501b5d : nop
        call public_4cecd0
        cmp esi, eax
        jae public_501b7e
        mov ecx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [ecx+8]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        mov edx, esi
        shl edx, 4
        add edx, eax
        push edx
        call public_501f80
        public_501b7e : nop
        xor edx, edx
        test esi, esi
        jle public_501c0a
        mov ebp, dword ptr ss : [esp+0x38]
        mov ebx, edi
        xor ecx, ecx
        sub ebx, ebp
        mov dword ptr ss : [esp+0x68], ebx
        mov ebx, dword ptr ss : [esp+0x6C]
        lea eax, ss:[ebp+4]
        lea ecx, ds:[ecx]
        public_501ba0 : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+edx*4]
        mov dword ptr ds : [ecx+ebx], ebp
        mov ebp, dword ptr ds : [eax-4]
        mov ebx, dword ptr ss : [esp+0x6C]
        mov ebx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+ecx+4], ebp
        mov ebx, dword ptr ss : [esp+0x68]
        fld dword ptr ds : [ebx+eax]
        mov ebx, dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [edi+edx*4]
        mov ebp, dword ptr ds : [ebx+4]
        inc edx
        add eax, 4
        fmul dword ptr ds : [public_5d4f28]
        fld dword ptr ds : [eax-8]
        add ecx, 0x10
        cmp edx, esi
        fadd st(0), st
        fsubp 
        fsub dword ptr ds : [eax-4]
        fstp dword ptr ds : [ecx+ebp-8]
        mov ebp, dword ptr ss : [esp+0x68]
        fld dword ptr ds : [edi+edx*4-4]
        fsub dword ptr ds : [eax+ebp-4]
        mov ebp, dword ptr ds : [ebx+4]
        fadd st(0), st
        fadd dword ptr ds : [eax-8]
        fadd dword ptr ds : [eax-4]
        fstp dword ptr ds : [ecx+ebp-4]
        jl public_501ba0
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x28]
        public_501c0a : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_5b7e1d
        push ebp
        call public_5b7e1d
        push ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x60]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x5018a0)
    }
}

#undef public_501920
#undef public_50193f
#undef public_501943
#undef public_50198f
#undef public_5019ab
#undef public_5019af
#undef public_5019f9
#undef public_501a19
#undef public_501a28
#undef public_501a41
#undef public_501a85
#undef public_501ab4
#undef public_501afd
#undef public_501b01
#undef public_501b1c
#undef public_501b2b
#undef public_501b33
#undef public_501b5d
#undef public_501b7e
#undef public_501ba0
#undef public_501c0a
