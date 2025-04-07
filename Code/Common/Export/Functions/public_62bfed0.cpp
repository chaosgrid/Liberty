#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);

#define public_62bff1c _public_62bff1c
#define public_62bff21 _public_62bff21

PROC_DECLARE(0x62bfed0, internal_62bfed0, public_62bfed0);
extern "C" NAKED register_t __cdecl internal_62bfed0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bff21
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62bff21
        mov eax, dword ptr ss : [esp+8]
        xor edx, edx
        mov dx, word ptr ds : [eax]
        add ecx, 0xE4
        push edx
        call public_629b6c0
        test eax, eax
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        je public_62bff1c
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test al, al
        jne public_62bff1c
        xor eax, eax
        ret 8
        public_62bff1c : nop
        mov eax, 0xFFFFFFFE
        public_62bff21 : nop
        ret 8
        UNREACHABLE_TRAP(0x62bfed0)
    }
}

#undef public_62bff1c
#undef public_62bff21
