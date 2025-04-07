#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b23c0);

#define public_62bfc2b _public_62bfc2b
#define public_62bfc43 _public_62bfc43
#define public_62bfc4b _public_62bfc4b

PROC_DECLARE(0x62bfc00, internal_62bfc00, public_62bfc00);
extern "C" NAKED register_t __cdecl internal_62bfc00()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+0x4C]
        cmp edx, 0xA7
        mov eax, 0xFFFFFFFD
        je public_62bfc2b
        cmp edx, 0x503
        jne public_62bfc4b
        call public_62b23c0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 4
        public_62bfc2b : nop
        mov ecx, dword ptr ds : [ecx+0xF0]
        test ecx, ecx
        je public_62bfc43
        mov edx, dword ptr ss : [esp+4]
        lea eax, ds:[ecx-8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        public_62bfc43 : nop
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [edx], eax
        public_62bfc4b : nop
        ret 4
        UNREACHABLE_TRAP(0x62bfc00)
    }
}

#undef public_62bfc2b
#undef public_62bfc43
#undef public_62bfc4b
