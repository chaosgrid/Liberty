#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6623620);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6623634 _public_6623634
#define public_6623662 _public_6623662

PROC_DECLARE(0x6623620, internal_6623620, public_6623620);
extern "C" NAKED register_t __cdecl internal_6623620()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        cmp esi, ebp
        mov edi, ecx
        je public_6623662
        push ebx
        xor ebx, ebx
        public_6623634 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov byte ptr ds : [eax+8], bl
        mov dword ptr ds : [eax+0x38], ebx
        call public_66281d0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_6623634
        pop ebx
        public_6623662 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6623620)
    }
}

#undef public_6623634
#undef public_6623662
