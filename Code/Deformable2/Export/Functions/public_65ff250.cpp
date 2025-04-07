#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28b0);
CLANG_FORWARD_PROC_SYMBOL(public_6600c00);
CLANG_FORWARD_PROC_SYMBOL(public_6600da0);
CLANG_FORWARD_PROC_SYMBOL(public_6600dc0);

#define public_65ff275 _public_65ff275
#define public_65ff31f _public_65ff31f
#define public_65ff32d _public_65ff32d
#define public_65ff342 _public_65ff342
#define public_65ff353 _public_65ff353
#define public_65ff39a _public_65ff39a
#define public_65ff3bb _public_65ff3bb
#define public_65ff3d2 _public_65ff3d2
#define public_65ff3d4 _public_65ff3d4
#define public_65ff438 _public_65ff438
#define public_65ff448 _public_65ff448
#define public_65ff460 _public_65ff460
#define public_65ff465 _public_65ff465

PROC_DECLARE(0x65ff250, internal_65ff250, public_65ff250);
extern "C" NAKED register_t __cdecl internal_65ff250()
{
    __asm
    {
        mov eax, 0x2024
        call public_6600c00
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        xor eax, eax
        cmp ecx, eax
        push esi
        mov dword ptr ss : [esp+0x14], eax
        jbe public_65ff3bb
        push ebp
        push edi
        mov dword ptr ss : [esp+0x18], eax
        public_65ff275 : nop
        mov esi, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [ebx+8]
        add esi, edx
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[esi+4]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[esi+8]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x28], 1
        je public_65ff342
        push eax
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_660100c]
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jl public_65ff32d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        cmp ecx, 1
        push edi
        sete cl
        push eax
        mov byte ptr ds : [esi+0x28], cl
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0x34]
        test eax, eax
        jl public_65ff31f
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_65ff31f
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push 0
        push eax
        push ebp
        call dword ptr ds : [ecx+0x70]
        public_65ff31f : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push ebp
        call dword ptr ds : [ecx+0x38]
        jmp public_65ff342
        public_65ff32d : nop
        mov edi, dword ptr ds : [esi]
        mov esi, offset public_6602b30
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        sete byte ptr ss : [esp+0x13]
        public_65ff342 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0xFFFFFFFF
        je public_65ff353
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x40]
        public_65ff353 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_65ff39a
        mov edx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [ebx+0x14]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_6602b10 @0x65ff36e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602b10
        push eax
        call public_65f28b0
        push eax
        push 0x23F
/*FIXUP push offset public_6602ad0 @0x65ff37f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602ad0
        mov ecx, 0x100003
/*FIXUP push offset public_6602ab4 @0x65ff389*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602ab4
        push ecx
        mov ecx, dword ptr ds : [public_6601008]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_65ff39a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        inc eax
        add edx, 0x2C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], edx
        jb public_65ff275
        pop edi
        pop ebp
        public_65ff3bb : nop
        fld dword ptr ds : [ebx+0x2C]
        fcomp dword ptr ds : [public_66011e0]
        fnstsw ax
        test ah, 5
        jp public_65ff3d2
        mov eax, 1
        jmp public_65ff3d4
        public_65ff3d2 : nop
        xor eax, eax
        public_65ff3d4 : nop
        test al, al
        mov byte ptr ds : [ebx+0x64], al
        mov byte ptr ds : [ebx+0x65], 0
        jne public_65ff465
        push 0
        call public_6600da0
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [edx+8]
        add esp, 4
        test ecx, ecx
        je public_65ff465
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0xC]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_65ff465
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_6600dc0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ds : [ebx+0x65], cl
        jl public_65ff438
        cmp eax, 0xE
        jle public_65ff448
        public_65ff438 : nop
        push eax
        call public_6600dc0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_65ff460
        public_65ff448 : nop
        mov al, byte ptr ds : [ebx+0x65]
        test al, al
        jne public_65ff460
        mov eax, 1
        pop esi
        mov byte ptr ds : [ebx+0x64], al
        pop ebx
        add esp, 0x2024
        ret 
        public_65ff460 : nop
        xor eax, eax
        mov byte ptr ds : [ebx+0x64], al
        public_65ff465 : nop
        pop esi
        pop ebx
        add esp, 0x2024
        ret 
        UNREACHABLE_TRAP(0x65ff250)
    }
}

#undef public_65ff275
#undef public_65ff31f
#undef public_65ff32d
#undef public_65ff342
#undef public_65ff353
#undef public_65ff39a
#undef public_65ff3bb
#undef public_65ff3d2
#undef public_65ff3d4
#undef public_65ff438
#undef public_65ff448
#undef public_65ff460
#undef public_65ff465
