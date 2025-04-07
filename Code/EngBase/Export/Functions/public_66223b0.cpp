#include "EngBase-PCH.h"


#define public_66223c0 _public_66223c0
#define public_66223d4 _public_66223d4
#define public_66223f2 _public_66223f2

PROC_DECLARE(0x66223b0, internal_66223b0, public_66223b0);
extern "C" NAKED register_t __cdecl internal_66223b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, 0xFFFFFFFF
        jne public_66223c0
        or eax, edi
        pop edi
        ret 0x10
        public_66223c0 : nop
        mov eax, dword ptr ds : [edi+0x20]
        push ebx
        push esi
        mov esi, dword ptr ds : [edi+0x1C]
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_66223f2
        mov ebx, dword ptr ss : [esp+0x1C]
        public_66223d4 : nop
        mov eax, dword ptr ds : [esi+0x44]
        push ebx
        push 0
        push eax
        push edi
        call dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        je public_66223f2
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x48
        cmp esi, eax
        jne public_66223d4
        public_66223f2 : nop
        pop esi
        pop ebx
        xor eax, eax
        pop edi
        ret 0x10
        UNREACHABLE_TRAP(0x66223b0)
    }
}

#undef public_66223c0
#undef public_66223d4
#undef public_66223f2
