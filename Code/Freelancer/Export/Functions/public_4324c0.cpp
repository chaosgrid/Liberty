#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4324c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4324f4 _public_4324f4
#define public_4324fd _public_4324fd

PROC_DECLARE(0x4324c0, internal_4324c0, public_4324c0);
extern "C" NAKED register_t __cdecl internal_4324c0()
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
        je public_4324fd
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4324f4
        cmp cl, 0xFF
        je public_4324f4
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4324fd
        public_4324f4 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4324fd : nop
        push esi
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x4324c0)
    }
}

#undef public_4324f4
#undef public_4324fd
