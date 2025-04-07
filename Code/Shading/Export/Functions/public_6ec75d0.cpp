#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec75d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec75fe _public_6ec75fe

PROC_DECLARE(0x6ec75d0, internal_6ec75d0, public_6ec75d0);
extern "C" NAKED register_t __cdecl internal_6ec75d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6ec75fe
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_6ec75fe : nop
        push esi
        call public_6ed0c50
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec75d0)
    }
}

#undef public_6ec75fe
