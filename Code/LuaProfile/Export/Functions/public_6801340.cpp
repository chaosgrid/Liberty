#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_68035f0);

#define public_6801357 _public_6801357
#define public_6801363 _public_6801363
#define public_6801369 _public_6801369
#define public_680138d _public_680138d

PROC_DECLARE(0x6801340, internal_6801340, public_6801340);
extern "C" NAKED register_t __cdecl internal_6801340()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        push esi
        je public_6801363
        mov ecx, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [ecx+0xC]
        test esi, esi
        lea eax, ds:[ecx+0xC]
        je public_6801363
        public_6801357 : nop
        cmp esi, edx
        je public_6801369
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6801357
        public_6801363 : nop
        xor eax, eax
        pop esi
        ret 8
        public_6801369 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx+8]
        push edi
        push eax
        call public_68026d0
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_680138d
        push eax
        call public_68035f0
        add esp, 4
        public_680138d : nop
        push esi
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        call dword ptr ds : [public_680c018]
        push edi
        call public_68026d0
        add esp, 8
        pop edi
        mov eax, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6801340)
    }
}

#undef public_6801357
#undef public_6801363
#undef public_6801369
#undef public_680138d
