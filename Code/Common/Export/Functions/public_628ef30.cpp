#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ef30);

#define public_628ef43 _public_628ef43
#define public_628ef61 _public_628ef61
#define public_628ef6e _public_628ef6e

PROC_DECLARE(0x628ef30, internal_628ef30, public_628ef30);
extern "C" NAKED register_t __cdecl internal_628ef30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_628ef6e
        push ebx
        push esi
        push edi
        public_628ef43 : nop
        test eax, eax
        je public_628ef61
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
        public_628ef61 : nop
        add ecx, 0x10
        add eax, 0x10
        cmp ecx, edx
        jne public_628ef43
        pop edi
        pop esi
        pop ebx
        public_628ef6e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x628ef30)
    }
}

#undef public_628ef43
#undef public_628ef61
#undef public_628ef6e
