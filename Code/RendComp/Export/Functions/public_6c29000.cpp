#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c29000);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2903b _public_6c2903b

PROC_DECLARE(0x6c29000, internal_6c29000, public_6c29000);
extern "C" NAKED register_t __cdecl internal_6c29000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        jne public_6c2903b
        push edi
        push 0x10
        call public_6c34eac
        mov dword ptr ds : [esi+0x34], eax
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        push 0x50
        mov dword ptr ds : [eax+0xC], ecx
        call public_6c34eac
        mov edi, eax
        add esp, 8
        mov dword ptr ds : [esi+0x38], edi
        mov ecx, 0x14
        xor eax, eax
        rep stosd
        pop edi
        public_6c2903b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c29000)
    }
}

#undef public_6c2903b
