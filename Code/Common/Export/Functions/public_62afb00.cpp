#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af420);
CLANG_FORWARD_PROC_SYMBOL(public_62afb00);

#define public_62afb68 _public_62afb68

PROC_DECLARE(0x62afb00, internal_62afb00, public_62afb00);
extern "C" NAKED register_t __cdecl internal_62afb00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_62af420
        fld dword ptr ds : [esi+0xE8]
        fsub dword ptr ss : [esp+8]
        fstp dword ptr ds : [esi+0xE8]
        fld dword ptr ds : [esi+0xEC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62afb68
        fld dword ptr ds : [esi+0xEC]
        fsub dword ptr ss : [esp+8]
        fst dword ptr ds : [esi+0xEC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62afb68
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0xEC], 0
        call dword ptr ds : [edx+0xA8]
        public_62afb68 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62afb00)
    }
}

#undef public_62afb68
