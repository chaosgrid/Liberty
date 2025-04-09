#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e380);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46e392 _public_46e392
#define public_46e3b1 _public_46e3b1

PROC_DECLARE(0x46e380, internal_46e380, public_46e380);
extern "C" NAKED register_t __cdecl internal_46e380()
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
        je public_46e3b1
        public_46e392 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_46e380
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_46e392
        public_46e3b1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46e380)
    }
}

#undef public_46e392
#undef public_46e3b1
