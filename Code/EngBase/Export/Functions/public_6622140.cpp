#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_661ec30);
CLANG_FORWARD_PROC_SYMBOL(public_6623200);
CLANG_FORWARD_PROC_SYMBOL(public_6623ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6624ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6625220);
CLANG_FORWARD_PROC_SYMBOL(public_6625500);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_662215b _public_662215b
#define public_662217b _public_662217b
#define public_66221a0 _public_66221a0
#define public_66221c7 _public_66221c7
#define public_66221fa _public_66221fa
#define public_662225a _public_662225a
#define public_662228d _public_662228d

PROC_DECLARE(0x6622140, internal_6622140, public_6622140);
extern "C" NAKED register_t __cdecl internal_6622140()
{
    __asm
    {
        mov eax, 0x201C
        call public_6628230
        push esi
        mov esi, dword ptr ss : [esp+0x202C]
        cmp esi, 0xFFFFFFFF
        je public_662215b
        test esi, esi
        jne public_662217b
        public_662215b : nop
        mov eax, dword ptr ss : [esp+0x2028]
        push esi
        push eax
        lea ecx, ss:[esp+0x28]
/*FIXUP push offset public_662a9b0 @0x6622168*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a9b0
        push ecx
        call public_6611d80
        push eax
        push 0x763
        jmp public_66221a0
        public_662217b : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        jne public_66221c7
        mov eax, dword ptr ss : [esp+0x2028]
        push esi
        push eax
        lea ecx, ss:[esp+0x28]
/*FIXUP push offset public_662a968 @0x662218f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a968
        push ecx
        call public_6611d80
        push eax
        push 0x769
        public_66221a0 : nop
        mov edx, dword ptr ds : [public_6629004]
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x66221ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x66221b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x24
        xor eax, eax
        pop esi
        add esp, 0x201C
        ret 0xC
        public_66221c7 : nop
        push edi
        push esi
        call public_661ec30
        mov eax, dword ptr ds : [ecx+0x24]
        mov edi, dword ptr ss : [esp+0x2028]
        test eax, eax
        jne public_662225a
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_662225a
        mov al, byte ptr ds : [edi+0x2C]
        mov dword ptr ss : [esp+8], ecx
        test al, al
        je public_66221fa
        mov eax, dword ptr ds : [edi+0x28]
        cmp dword ptr ds : [eax+0xC], ecx
        jne public_66221fa
        mov byte ptr ds : [edi+0x2C], 0
        public_66221fa : nop
        push ebx
        lea ecx, ss:[esp+0xC]
        push ebp
        lea esi, ds:[edi+0x10]
        lea edx, ss:[esp+0x28]
        push ecx
        push edx
        mov ecx, esi
        call public_6625220
        mov ebx, eax
        lea eax, ss:[esp+0x10]
        lea ecx, ss:[esp+0x20]
        push eax
        push ecx
        mov ecx, esi
        call public_6624ca0
        mov ebp, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x24], 0
        call public_6625500
        add esp, 0x10
        lea ecx, ss:[esp+0x18]
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        call public_6623200
        pop ebp
        pop ebx
        mov esi, dword ptr ss : [esp+0x2030]
        public_662225a : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        jle public_662228d
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_6623ac0
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        je public_662228d
        mov dword ptr ds : [edi+0x28], eax
        mov byte ptr ds : [edi+0x2C], 1
        public_662228d : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x201C
        ret 0xC
        UNREACHABLE_TRAP(0x6622140)
    }
}

#undef public_662215b
#undef public_662217b
#undef public_66221a0
#undef public_66221c7
#undef public_66221fa
#undef public_662225a
#undef public_662228d
