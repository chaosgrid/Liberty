#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53c2e1 _public_53c2e1
#define public_53c2e8 _public_53c2e8
#define public_53c2fd _public_53c2fd

PROC_DECLARE(0x53c2c0, internal_53c2c0, public_53c2c0);
extern "C" NAKED register_t __cdecl internal_53c2c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c2fd
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_53c2e1
        xor edx, edx
        jmp public_53c2e8
        public_53c2e1 : nop
        mov edx, dword ptr ds : [esi+0x18]
        sub edx, ecx
        sar edx, 1
        public_53c2e8 : nop
        push edi
        push 0
        lea edi, ds:[esi+4]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x34]
        pop edi
        public_53c2fd : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c2c0)
    }
}

#undef public_53c2e1
#undef public_53c2e8
#undef public_53c2fd
