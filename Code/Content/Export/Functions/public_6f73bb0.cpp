#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73bb0);

#define public_6f73bd0 _public_6f73bd0
#define public_6f73be4 _public_6f73be4

PROC_DECLARE(0x6f73bb0, internal_6f73bb0, public_6f73bb0);
extern "C" NAKED register_t __cdecl internal_6f73bb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xE0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f73be4
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        push ebx
        sete bl
        lea ebx, ds:[ebx]
        public_6f73bd0 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_6f33fd0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xE0]
        jne public_6f73bd0
        pop ebx
        public_6f73be4 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f73bb0)
    }
}

#undef public_6f73bd0
#undef public_6f73be4
