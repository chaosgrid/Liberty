#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_410280);
CLANG_FORWARD_PROC_SYMBOL(public_522700);
CLANG_FORWARD_PROC_SYMBOL(public_5554d0);

#define public_522778 _public_522778
#define public_522782 _public_522782
#define public_52280b _public_52280b
#define public_522818 _public_522818
#define public_522825 _public_522825

PROC_DECLARE(0x522700, internal_522700, public_522700);
extern "C" NAKED register_t __cdecl internal_522700()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        push edi
        mov esi, ecx
        call dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        mov al, byte ptr ds : [esi+0xD3]
        test al, al
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x28], 0x3F800000
        fstp dword ptr ss : [esp+0x10]
        je public_522782
        mov eax, dword ptr ds : [public_675244]
        test eax, eax
        je public_522778
        mov ecx, dword ptr ds : [public_67524c]
        test ecx, ecx
        je public_522778
        mov dword ptr ds : [esi+0xD4], eax
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x24]
        fstp dword ptr ss : [esp+0x28]
        jmp public_522782
        public_522778 : nop
        mov dword ptr ds : [esi+0xD4], 0
        public_522782 : nop
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+0xD4]
        fadd dword ptr ds : [eax+4]
        push 1
        fld dword ptr ss : [esp+0xC]
        push ecx
        fadd dword ptr ds : [eax]
        push edx
        push edi
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        push 0x437A0000
        fstp dword ptr ss : [esp+0x2C]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_5554d0
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_410280
        movzx eax, byte ptr ds : [esi+0xD0]
        movzx edx, byte ptr ss : [esp+0x40]
        movzx ecx, byte ptr ss : [esp+0x41]
        add eax, edx
        movzx edx, byte ptr ds : [esi+0xD1]
        add edx, ecx
        movzx ecx, byte ptr ds : [esi+0xD2]
        movzx esi, byte ptr ss : [esp+0x42]
        add esp, 0x1C
        add ecx, esi
        cmp eax, 0xFF
        pop edi
        pop esi
        jle public_52280b
        mov eax, 0xFF
        public_52280b : nop
        cmp edx, 0xFF
        jle public_522818
        mov edx, 0xFF
        public_522818 : nop
        cmp ecx, 0xFF
        jle public_522825
        mov ecx, 0xFF
        public_522825 : nop
        mov byte ptr ss : [esp+0x1D], dl
        lea edx, ss:[esp+0x1C]
        push edx
        mov byte ptr ss : [esp+0x20], al
        mov byte ptr ss : [esp+0x22], cl
        call public_410240
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x522700)
    }
}

#undef public_522778
#undef public_522782
#undef public_52280b
#undef public_522818
#undef public_522825
