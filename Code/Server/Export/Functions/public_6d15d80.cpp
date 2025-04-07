#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);

#define public_6d15d95 _public_6d15d95
#define public_6d15dbf _public_6d15dbf

PROC_DECLARE(0x6d15d80, internal_6d15d80, public_6d15d80);
extern "C" NAKED register_t __cdecl internal_6d15d80()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, 0x1000
        mov esi, ecx
        jb public_6d15d95
        call public_6d15f90
        public_6d15d95 : nop
        mov al, byte ptr ss : [esp+0x10]
        mov ecx, edi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        test al, al
        mov eax, edi
        je public_6d15dbf
        shr eax, 5
        mov ecx, dword ptr ds : [esi+eax*4]
        lea eax, ds:[esi+eax*4]
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_6d15dbf : nop
        shr eax, 5
        mov ecx, dword ptr ds : [esi+eax*4]
        lea eax, ds:[esi+eax*4]
        not edx
        and ecx, edx
        mov dword ptr ds : [eax], ecx
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d15d80)
    }
}

#undef public_6d15d95
#undef public_6d15dbf
