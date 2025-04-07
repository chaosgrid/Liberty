#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22b70);

#define public_6f22b7f _public_6f22b7f
#define public_6f22bb0 _public_6f22bb0

PROC_DECLARE(0x6f22b70, internal_6f22b70, public_6f22b70);
extern "C" NAKED register_t __cdecl internal_6f22b70()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x5D]
        test al, al
        jne public_6f22b7f
        mov eax, 0xFFFFFFF8
        ret 8
        public_6f22b7f : nop
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+0x10]
        jae public_6f22bb0
        mov edx, dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+8]
        inc eax
        shl eax, 4
        add eax, edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        ret 8
        public_6f22bb0 : nop
        mov eax, 0xFFFFFFFE
        ret 8
        UNREACHABLE_TRAP(0x6f22b70)
    }
}

#undef public_6f22b7f
#undef public_6f22bb0
