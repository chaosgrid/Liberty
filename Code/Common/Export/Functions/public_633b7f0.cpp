#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6336750);

#define public_633b80e _public_633b80e
#define public_633b819 _public_633b819

PROC_DECLARE(0x633b7f0, internal_633b7f0, public_633b7f0);
extern "C" NAKED register_t __cdecl internal_633b7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a9b8]
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_633b80e
        mov eax, dword ptr ds : [esi+0x70]
        push eax
        call public_6336750
        add esp, 4
        mov dword ptr ds : [public_658a9b8], esi
        public_633b80e : nop
        mov eax, dword ptr ds : [public_658a998]
        test eax, eax
        pop esi
        jne public_633b819
        ret 
        public_633b819 : nop
        mov ecx, dword ptr ds : [public_658a99c]
        sub ecx, eax
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x633b7f0)
    }
}

#undef public_633b80e
#undef public_633b819
