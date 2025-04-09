#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_579aa0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_579ae6 _public_579ae6
#define public_579b82 _public_579b82
#define public_579bbe _public_579bbe

PROC_DECLARE(0x579aa0, internal_579aa0, public_579aa0);
extern "C" NAKED register_t __cdecl internal_579aa0()
{
    __asm
    {
        mov eax, 0x203C
        call public_5b7e90
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x334]
        mov ecx, dword ptr ds : [edi+0x3F8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+0x380]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [edi+0x35C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+8], eax
        jg public_579ae6
        mov dword ptr ss : [esp+8], ecx
        public_579ae6 : nop
        fild dword ptr ss : [esp+8]
        mov eax, 0x66666667
        imul ecx
        fstp dword ptr ss : [esp+0x34]
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [public_615174]
        mov dword ptr ss : [esp+8], edx
        mov ecx, eax
        push ecx
        fild dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x48]
        inc eax
/*FIXUP push offset public_5e4674 @0x579b14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4674
        fstp dword ptr ss : [esp+0x44]
        push ecx
        fild dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x4C], 0
        mov dword ptr ds : [public_615174], eax
        fstp dword ptr ss : [esp+0x44]
        call public_402180
        lea edx, ss:[esp+0x34]
        push edx
        push edi
/*FIXUP push offset public_5e4668 @0x579b3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4668
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x1C
        test esi, esi
        je public_579bbe
        fld dword ptr ds : [edi+0x3FC]
        mov eax, dword ptr ds : [public_67c480]
        test eax, eax
        fadd dword ptr ds : [edi+0x330]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        fstp dword ptr ss : [esp+0x10]
        jne public_579b82
        call public_5b73e0
        mov dword ptr ds : [public_67c480], eax
        public_579b82 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        add edi, 0x3C
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        public_579bbe : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x203C
        ret 
        UNREACHABLE_TRAP(0x579aa0)
    }
}

#undef public_579ae6
#undef public_579b82
#undef public_579bbe
