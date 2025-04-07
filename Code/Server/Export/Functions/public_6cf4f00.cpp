#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4f00);

#define public_6cf4f10 _public_6cf4f10
#define public_6cf4f19 _public_6cf4f19
#define public_6cf4f1b _public_6cf4f1b
#define public_6cf4f2b _public_6cf4f2b

PROC_DECLARE(0x6cf4f00, internal_6cf4f00, public_6cf4f00);
extern "C" NAKED register_t __cdecl internal_6cf4f00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_6cf4f10 : nop
        test esi, esi
        jne public_6cf4f19
        mov esi, dword ptr ds : [ebx+4]
        jmp public_6cf4f1b
        public_6cf4f19 : nop
        mov esi, dword ptr ds : [esi]
        public_6cf4f1b : nop
        test esi, esi
        je public_6cf4f2b
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        jne public_6cf4f10
        public_6cf4f2b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cf4f00)
    }
}

#undef public_6cf4f10
#undef public_6cf4f19
#undef public_6cf4f1b
#undef public_6cf4f2b
