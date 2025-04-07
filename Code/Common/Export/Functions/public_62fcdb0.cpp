#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcdb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fcdc2 _public_62fcdc2
#define public_62fcde1 _public_62fcde1

PROC_DECLARE(0x62fcdb0, internal_62fcdb0, public_62fcdb0);
extern "C" NAKED register_t __cdecl internal_62fcdb0()
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
        je public_62fcde1
        public_62fcdc2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fcdb0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fcdc2
        public_62fcde1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fcdb0)
    }
}

#undef public_62fcdc2
#undef public_62fcde1
