#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_6349c30);
CLANG_FORWARD_PROC_SYMBOL(public_634a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_634a830);
CLANG_FORWARD_PROC_SYMBOL(public_635d360);

#define public_634a89b _public_634a89b
#define public_634a95d _public_634a95d
#define public_634a964 _public_634a964
#define public_634a96e _public_634a96e
#define public_634a984 _public_634a984

PROC_DECLARE(0x634a830, internal_634a830, public_634a830);
extern "C" NAKED register_t __cdecl internal_634a830()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push ebx
        call public_635d360
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x68]
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x2C]
        push eax
        fadd dword ptr ss : [esp+0x70]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x44]
        call public_6349c30
        test eax, eax
        je public_634a984
        push ebp
        xor ebp, ebp
        mov bp, word ptr ds : [ebx+0x22]
        dec ebp
        js public_634a964
        public_634a89b : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edi, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [eax+0x124]
        fld dword ptr ds : [eax+0x128]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax+0x12C]
        mov eax, dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x10], eax
        fmul dword ptr ds : [public_63a5460]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634a95d
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ds:[esi+0x34]
        push edx
        lea ecx, ss:[esp+0x60]
        call public_628bed0
        lea ecx, ss:[esp+0x58]
        call public_62c4780
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634a95d
        mov eax, dword ptr ds : [edi+0x24]
        push eax
        mov ecx, esi
        call public_634a7d0
        public_634a95d : nop
        dec ebp
        jns public_634a89b
        public_634a964 : nop
        xor edi, edi
        mov di, word ptr ds : [ebx+0x1A]
        pop ebp
        dec edi
        js public_634a984
        public_634a96e : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [edx+edi*4]
        push ecx
        push eax
        mov ecx, esi
        call public_634a830
        dec edi
        jns public_634a96e
        public_634a984 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x58
        ret 8
        UNREACHABLE_TRAP(0x634a830)
    }
}

#undef public_634a89b
#undef public_634a95d
#undef public_634a964
#undef public_634a96e
#undef public_634a984
