#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a40);
CLANG_FORWARD_PROC_SYMBOL(public_6806fe0);
CLANG_FORWARD_PROC_SYMBOL(public_68073e0);
CLANG_FORWARD_PROC_SYMBOL(public_6807430);

#define public_6807409 _public_6807409
#define public_6807423 _public_6807423

PROC_DECLARE(0x68073e0, internal_68073e0, public_68073e0);
extern "C" NAKED register_t __cdecl internal_68073e0()
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
        call public_6806a40
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, edi
        push eax
        push ebx
        call public_6806fe0
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0xC
        cmp eax, edi
        jle public_6807423
        public_6807409 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        push esi
        call public_6807430
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 8
        dec ecx
        mov eax, ecx
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], ecx
        jg public_6807409
        public_6807423 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68073e0)
    }
}

#undef public_6807409
#undef public_6807423
