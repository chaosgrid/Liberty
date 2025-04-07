#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279c50);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6279cc7 _public_6279cc7

PROC_DECLARE(0x6279c50, internal_6279c50, public_6279c50);
extern "C" NAKED register_t __cdecl internal_6279c50()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        push esi
        call public_6334430
        lea edi, ds:[esi+0x40]
        push edi
        call public_6334430
        xor ecx, ecx
        mov dword ptr ds : [edi], ecx
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], ecx
        mov edx, eax
        mov edi, ecx
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
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov al, byte ptr ss : [esp+0x20]
        add esp, 8
        test al, 1
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [esi+0x3C], cl
        je public_6279cc7
        push esi
        call public_6391d5a
        add esp, 4
        public_6279cc7 : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6279c50)
    }
}

#undef public_6279cc7
