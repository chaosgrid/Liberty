#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);

#define public_6ad23fc _public_6ad23fc
#define public_6ad2410 _public_6ad2410
#define public_6ad2443 _public_6ad2443
#define public_6ad244d _public_6ad244d
#define public_6ad2457 _public_6ad2457
#define public_6ad2461 _public_6ad2461

PROC_DECLARE(0x6ad23f0, internal_6ad23f0, public_6ad23f0);
extern "C" NAKED register_t __cdecl internal_6ad23f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 3
        je public_6ad2410
        public_6ad23fc : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        je public_6ad2443
        test ecx, 3
        jne public_6ad23fc
        add eax, 0
        public_6ad2410 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x7EFEFEFF
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        add ecx, 4
        test eax, 0x81010100
        je public_6ad2410
        mov eax, dword ptr ds : [ecx-4]
        test al, al
        je public_6ad2461
        test ah, ah
        je public_6ad2457
        test eax, 0xFF0000
        je public_6ad244d
        test eax, 0xFF000000
        je public_6ad2443
        jmp public_6ad2410
        public_6ad2443 : nop
        lea eax, ds:[ecx-1]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_6ad244d : nop
        lea eax, ds:[ecx-2]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_6ad2457 : nop
        lea eax, ds:[ecx-3]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_6ad2461 : nop
        lea eax, ds:[ecx-4]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6ad23f0)
    }
}

#undef public_6ad23fc
#undef public_6ad2410
#undef public_6ad2443
#undef public_6ad244d
#undef public_6ad2457
#undef public_6ad2461
