#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316580);
CLANG_FORWARD_PROC_SYMBOL(public_6318b10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6318b22 _public_6318b22
#define public_6318b49 _public_6318b49

PROC_DECLARE(0x6318b10, internal_6318b10, public_6318b10);
extern "C" NAKED register_t __cdecl internal_6318b10()
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
        je public_6318b49
        public_6318b22 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6318b10
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6316580
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6318b22
        public_6318b49 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6318b10)
    }
}

#undef public_6318b22
#undef public_6318b49
