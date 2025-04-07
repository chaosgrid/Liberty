#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62ac240);
CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);

#define public_62d4baf _public_62d4baf
#define public_62d4bd0 _public_62d4bd0
#define public_62d4bd5 _public_62d4bd5
#define public_62d4be9 _public_62d4be9

PROC_DECLARE(0x62d4ba0, internal_62d4ba0, public_62d4ba0);
extern "C" NAKED register_t __cdecl internal_62d4ba0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jne public_62d4baf
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62d4baf : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        mov esi, eax
        test esi, esi
        je public_62d4bd0
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62d4bd5
        public_62d4bd0 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62d4bd5 : nop
        mov ecx, esi
        call public_62ac230
        test eax, eax
        jne public_62d4be9
        push eax
        push edi
        mov ecx, esi
        call public_62ac240
        public_62d4be9 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62d4ba0)
    }
}

#undef public_62d4baf
#undef public_62d4bd0
#undef public_62d4bd5
#undef public_62d4be9
