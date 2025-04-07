#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa03d2 _public_6fa03d2
#define public_6fa0403 _public_6fa0403

PROC_DECLARE(0x6fa03c0, internal_6fa03c0, public_6fa03c0);
extern "C" NAKED register_t __cdecl internal_6fa03c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6fa0403
        push esi
        public_6fa03d2 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6fa03d2
        pop esi
        public_6fa0403 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa03c0)
    }
}

#undef public_6fa03d2
#undef public_6fa0403
