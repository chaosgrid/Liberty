#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f000);

#define public_628f015 _public_628f015
#define public_628f038 _public_628f038

PROC_DECLARE(0x628f000, internal_628f000, public_628f000);
extern "C" NAKED register_t __cdecl internal_628f000()
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
        je public_628f038
        push esi
        push edi
        public_628f015 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x34
        mov ecx, 0xD
        add ebx, 0x34
        cmp edx, ebp
        rep movsd
        jne public_628f015
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_628f038 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x628f000)
    }
}

#undef public_628f015
#undef public_628f038
