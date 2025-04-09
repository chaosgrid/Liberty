#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0340);
CLANG_FORWARD_PROC_SYMBOL(public_5a1130);

#define public_5a03de _public_5a03de
#define public_5a041d _public_5a041d
#define public_5a0499 _public_5a0499
#define public_5a0502 _public_5a0502
#define public_5a0522 _public_5a0522

PROC_DECLARE(0x5a0340, internal_5a0340, public_5a0340);
extern "C" NAKED register_t __cdecl internal_5a0340()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[ebp+0x80]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        call public_420d60
        test al, al
        je public_5a03de
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x1C]
        rep movsd
        jmp public_5a041d
        public_5a03de : nop
        fld dword ptr ss : [ebp+0x60]
        fadd dword ptr ss : [ebp+0xA8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0x64]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [ebp+0xAC]
        mov dword ptr ss : [esp+0x40], eax
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [ebp+0x68]
        mov ecx, dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+0xB0]
        mov dword ptr ss : [esp+0x44], ecx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x48], edx
        public_5a041d : nop
        fld dword ptr ss : [esp+0x40]
        mov al, byte ptr ss : [ebp+0x2D3]
        test al, al
        fadd dword ptr ss : [ebp+0xC0]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [ebp+0xC4]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [ebp+0xC8]
        fstp dword ptr ss : [esp+0x48]
        je public_5a0499
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        public_5a0499 : nop
        mov eax, dword ptr ss : [esp+0x50]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[ebp+0xB4]
        call public_5a1130
        mov bl, al
        test bl, bl
        je public_5a0522
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_5a0502
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a0502
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x25
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        mov eax, dword ptr ss : [ebp+0xCC]
        test eax, eax
        je public_5a0522
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        push eax
        push 0x4F
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        test eax, eax
        jne public_5a0522
        public_5a0502 : nop
        mov eax, dword ptr ss : [ebp+0xCC]
        test eax, eax
        je public_5a0522
        mov al, byte ptr ss : [ebp+0x6C]
        test al, 1
        je public_5a0522
        test al, 2
        je public_5a0522
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x88]
        public_5a0522 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x5a0340)
    }
}

#undef public_5a03de
#undef public_5a041d
#undef public_5a0499
#undef public_5a0502
#undef public_5a0522
