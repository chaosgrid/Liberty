#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3d0b1 _public_6f3d0b1
#define public_6f3d0d8 _public_6f3d0d8

PROC_DECLARE(0x6f3d0a0, internal_6f3d0a0, public_6f3d0a0);
extern "C" NAKED register_t __cdecl internal_6f3d0a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, ebx
        push edi
        mov edi, ecx
        je public_6f3d0d8
        public_6f3d0b1 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6f57e26
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6f3d0b1
        public_6f3d0d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3d0a0)
    }
}

#undef public_6f3d0b1
#undef public_6f3d0d8
