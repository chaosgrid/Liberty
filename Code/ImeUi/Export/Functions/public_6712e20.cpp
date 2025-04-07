#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67120f0);
CLANG_FORWARD_PROC_SYMBOL(public_6712480);

#define public_6712e64 _public_6712e64
#define public_6712e66 _public_6712e66

PROC_DECLARE(0x6712e20, internal_6712e20, public_6712e20);
extern "C" NAKED register_t __cdecl internal_6712e20()
{
    __asm
    {
        push edi
        mov edi, dword ptr ds : [ecx+0x90]
        xor al, al
        test edi, edi
        je public_6712e66
        push ebx
        mov ebx, dword ptr ds : [ecx+0x88]
        push esi
        mov esi, dword ptr ds : [ecx+0x84]
        test esi, esi
        je public_6712e64
        cmp word ptr ds : [esi], 0
        je public_6712e64
        mov ecx, edi
        call public_6712480
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ebx
        push esi
        push ecx
        call public_67120f0
        add esp, 0x10
        test eax, eax
        setne al
        public_6712e64 : nop
        pop esi
        pop ebx
        public_6712e66 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6712e20)
    }
}

#undef public_6712e64
#undef public_6712e66
