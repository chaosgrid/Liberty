#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d146e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d17b40);

#define public_6d17b89 _public_6d17b89
#define public_6d17ba1 _public_6d17ba1

PROC_DECLARE(0x6d17b40, internal_6d17b40, public_6d17b40);
extern "C" NAKED register_t __cdecl internal_6d17b40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        jbe public_6d17ba1
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d17ba1
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d17ba1
        mov ebx, dword ptr ss : [esp+0x18]
        test bl, bl
        mov edi, dword ptr ss : [esp+0x10]
        je public_6d17b89
        mov eax, esi
        imul eax, 0x418
        cmp edi, dword ptr ds : [eax+ecx-0x20]
        jne public_6d17ba1
        public_6d17b89 : nop
        call public_6d15650
        test eax, eax
        je public_6d17ba1
        push ebx
        push edi
        push esi
        call public_6d15650
        mov ecx, eax
        call public_6d146e0
        public_6d17ba1 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d17b40)
    }
}

#undef public_6d17b89
#undef public_6d17ba1
