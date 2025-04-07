#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b3b1 _public_620b3b1
#define public_620b3d8 _public_620b3d8

PROC_DECLARE(0x620b3a0, internal_620b3a0, public_620b3a0);
extern "C" NAKED register_t __cdecl internal_620b3a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        cmp esi, ebx
        mov edi, ecx
        je public_620b3d8
        public_620b3b1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_62460e0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_620b3b1
        public_620b3d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x620b3a0)
    }
}

#undef public_620b3b1
#undef public_620b3d8
