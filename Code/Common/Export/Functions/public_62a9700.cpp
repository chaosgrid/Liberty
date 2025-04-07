#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_629b210);
CLANG_FORWARD_PROC_SYMBOL(public_629f090);
CLANG_FORWARD_PROC_SYMBOL(public_62a9700);
CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6309b60);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62a9783 _public_62a9783
#define public_62a97c4 _public_62a97c4
#define public_62a97e0 _public_62a97e0
#define public_62a9816 _public_62a9816

PROC_DECLARE(0x62a9700, internal_62a9700, public_62a9700);
extern "C" NAKED register_t __cdecl internal_62a9700()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push eax
        mov edi, ecx
        call public_62f93f0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_62a97e0
        mov al, byte ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [edi]
        mov byte ptr ss : [esp+0x10], al
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        push ecx
        push ebx
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+0x104]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_62a9816
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        fmul dword ptr ds : [ebx+0x1C]
        push ecx
        mov ecx, eax
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x40]
        mov ecx, esi
        call public_6309b60
        test al, al
        jne public_62a97c4
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_629f090
        add esp, 4
        test eax, eax
        je public_62a9783
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x5C]
        jmp public_62a97c4
        public_62a9783 : nop
        mov esi, dword ptr ds : [esi+8]
        push ebp
        push esi
        lea ecx, ds:[ebx+8]
        mov ebp, 0x100002
        call public_6333e60
        push eax
        mov ecx, edi
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x116
/*FIXUP push offset public_639e254 @0x62a97b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
/*FIXUP push offset public_639e1f0 @0x62a97b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e1f0
        push ebp
        call dword ptr ds : [edx]
        add esp, 0x1C
        pop ebp
        public_62a97c4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ds:[edi+0xE4]
        call public_629b210
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        lea esp, ss:[esp]
        public_62a97e0 : nop
        mov esi, dword ptr ds : [esi+4]
        push esi
        mov ecx, edi
        mov ebx, 0x100002
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x127
/*FIXUP push offset public_639e254 @0x62a9806*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
/*FIXUP push offset public_639e1a8 @0x62a980b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e1a8
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62a9816 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a9700)
    }
}

#undef public_62a9783
#undef public_62a97c4
#undef public_62a97e0
#undef public_62a9816
