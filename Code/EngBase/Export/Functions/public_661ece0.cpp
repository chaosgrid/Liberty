#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ece0);
CLANG_FORWARD_PROC_SYMBOL(public_661ed60);

#define public_661ed0d _public_661ed0d

PROC_DECLARE(0x661ece0, internal_661ece0, public_661ece0);
extern "C" NAKED register_t __cdecl internal_661ece0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        test bl, bl
        mov esi, ecx
        je public_661ed0d
        mov eax, dword ptr ds : [esi+4]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x28]
        push ebx
        mov ecx, esi
        call public_661ed60
        pop esi
        pop ebx
        ret 0xC
        public_661ed0d : nop
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0xDC]
        mov dword ptr ds : [esi+0xD8], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        push ebx
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_661ed60
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x661ece0)
    }
}

#undef public_661ed0d
