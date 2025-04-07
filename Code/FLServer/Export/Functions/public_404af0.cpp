#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404af0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_404b24 _public_404b24
#define public_404b30 _public_404b30

PROC_DECLARE(0x404af0, internal_404af0, public_404af0);
extern "C" NAKED register_t __cdecl internal_404af0()
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
        je public_404b30
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_404b24
        cmp cl, 0xFF
        je public_404b24
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_404b30
        public_404b24 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_404b30 : nop
        push esi
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0
        call public_418978
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
        UNREACHABLE_TRAP(0x404af0)
    }
}

#undef public_404b24
#undef public_404b30
