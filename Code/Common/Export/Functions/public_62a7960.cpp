#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62a7960);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a7972 _public_62a7972
#define public_62a7999 _public_62a7999

PROC_DECLARE(0x62a7960, internal_62a7960, public_62a7960);
extern "C" NAKED register_t __cdecl internal_62a7960()
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
        je public_62a7999
        public_62a7972 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62a7960
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_62a5d70
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62a7972
        public_62a7999 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a7960)
    }
}

#undef public_62a7972
#undef public_62a7999
