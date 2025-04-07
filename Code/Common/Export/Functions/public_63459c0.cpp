#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63459c0);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);

#define public_6345a7e _public_6345a7e
#define public_6345b14 _public_6345b14

PROC_DECLARE(0x63459c0, internal_63459c0, public_63459c0);
extern "C" NAKED register_t __cdecl internal_63459c0()
{
    __asm
    {
        sub esp, 0x40
        fld dword ptr ss : [esp+0x44]
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x98]
        fsub dword ptr ds : [esi+0x68]
        push edi
        mov edi, dword ptr ss : [esp+0x58]
        push ecx
        fadd dword ptr ss : [esp+0x58]
        lea eax, ds:[esi+0xE4]
        lea ecx, ds:[esi+0xD4]
        fsub dword ptr ds : [esi+0x6C]
        fmul dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        mov ecx, edi
        call public_6350df0
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [esi+0x68]
        fadd dword ptr ss : [esp+0x54]
        fsub dword ptr ds : [esi+0x6C]
        fld st(0)
        fmul dword ptr ds : [esi+0xC8]
        fadd dword ptr ds : [esi+0xB8]
        fld st(1)
        fmul dword ptr ds : [esi+0xCC]
        fadd dword ptr ds : [esi+0xBC]
        fstp dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x58]
        fxch 
        fmul dword ptr ds : [esi+0xC4]
        fadd dword ptr ds : [esi+0xB4]
        mov esi, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [esi+8], edx
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+0x78]
        test ah, 0xC
        jne public_6345a7e
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call public_6350bc0
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+4]
        push esi
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+8]
        lea ecx, ds:[ebx+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x14]
        call public_63484e0
        public_6345a7e : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        je public_6345b14
        fld dword ptr ds : [edi+0xC]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [edi+0xC]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edi]
        faddp 
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [eax]
        fsubp 
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edi+4]
        fsubp 
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [edi+0xC]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [edi+8]
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], eax
        fsubp 
        fstp dword ptr ds : [edi]
        fstp dword ptr ds : [edi+4]
        public_6345b14 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret 0x10
        UNREACHABLE_TRAP(0x63459c0)
    }
}

#undef public_6345a7e
#undef public_6345b14
