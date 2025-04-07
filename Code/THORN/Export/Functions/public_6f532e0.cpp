#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52940);
CLANG_FORWARD_PROC_SYMBOL(public_6f52ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f532e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53330);

#define public_6f53309 _public_6f53309
#define public_6f53323 _public_6f53323

PROC_DECLARE(0x6f532e0, internal_6f532e0, public_6f532e0);
extern "C" NAKED register_t __cdecl internal_6f532e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        push ebx
        call public_6f52940
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, edi
        push eax
        push ebx
        call public_6f52ee0
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0xC
        cmp eax, edi
        jle public_6f53323
        public_6f53309 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        push esi
        call public_6f53330
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 8
        dec ecx
        mov eax, ecx
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], ecx
        jg public_6f53309
        public_6f53323 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f532e0)
    }
}

#undef public_6f53309
#undef public_6f53323
