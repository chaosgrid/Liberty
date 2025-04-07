#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6243280);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62432c1 _public_62432c1
#define public_62432c6 _public_62432c6

PROC_DECLARE(0x6243280, internal_6243280, public_6243280);
extern "C" NAKED register_t __cdecl internal_6243280()
{
    __asm
    {
        push ecx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_62432c6
        push 0x14
        call public_624612c
        add esp, 4
        test eax, eax
        je public_62432c1
        mov cl, byte ptr ss : [esp+7]
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x10], 0
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop ecx
        ret 
        public_62432c1 : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        public_62432c6 : nop
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6243280)
    }
}

#undef public_62432c1
#undef public_62432c6
