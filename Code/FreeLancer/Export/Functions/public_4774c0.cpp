#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4774c0);

#define public_4774d5 _public_4774d5
#define public_4774fe _public_4774fe

PROC_DECLARE(0x4774c0, internal_4774c0, public_4774c0);
extern "C" NAKED register_t __cdecl internal_4774c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, ecx
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        cmp edx, ebp
        je public_4774fe
        push esi
        push edi
        public_4774d5 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x80
        mov ecx, 0x20
        add ebx, 0x80
        cmp edx, ebp
        rep movsd
        jne public_4774d5
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_4774fe : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4774c0)
    }
}

#undef public_4774d5
#undef public_4774fe
