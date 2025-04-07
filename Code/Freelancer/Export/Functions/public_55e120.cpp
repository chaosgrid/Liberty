#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e120);

#define public_55e144 _public_55e144
#define public_55e15b _public_55e15b

PROC_DECLARE(0x55e120, internal_55e120, public_55e120);
extern "C" NAKED register_t __cdecl internal_55e120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, ecx
        mov dword ptr ds : [ebx+0x1C], eax
        mov byte ptr ds : [ebx+0x18], 1
        mov dword ptr ds : [ebx+0x14], 0
        mov edx, dword ptr ds : [ebx+8]
        push ebp
        mov ebp, dword ptr ds : [ebx+0xC]
        mov eax, ebp
        cmp eax, ebp
        je public_55e15b
        push esi
        push edi
        public_55e144 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x1C
        mov ecx, 7
        add edx, 0x1C
        cmp eax, ebp
        rep movsd
        jne public_55e144
        pop edi
        pop esi
        public_55e15b : nop
        pop ebp
        mov dword ptr ds : [ebx+0xC], edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x55e120)
    }
}

#undef public_55e144
#undef public_55e15b
