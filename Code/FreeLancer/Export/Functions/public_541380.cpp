#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_541380);
CLANG_FORWARD_PROC_SYMBOL(public_5424b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_541436 _public_541436
#define public_541469 _public_541469
#define public_54148f _public_54148f
#define public_54149c _public_54149c
#define public_5414b0 _public_5414b0
#define public_5414c7 _public_5414c7

PROC_DECLARE(0x541380, internal_541380, public_541380);
extern "C" NAKED register_t __cdecl internal_541380()
{
    __asm
    {
        mov eax, 0x201C
        call public_5b7e90
        push ebp
        mov ebp, dword ptr ss : [esp+0x2024]
        push esi
        push edi
        push ebp
        mov ecx, offset public_678aa8
        call public_5424b0
        push ebp
        mov ecx, offset public_678a90
        call public_5424b0
        push ebp
        mov ecx, offset public_678a9c
        call public_5424b0
        push ebp
        mov ecx, offset public_678a84
        call public_5424b0
        push ebp
        mov ecx, offset public_678a78
        call public_5424b0
        mov esi, dword ptr ds : [public_678ae0]
        xor edi, edi
        cmp esi, edi
        je public_5414c7
        call public_40f130
        mov ecx, dword ptr ds : [public_613ecc]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x20], 0x800
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        cmp edi, eax
        jae public_54149c
        push ebx
        lea ebx, ss:[esp+0x2C]
        public_541436 : nop
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        fld dword ptr ds : [eax+0x38]
        fcomp dword ptr ds : [public_613ec4]
        fnstsw ax
        test ah, 0x41
        jne public_541469
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        jns public_54148f
        public_541469 : nop
        push 0
/*FIXUP push offset public_613718 @0x54146b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_613718
/*FIXUP push offset public_613700 @0x541470*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_613700
        push 0
        push esi
        call public_5b8058
        add esp, 0x14
        test eax, eax
        je public_54148f
        mov edx, dword ptr ds : [eax]
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x174]
        public_54148f : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc edi
        add ebx, 4
        cmp edi, eax
        jb public_541436
        pop ebx
        public_54149c : nop
        mov esi, dword ptr ds : [public_678ac4]
        cmp esi, dword ptr ds : [public_678ac8]
        jae public_5414c7
        lea ebx, ds:[ebx]
        public_5414b0 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax+0x174]
        mov eax, dword ptr ds : [public_678ac8]
        add esi, 4
        cmp esi, eax
        jb public_5414b0
        public_5414c7 : nop
        push ebp
        mov ecx, offset public_678a6c
        call public_5424b0
        push ebp
        mov ecx, offset public_678a54
        call public_5424b0
        push ebp
        mov ecx, offset public_678a60
        call public_5424b0
        push ebp
        mov ecx, offset public_678a48
        call public_5424b0
        push ebp
        mov ecx, offset public_678a3c
        call public_5424b0
        pop edi
        pop esi
        pop ebp
        add esp, 0x201C
        ret 
        UNREACHABLE_TRAP(0x541380)
    }
}

#undef public_541436
#undef public_541469
#undef public_54148f
#undef public_54149c
#undef public_5414b0
#undef public_5414c7
