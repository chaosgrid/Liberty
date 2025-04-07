#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d471ea);

#define public_6d47219 _public_6d47219

PROC_DECLARE(0x6d471ea, internal_6d471ea, public_6d471ea);
extern "C" NAKED register_t __cdecl internal_6d471ea()
{
    __asm
    {
        push esi
        push edi
        push 0x580
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        push 1
        push esi
        call dword ptr ds : [eax]
        add esp, 0xC
        mov edx, eax
        add edx, 0x100
        push 0x40
        pop ecx
        xor eax, eax
        lea edi, ds:[edx-0x100]
        mov dword ptr ds : [esi+0x11C], edx
        rep stosd
        public_6d47219 : nop
        mov byte ptr ds : [eax+edx], al
        inc eax
        cmp eax, 0xFF
        jle public_6d47219
        push 0x60
        pop ecx
        add edx, 0x80
        push 0x60
        or eax, 0xFFFFFFFF
        lea edi, ds:[edx+0x80]
        rep stosd
        pop ecx
        push 0x20
        xor eax, eax
        lea edi, ds:[edx+0x200]
        rep stosd
        mov esi, dword ptr ds : [esi+0x11C]
        pop ecx
        lea edi, ds:[edx+0x380]
        rep movsd
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d471ea)
    }
}

#undef public_6d47219
