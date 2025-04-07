#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284910);
CLANG_FORWARD_PROC_SYMBOL(public_628a050);
CLANG_FORWARD_PROC_SYMBOL(public_628a0c0);

#define public_628a0a5 _public_628a0a5

PROC_DECLARE(0x628a050, internal_628a050, public_628a050);
extern "C" NAKED register_t __cdecl internal_628a050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        push eax
        call dword ptr ds : [ecx+0xD4]
        mov edx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0xC0]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edi, eax
        cmp dword ptr ds : [edi+4], esi
        jne public_628a0a5
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push edi
        call public_6284910
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_628a0a5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        push edi
        call public_628a0c0
        add esp, 0xC
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x628a050)
    }
}

#undef public_628a0a5
