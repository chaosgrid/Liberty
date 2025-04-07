#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);

#define public_6cf8e5d _public_6cf8e5d
#define public_6cf8e68 _public_6cf8e68
#define public_6cf8e6a _public_6cf8e6a

PROC_DECLARE(0x6cf8e00, internal_6cf8e00, public_6cf8e00);
extern "C" NAKED register_t __cdecl internal_6cf8e00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 0x3FFFFFFF
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [esi], 0
        je public_6cf8e6a
        lea eax, ss:[esp+0x10]
        push eax
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov edi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf8e68
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6cf8e5d
        call public_6d06cd0
        mov dword ptr ds : [esi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cf8e5d : nop
        pop edi
        mov dword ptr ds : [esi], 0
        xor eax, eax
        pop esi
        ret 
        public_6cf8e68 : nop
        mov eax, edi
        public_6cf8e6a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8e00)
    }
}

#undef public_6cf8e5d
#undef public_6cf8e68
#undef public_6cf8e6a
