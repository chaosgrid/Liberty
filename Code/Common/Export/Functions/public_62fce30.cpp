#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fce30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fce42 _public_62fce42
#define public_62fce61 _public_62fce61

PROC_DECLARE(0x62fce30, internal_62fce30, public_62fce30);
extern "C" NAKED register_t __cdecl internal_62fce30()
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
        je public_62fce61
        public_62fce42 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fce30
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fce42
        public_62fce61 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fce30)
    }
}

#undef public_62fce42
#undef public_62fce61
