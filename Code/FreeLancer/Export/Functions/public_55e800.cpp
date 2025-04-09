#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e800);

#define public_55e815 _public_55e815
#define public_55e824 _public_55e824
#define public_55e82d _public_55e82d

PROC_DECLARE(0x55e800, internal_55e800, public_55e800);
extern "C" NAKED register_t __cdecl internal_55e800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_55e82d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_55e815 : nop
        test eax, eax
        je public_55e824
        mov ecx, 7
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_55e824 : nop
        add eax, 0x1C
        dec edx
        jne public_55e815
        pop edi
        pop esi
        pop ebx
        public_55e82d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x55e800)
    }
}

#undef public_55e815
#undef public_55e824
#undef public_55e82d
