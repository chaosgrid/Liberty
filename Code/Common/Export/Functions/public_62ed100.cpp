#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed100);

#define public_62ed113 _public_62ed113
#define public_62ed122 _public_62ed122
#define public_62ed133 _public_62ed133

PROC_DECLARE(0x62ed100, internal_62ed100, public_62ed100);
extern "C" NAKED register_t __cdecl internal_62ed100()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_62ed133
        push esi
        push edi
        public_62ed113 : nop
        test eax, eax
        je public_62ed122
        mov ecx, 0x22
        mov esi, edx
        mov edi, eax
        rep movsd
        public_62ed122 : nop
        add edx, 0x88
        add eax, 0x88
        cmp edx, ebx
        jne public_62ed113
        pop edi
        pop esi
        public_62ed133 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62ed100)
    }
}

#undef public_62ed113
#undef public_62ed122
#undef public_62ed133
