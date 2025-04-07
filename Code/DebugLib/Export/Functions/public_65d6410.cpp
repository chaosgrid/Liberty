#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6340);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d6420 _public_65d6420
#define public_65d6451 _public_65d6451

PROC_DECLARE(0x65d6410, internal_65d6410, public_65d6410);
extern "C" NAKED register_t __cdecl internal_65d6410()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov eax, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d6451
        push edi
        public_65d6420 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_65d6340
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [ebx+0x1C]
        add esp, 4
        dec ecx
        mov esi, edi
        mov dword ptr ds : [ebx+0x1C], ecx
        mov eax, dword ptr ds : [ebx+0x18]
        cmp edi, eax
        jne public_65d6420
        pop edi
        public_65d6451 : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d6410)
    }
}

#undef public_65d6420
#undef public_65d6451
