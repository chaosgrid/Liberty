#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3450);
CLANG_FORWARD_PROC_SYMBOL(public_65c3510);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c3470 _public_65c3470
#define public_65c3488 _public_65c3488
#define public_65c34b6 _public_65c34b6

PROC_DECLARE(0x65c3450, internal_65c3450, public_65c3450);
extern "C" NAKED register_t __cdecl internal_65c3450()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_65c34b6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_65c3470 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        lea ebp, ds:[esi+8]
        call public_65c6a66
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_65c3488
        mov ebx, eax
        public_65c3488 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_65c3510
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_65c3470
        pop edi
        pop ebp
        pop ebx
        public_65c34b6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x65c3450)
    }
}

#undef public_65c3470
#undef public_65c3488
#undef public_65c34b6
