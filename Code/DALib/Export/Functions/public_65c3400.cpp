#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3400);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c3411 _public_65c3411
#define public_65c3438 _public_65c3438

PROC_DECLARE(0x65c3400, internal_65c3400, public_65c3400);
extern "C" NAKED register_t __cdecl internal_65c3400()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, ebx
        push edi
        mov edi, ecx
        je public_65c3438
        public_65c3411 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_65c3411
        public_65c3438 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65c3400)
    }
}

#undef public_65c3411
#undef public_65c3438
