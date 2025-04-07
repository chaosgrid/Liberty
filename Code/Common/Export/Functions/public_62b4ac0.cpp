#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4ac0);

#define public_62b4ae0 _public_62b4ae0
#define public_62b4af4 _public_62b4af4
#define public_62b4af5 _public_62b4af5
#define public_62b4b04 _public_62b4b04

PROC_DECLARE(0x62b4ac0, internal_62b4ac0, public_62b4ac0);
extern "C" NAKED register_t __cdecl internal_62b4ac0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1D8]
        push esi
        mov esi, dword ptr ds : [ecx+0x1D4]
        xor eax, eax
        cmp esi, edx
        je public_62b4b04
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_62b4ae0 : nop
        mov edx, dword ptr ds : [esi]
        test edx, edx
        je public_62b4af5
        add edx, 0xFFFFFFF8
        test edx, edx
        je public_62b4af5
        cmp eax, ebx
        jae public_62b4af4
        mov dword ptr ds : [edi+eax*4], edx
        public_62b4af4 : nop
        inc eax
        public_62b4af5 : nop
        mov edx, dword ptr ds : [ecx+0x1D8]
        add esi, 8
        cmp esi, edx
        jne public_62b4ae0
        pop edi
        pop ebx
        public_62b4b04 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b4ac0)
    }
}

#undef public_62b4ae0
#undef public_62b4af4
#undef public_62b4af5
#undef public_62b4b04
