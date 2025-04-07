#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b200);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_627b236 _public_627b236

PROC_DECLARE(0x627b200, internal_627b200, public_627b200);
extern "C" NAKED register_t __cdecl internal_627b200()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        push eax
        lea ecx, ds:[esi+8]
        push ecx
        call public_6334400
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        lea eax, ds:[edi+0x10]
        lea edx, ds:[esi+0x10]
        add esp, 8
        sub edx, eax
        public_627b236 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_627b236
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627b200)
    }
}

#undef public_627b236
