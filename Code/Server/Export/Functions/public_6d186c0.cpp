#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18707 _public_6d18707

PROC_DECLARE(0x6d186c0, internal_6d186c0, public_6d186c0);
extern "C" NAKED register_t __cdecl internal_6d186c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ebx, 0xFFFFFFFC
        mov byte ptr ds : [esi], 0
        je public_6d18707
        mov edi, dword ptr ss : [esp+0x14]
        test edi, 0x3FFFFFFF
        je public_6d18707
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d140f0
        test eax, eax
        je public_6d18707
        push edi
        mov ecx, eax
        call public_6d12d20
        pop edi
        mov byte ptr ds : [esi], al
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d18707 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d186c0)
    }
}

#undef public_6d18707
