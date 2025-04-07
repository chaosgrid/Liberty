#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6279d5d _public_6279d5d

PROC_DECLARE(0x6279ce0, internal_6279ce0, public_6279ce0);
extern "C" NAKED register_t __cdecl internal_6279ce0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        push esi
        call public_6334430
        lea edi, ds:[esi+0x38]
        push edi
        call public_6334430
        lea ebx, ds:[esi+0x3C]
        push ebx
        call public_6334430
        xor ecx, ecx
        mov dword ptr ds : [edi], ecx
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], ecx
        mov byte ptr ds : [esi+0x34], cl
        mov byte ptr ds : [esi+0x35], cl
        mov dword ptr ds : [ebx], ecx
        mov edi, ecx
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov al, byte ptr ss : [esp+0x28]
        add esp, 0xC
        test al, 1
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_6279d5d
        push esi
        call public_6391d5a
        add esp, 4
        public_6279d5d : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6279ce0)
    }
}

#undef public_6279d5d
