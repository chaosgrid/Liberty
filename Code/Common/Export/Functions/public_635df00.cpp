#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635df00);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635df18 _public_635df18
#define public_635df53 _public_635df53
#define public_635e068 _public_635e068

PROC_DECLARE(0x635df00, internal_635df00, public_635df00);
extern "C" NAKED register_t __cdecl internal_635df00()
{
    __asm
    {
        sub esp, 0xB9C
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea edi, ss:[esp+0x66C]
        mov ebx, 0x15
        public_635df18 : nop
        mov ecx, edi
        call public_6261260
        add edi, 0x40
        dec ebx
        jne public_635df18
        mov eax, dword ptr ss : [esp+0xBB4]
        push eax
        lea ecx, ss:[esp+0x608]
        call public_635de90
        mov ebx, dword ptr ss : [esp+0xBB8]
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x10], ecx
        lea edi, ss:[esp+0xC4]
        mov ebp, 0x15
        public_635df53 : nop
        mov ecx, edi
        call public_6261260
        add edi, 0x40
        dec ebp
        jne public_635df53
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea ecx, ss:[esp+0x60]
        call public_635de90
        mov ecx, dword ptr ss : [esp+0xBB0]
        mov eax, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [ebx]
        and eax, 0xFFFF
        shl eax, 4
        add eax, ebp
        mov dword ptr ss : [esp+0x18], offset public_63a56dc
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ds : [eax]
        mov eax, edx
        lea edx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [ebx+4]
        push edx
        fstp dword ptr ss : [esp+0x50]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x5C]
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0x3C]
        call public_6347ef0
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ds : [esi+0x10]
        fdiv dword ptr ss : [esp+0x1C]
        lea edx, ds:[esi+0x2C]
        push edx
        lea edx, ss:[esp+0x608]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+0x50]
        mov ecx, dword ptr ds : [eax+0x14]
        shr ecx, 0x16
        and ecx, 0xFF
        fld dword ptr ds : [ecx*4+public_658aa18]
        lea ecx, ss:[esp+0x60]
        fld st(1)
        fmul dword ptr ds : [public_63a5460]
        fadd dword ptr ds : [public_658aa10]
        fstp dword ptr ss : [esp+0x18]
        fld st(1)
        fadd dword ptr ds : [eax+0x54]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [esi+0x24]
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x20]
        push edx
        fadd st, st(1)
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x40]
        fstp st(0)
        call public_6369720
        test eax, eax
        je public_635e068
        mov dword ptr ds : [esi+0x28], 0x20
        public_635e068 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xB9C
        ret 0xC
        UNREACHABLE_TRAP(0x635df00)
    }
}

#undef public_635df18
#undef public_635df53
#undef public_635e068
