#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bea50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bea62 _public_62bea62
#define public_62bea81 _public_62bea81

PROC_DECLARE(0x62bea50, internal_62bea50, public_62bea50);
extern "C" NAKED register_t __cdecl internal_62bea50()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_62bea81
        public_62bea62 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62bea50
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62bea62
        public_62bea81 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bea50)
    }
}

#undef public_62bea62
#undef public_62bea81
