#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5a1130);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4563);

#define public_58a267 _public_58a267
#define public_58a4ad _public_58a4ad
#define public_58a4ca _public_58a4ca
#define public_58a4f1 _public_58a4f1
#define public_58a4f7 _public_58a4f7
#define public_58a4f9 _public_58a4f9

PROC_DECLARE(0x58a230, internal_58a230, public_58a230);
extern "C" NAKED register_t __cdecl internal_58a230()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c4563 @0x58a238*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4563
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xBC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x344]
        xor ebx, ebx
        cmp eax, ebx
        jne public_58a267
        cmp byte ptr ds : [esi+0x35C], bl
        je public_58a4f7
        public_58a267 : nop
        fld dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x1C], 0
        fadd dword ptr ds : [esi+0xB0]
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        fld dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        fadd dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        fld dword ptr ds : [esi+0x60]
        mov dword ptr ss : [esp+0x48], 0
        fadd dword ptr ds : [esi+0xA8]
        mov dword ptr ss : [esp+0x44], 0
        fxch st(2)
        mov dword ptr ss : [esp+0x40], 0
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x32C]
        mov dword ptr ss : [esp+0x38], 0
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x58], edx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x330]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x50], eax
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xD4]
        push eax
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x58], ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_5a1130
        test al, al
        je public_58a4f7
        cmp dword ptr ds : [esi+0x344], ebx
        push ebp
        push edi
        je public_58a4ca
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0xD4], ebx
        call public_4144b0
        or ebp, 0xFFFFFFFF
        push ebp
        push ebx
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xDC], 1
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x6C], ebp
        mov dword ptr ss : [esp+0xB0], ebx
        call public_413df0
        fld dword ptr ds : [esi+0x68]
        fadd dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ds : [esi+0x344]
        fld dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x64], eax
        fadd dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0x68], eax
        fld dword ptr ds : [esi+0x60]
        mov dword ptr ss : [esp+0x18], 0
        fadd dword ptr ds : [esi+0xA8]
        mov dword ptr ss : [esp+0xD4], 2
        fxch st(2)
        mov byte ptr ss : [esp+0xC4], 1
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x32C]
        mov dword ptr ss : [esp+0xB4], ecx
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC0], ecx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x330]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xAC], edx
        fsub dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xB8], edx
        lea edx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xB0], eax
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov dword ptr ss : [esp+0xC0], eax
        call public_4be370
        add esp, 4
        lea eax, ss:[esp+0x74]
        mov dword ptr ss : [esp+0xD4], 3
        mov dword ptr ss : [esp+0xC8], eax
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xD4], 5
        call public_4144f0
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0xD4], 4
        call public_445d70
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_58a4ad
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ebx
        public_58a4ad : nop
        mov eax, dword ptr ss : [esp+0x6C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xD4], ebp
        je public_58a4ca
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        public_58a4ca : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_58a4f1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        cmp edi, ebx
        je public_58a4f1
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        push eax
        push 0x46
        mov ecx, edi
        call dword ptr ss : [ebp+0xA8]
        public_58a4f1 : nop
        pop edi
        mov al, 1
        pop ebp
        jmp public_58a4f9
        public_58a4f7 : nop
        xor al, al
        public_58a4f9 : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC8
        ret 4
        UNREACHABLE_TRAP(0x58a230)
    }
}

#undef public_58a267
#undef public_58a4ad
#undef public_58a4ca
#undef public_58a4f1
#undef public_58a4f7
#undef public_58a4f9
