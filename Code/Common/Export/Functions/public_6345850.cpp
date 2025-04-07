#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345850);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);

#define public_63458f8 _public_63458f8
#define public_63459b1 _public_63459b1

PROC_DECLARE(0x6345850, internal_6345850, public_6345850);
extern "C" NAKED register_t __cdecl internal_6345850()
{
    __asm
    {
        sub esp, 0x10
        fld dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x98]
        fsub dword ptr ds : [esi+0x68]
        push edi
        push ecx
        lea eax, ds:[esi+0xE4]
        fadd dword ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0xD4]
        fsub dword ptr ds : [esi+0x6C]
        fmul dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6350df0
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+0x68]
        mov ebp, dword ptr ss : [esp+0x2C]
        lea edi, ss:[ebp+0x30]
        push ebp
        fadd dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x14]
        fsub dword ptr ds : [esi+0x6C]
        fld st(0)
        fmul dword ptr ds : [esi+0xC8]
        fadd dword ptr ds : [esi+0xB8]
        fld st(1)
        fmul dword ptr ds : [esi+0xCC]
        fadd dword ptr ds : [esi+0xBC]
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ds : [esi+0xC4]
        fadd dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [edi+8], edx
        fstp dword ptr ds : [edi]
        fstp dword ptr ds : [edi+4]
        call public_6350bc0
        mov eax, dword ptr ds : [ebx+0x78]
        test ah, 0xC
        jne public_63458f8
        push edi
        lea eax, ds:[ebx+0x30]
        push eax
        mov ecx, ebp
        call public_63484e0
        public_63458f8 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        je public_63459b1
        fld dword ptr ss : [esp+0x18]
        push ebp
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax]
        fsubp 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        call public_6350bc0
        public_63459b1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6345850)
    }
}

#undef public_63458f8
#undef public_63459b1
