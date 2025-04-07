#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_63721e0);

#define public_637222f _public_637222f

PROC_DECLARE(0x63721e0, internal_63721e0, public_63721e0);
extern "C" NAKED register_t __cdecl internal_63721e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x38]
        push esi
        push ecx
        call public_636e400
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x38]
        push esi
        push eax
        call public_636e400
        push esi
        call public_636e740
        add esp, 0x14
        test esi, esi
        je public_637222f
        mov eax, dword ptr ds : [public_658b9ac]
        mov ecx, dword ptr ds : [public_658b980]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        mov edx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [public_658b978]
        mov ecx, dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], esi
        public_637222f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63721e0)
    }
}

#undef public_637222f
