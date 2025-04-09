#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_54f9f0);
CLANG_FORWARD_PROC_SYMBOL(public_54fd30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_54faee _public_54faee
#define public_54fb10 _public_54fb10
#define public_54fb20 _public_54fb20
#define public_54fb30 _public_54fb30
#define public_54fb5d _public_54fb5d
#define public_54fb81 _public_54fb81
#define public_54fbbe _public_54fbbe

PROC_DECLARE(0x54f9f0, internal_54f9f0, public_54f9f0);
extern "C" NAKED register_t __cdecl internal_54f9f0()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ss : [esp+0x44]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi+0xC]
        push edi
        fadd st(0), st
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fst dword ptr ss : [esp+0x58]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x4C]
        fld st(0)
        sub esp, 0xC
        fmul dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov edi, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [edi]
        mov ebx, eax
        fmul dword ptr ds : [public_5c75d8]
        shl ebx, 8
        call public_5b7ec0
        fld dword ptr ds : [edi+4]
        and eax, 0xFF
        fmul dword ptr ds : [public_5c75d8]
        or ebx, eax
        shl ebx, 8
        call public_5b7ec0
        fld dword ptr ds : [edi+8]
        and eax, 0xFF
        fmul dword ptr ds : [public_5c75d8]
        or ebx, eax
        shl ebx, 8
        call public_5b7ec0
        and eax, 0xFF
        or ebx, eax
        mov dword ptr ds : [public_679838], ebx
        movzx eax, byte ptr ds : [esi+0x16]
        movzx ecx, byte ptr ds : [esi+0x15]
        lea eax, ds:[ecx+eax*2]
        sub eax, 0
        je public_54fb10
        dec eax
        je public_54faee
        dec eax
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0x3F800000
        jne public_54fb20
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x58], 0x3F800000
        jmp public_54fb30
        public_54faee : nop
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x58], 0x3F800000
        jmp public_54fb30
        public_54fb10 : nop
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x3F800000
        public_54fb20 : nop
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x58], 0
        public_54fb30 : nop
        mov al, byte ptr ds : [esi+0x17]
        test al, al
        je public_54fb5d
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        jmp public_54fb81
        public_54fb5d : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        public_54fb81 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x14], ecx
        je public_54fbbe
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c7500]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7500]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7500]
        fstp dword ptr ss : [esp+0x14]
        public_54fbbe : nop
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fadd dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fadd dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        mov dword ptr ds : [public_679830], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [public_679834], eax
        mov eax, dword ptr ss : [esp+0x40]
        push edx
        push eax
        mov ecx, offset public_6797d0
        call public_54fd30
        mov ecx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [public_679830], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ds : [public_679834], edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        mov ecx, offset public_6797d0
        call public_54fd30
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov esi, dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [esi]
        mov edi, eax
        fmul dword ptr ds : [public_5c75d8]
        shl edi, 8
        call public_5b7ec0
        fld dword ptr ds : [esi+4]
        and eax, 0xFF
        fmul dword ptr ds : [public_5c75d8]
        or edi, eax
        shl edi, 8
        call public_5b7ec0
        and eax, 0xFF
        or edi, eax
        shl edi, 8
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        and eax, 0xFF
        or edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        mov ecx, offset public_6797d0
        mov dword ptr ds : [public_679838], edi
        mov dword ptr ds : [public_679830], 0x3F000000
        mov dword ptr ds : [public_679834], 0x3F000000
        call public_54fd30
        pop edi
        pop esi
        pop ebx
        add esp, 0x3C
        ret 0x14
        UNREACHABLE_TRAP(0x54f9f0)
    }
}

#undef public_54faee
#undef public_54fb10
#undef public_54fb20
#undef public_54fb30
#undef public_54fb5d
#undef public_54fb81
#undef public_54fbbe
