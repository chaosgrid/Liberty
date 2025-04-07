#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6247080);

#define public_6247095 _public_6247095
#define public_62470b6 _public_62470b6

PROC_DECLARE(0x6247080, internal_6247080, public_6247080);
extern "C" NAKED register_t __cdecl internal_6247080()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp edx, esi
        je public_62470b6
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+8]
        push edi
        public_6247095 : nop
        mov edi, dword ptr ds : [ecx]
        add eax, 0x10
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax-0x14], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax-0x10], edi
        mov edi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax-0xC], edi
        add edx, 0x10
        cmp edx, esi
        jne public_6247095
        pop edi
        public_62470b6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6247080)
    }
}

#undef public_6247095
#undef public_62470b6
