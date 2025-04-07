#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6616d90);

#define public_661a94f _public_661a94f
#define public_661a976 _public_661a976
#define public_661a979 _public_661a979

PROC_DECLARE(0x661a940, internal_661a940, public_661a940);
extern "C" NAKED register_t __cdecl internal_661a940()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_661a94f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_661a94f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_661a979
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_661a976
        mov ecx, esi
        call public_6616d90
        push esi
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_661a976 : nop
        xor eax, eax
        pop esi
        public_661a979 : nop
        ret 4
        UNREACHABLE_TRAP(0x661a940)
    }
}

#undef public_661a94f
#undef public_661a976
#undef public_661a979
