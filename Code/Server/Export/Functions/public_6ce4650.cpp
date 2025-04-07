#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce4684 _public_6ce4684
#define public_6ce4690 _public_6ce4690

PROC_DECLARE(0x6ce4650, internal_6ce4650, public_6ce4650);
extern "C" NAKED register_t __cdecl internal_6ce4650()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6ce4690
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce4684
        cmp cl, 0xFF
        je public_6ce4684
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6ce4690
        public_6ce4684 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce4690 : nop
        push esi
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ce4650)
    }
}

#undef public_6ce4684
#undef public_6ce4690
