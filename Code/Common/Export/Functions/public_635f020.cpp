#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635f020);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635f038 _public_635f038
#define public_635f065 _public_635f065
#define public_635f16d _public_635f16d

PROC_DECLARE(0x635f020, internal_635f020, public_635f020);
extern "C" NAKED register_t __cdecl internal_635f020()
{
    __asm
    {
        sub esp, 0xB94
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea edi, ss:[esp+0x664]
        mov ebx, 0x15
        public_635f038 : nop
        mov ecx, edi
        call public_6261260
        add edi, 0x40
        dec ebx
        jne public_635f038
        mov ebp, dword ptr ss : [esp+0xBA8]
        push ebp
        lea ecx, ss:[esp+0x600]
        call public_635de90
        lea edi, ss:[esp+0xBC]
        mov ebx, 0x15
        public_635f065 : nop
        mov ecx, edi
        call public_6261260
        add edi, 0x40
        dec ebx
        jne public_635f065
        mov edi, dword ptr ss : [esp+0xBAC]
        push edi
        lea ecx, ss:[esp+0x58]
        call public_635de90
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], ecx
        fld dword ptr ds : [edi+0x4C]
        fsub dword ptr ss : [ebp+0x4C]
        lea ebx, ds:[esi+0x2C]
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x10], offset public_63a56f4
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+0x50]
        mov dword ptr ss : [esp+0x24], 0
        fsub dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x34], 0
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edi+0x54]
        mov dword ptr ss : [esp+0x38], 0
        fsub dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0x3C], 0
        fstp dword ptr ss : [esp+0x4C]
        call public_6347ef0
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ds : [esi+0x10]
        fdiv dword ptr ss : [esp+0x14]
        push ebx
        push 0
        lea ecx, ss:[esp+0x604]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x50]
        mov edx, dword ptr ds : [eax+0x14]
        shr edx, 0x16
        and edx, 0xFF
        fld dword ptr ds : [edx*4+public_658aa18]
        mov edx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x5C]
        fld st(1)
        fmul dword ptr ds : [public_63a5460]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        fadd dword ptr ds : [public_658aa10]
        push edx
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        push ecx
        push edx
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x38]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6369720
        test eax, eax
        je public_635f16d
        mov dword ptr ds : [esi+0x28], 0x10
        public_635f16d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xB94
        ret 8
        UNREACHABLE_TRAP(0x635f020)
    }
}

#undef public_635f038
#undef public_635f065
#undef public_635f16d
