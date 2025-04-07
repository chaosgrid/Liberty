#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280240);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fc392 _public_62fc392
#define public_62fc3b9 _public_62fc3b9

PROC_DECLARE(0x62fc380, internal_62fc380, public_62fc380);
extern "C" NAKED register_t __cdecl internal_62fc380()
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
        je public_62fc3b9
        public_62fc392 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fc380
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6280240
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fc392
        public_62fc3b9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fc380)
    }
}

#undef public_62fc392
#undef public_62fc3b9
