#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef2eaf _public_6ef2eaf
#define public_6ef2eb5 _public_6ef2eb5
#define public_6ef2ed1 _public_6ef2ed1
#define public_6ef2ee0 _public_6ef2ee0
#define public_6ef2eeb _public_6ef2eeb

PROC_DECLARE(0x6ef2e80, internal_6ef2e80, public_6ef2e80);
extern "C" NAKED register_t __cdecl internal_6ef2e80()
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
        je public_6ef2eaf
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6ef2eaf : nop
        test eax, eax
        jge public_6ef2eb5
        xor eax, eax
        public_6ef2eb5 : nop
        imul eax, 0x7C
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ef2eeb
        push edi
        public_6ef2ed1 : nop
        test edx, edx
        je public_6ef2ee0
        mov ecx, 0x1F
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6ef2ee0 : nop
        add eax, 0x7C
        add edx, 0x7C
        cmp eax, ebx
        jne public_6ef2ed1
        pop edi
        public_6ef2eeb : nop
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef2e80)
    }
}

#undef public_6ef2eaf
#undef public_6ef2eb5
#undef public_6ef2ed1
#undef public_6ef2ee0
#undef public_6ef2eeb
