#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2af00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b110);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b230);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2af2d _public_6c2af2d
#define public_6c2af36 _public_6c2af36
#define public_6c2af50 _public_6c2af50

PROC_DECLARE(0x6c2af00, internal_6c2af00, public_6c2af00);
extern "C" NAKED register_t __cdecl internal_6c2af00()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push 0xBC
        mov edi, ecx
        mov dword ptr ds : [ebx], 0
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2af2d
        mov ecx, eax
        call public_6c2b110
        mov esi, eax
        test esi, esi
        jne public_6c2af36
        public_6c2af2d : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c2af36 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push edi
        mov ecx, esi
        call public_6c2b230
        test eax, eax
        jge public_6c2af50
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c2af50 : nop
        pop edi
        mov dword ptr ds : [ebx], esi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c2af00)
    }
}

#undef public_6c2af2d
#undef public_6c2af36
#undef public_6c2af50
