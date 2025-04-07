#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fce70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fce82 _public_62fce82
#define public_62fcea1 _public_62fcea1

PROC_DECLARE(0x62fce70, internal_62fce70, public_62fce70);
extern "C" NAKED register_t __cdecl internal_62fce70()
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
        je public_62fcea1
        public_62fce82 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fce70
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fce82
        public_62fcea1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fce70)
    }
}

#undef public_62fce82
#undef public_62fcea1
