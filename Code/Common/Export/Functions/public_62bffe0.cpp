#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);

#define public_62c0036 _public_62c0036
#define public_62c003a _public_62c003a

PROC_DECLARE(0x62bffe0, internal_62bffe0, public_62bffe0);
extern "C" NAKED register_t __cdecl internal_62bffe0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFD
        je public_62c0036
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62c0036
        mov eax, dword ptr ss : [esp+0xC]
        xor edx, edx
        mov dx, word ptr ds : [eax]
        add ecx, 0xE4
        push edx
        call public_629b6c0
        mov esi, eax
        test esi, esi
        je public_62c003a
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_62c003a
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push edi
        push eax
        mov ecx, esi
        xor edi, edi
        call dword ptr ds : [edx+0x2C]
        mov eax, edi
        pop edi
        public_62c0036 : nop
        pop esi
        ret 8
        public_62c003a : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62bffe0)
    }
}

#undef public_62c0036
#undef public_62c003a
