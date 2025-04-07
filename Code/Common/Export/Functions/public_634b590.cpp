#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634af70);
CLANG_FORWARD_PROC_SYMBOL(public_634b590);
CLANG_FORWARD_PROC_SYMBOL(public_634cf00);

#define public_634b5a1 _public_634b5a1
#define public_634b5d8 _public_634b5d8

PROC_DECLARE(0x634b590, internal_634b590, public_634b590);
extern "C" NAKED register_t __cdecl internal_634b590()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov bx, word ptr ds : [esi+0x52]
        dec ebx
        js public_634b5d8
        push edi
        public_634b5a1 : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov edi, dword ptr ds : [eax+ebx*4]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0xC], eax
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        call public_634af70
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], ecx
        call public_634cf00
        dec ebx
        jns public_634b5a1
        pop edi
        public_634b5d8 : nop
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x634b590)
    }
}

#undef public_634b5a1
#undef public_634b5d8
