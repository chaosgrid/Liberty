#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed460);

#define public_62ed473 _public_62ed473
#define public_62ed48f _public_62ed48f

PROC_DECLARE(0x62ed460, internal_62ed460, public_62ed460);
extern "C" NAKED register_t __cdecl internal_62ed460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_62ed48f
        push esi
        push edi
        public_62ed473 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x88
        mov ecx, 0x22
        add eax, 0x88
        cmp edx, ebx
        rep movsd
        jne public_62ed473
        pop edi
        pop esi
        public_62ed48f : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62ed460)
    }
}

#undef public_62ed473
#undef public_62ed48f
