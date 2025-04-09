#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4491f0);

#define public_449205 _public_449205
#define public_449223 _public_449223
#define public_44922c _public_44922c

PROC_DECLARE(0x4491f0, internal_4491f0, public_4491f0);
extern "C" NAKED register_t __cdecl internal_4491f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_44922c
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_449205 : nop
        test eax, eax
        je public_449223
        mov esi, edx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], esi
        public_449223 : nop
        add eax, 0x10
        dec ecx
        jne public_449205
        pop edi
        pop esi
        pop ebx
        public_44922c : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4491f0)
    }
}

#undef public_449205
#undef public_449223
#undef public_44922c
