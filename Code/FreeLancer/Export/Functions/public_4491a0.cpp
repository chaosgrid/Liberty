#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4491a0);

#define public_4491b3 _public_4491b3
#define public_4491d1 _public_4491d1
#define public_4491de _public_4491de

PROC_DECLARE(0x4491a0, internal_4491a0, public_4491a0);
extern "C" NAKED register_t __cdecl internal_4491a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_4491de
        push ebx
        push esi
        push edi
        public_4491b3 : nop
        test eax, eax
        je public_4491d1
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], esi
        public_4491d1 : nop
        add ecx, 0x10
        add eax, 0x10
        cmp ecx, edx
        jne public_4491b3
        pop edi
        pop esi
        pop ebx
        public_4491de : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4491a0)
    }
}

#undef public_4491b3
#undef public_4491d1
#undef public_4491de
