#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f595a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a180);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f595d0 _public_6f595d0
#define public_6f595d6 _public_6f595d6
#define public_6f595f1 _public_6f595f1
#define public_6f59605 _public_6f59605

PROC_DECLARE(0x6f595a0, internal_6f595a0, public_6f595a0);
extern "C" NAKED register_t __cdecl internal_6f595a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6f595d0
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f595d0 : nop
        test eax, eax
        jge public_6f595d6
        xor eax, eax
        public_6f595d6 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f59605
        public_6f595f1 : nop
        push esi
        push edi
        call public_6f5a180
        add esi, 0x38
        add esp, 8
        add edi, 0x38
        cmp esi, ebx
        jne public_6f595f1
        public_6f59605 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f595a0)
    }
}

#undef public_6f595d0
#undef public_6f595d6
#undef public_6f595f1
#undef public_6f59605
