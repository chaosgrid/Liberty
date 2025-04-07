#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41660);
CLANG_FORWARD_PROC_SYMBOL(public_6f416b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f416c1 _public_6f416c1
#define public_6f416fa _public_6f416fa

PROC_DECLARE(0x6f416b0, internal_6f416b0, public_6f416b0);
extern "C" NAKED register_t __cdecl internal_6f416b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x88]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f416fa
        push ebx
        public_6f416c1 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_6f41660
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6f57e26
        mov ecx, dword ptr ds : [edi+0x8C]
        add esp, 4
        dec ecx
        mov dword ptr ds : [edi+0x8C], ecx
        mov esi, dword ptr ds : [ebx]
        cmp esi, dword ptr ds : [edi+0x88]
        jne public_6f416c1
        pop ebx
        public_6f416fa : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f416b0)
    }
}

#undef public_6f416c1
#undef public_6f416fa
