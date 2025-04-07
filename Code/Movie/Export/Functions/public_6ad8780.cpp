#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8780);

#define public_6ad87c6 _public_6ad87c6
#define public_6ad87ce _public_6ad87ce

PROC_DECLARE(0x6ad8780, internal_6ad8780, public_6ad8780);
extern "C" NAKED register_t __cdecl internal_6ad8780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        push esi
        push edi
        mov esi, dword ptr ds : [ecx*4+public_6ae2480]
        lea ebx, ds : [ecx*4+public_6ae2480]
        lea edi, ds:[eax+eax*8]
        shl edi, 2
        add esi, edi
        cmp dword ptr ds : [esi+8], 0
        jne public_6ad87ce
        push 0x11
        call public_6ad237a
        cmp dword ptr ds : [esi+8], 0
        pop ecx
        jne public_6ad87c6
        lea eax, ds:[esi+0xC]
        push eax
        call dword ptr ds : [public_6ada020]
        inc dword ptr ds : [esi+8]
        public_6ad87c6 : nop
        push 0x11
        call public_6ad23db
        pop ecx
        public_6ad87ce : nop
        mov eax, dword ptr ds : [ebx]
        lea eax, ds:[eax+edi+0xC]
        push eax
        call dword ptr ds : [public_6ada114]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad8780)
    }
}

#undef public_6ad87c6
#undef public_6ad87ce
