#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2170);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d21b4 _public_65d21b4
#define public_65d21cb _public_65d21cb

PROC_DECLARE(0x65d2170, internal_65d2170, public_65d2170);
extern "C" NAKED register_t __cdecl internal_65d2170()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_65d21cb
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d21cb
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_65d21b4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_65d21b4 : nop
        push esi
        call public_65d6cb8
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_65d21cb : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d2170)
    }
}

#undef public_65d21b4
#undef public_65d21cb
