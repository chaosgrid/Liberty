#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55660);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f5568d _public_6f5568d
#define public_6f55693 _public_6f55693
#define public_6f556b0 _public_6f556b0
#define public_6f556bf _public_6f556bf
#define public_6f556ca _public_6f556ca

PROC_DECLARE(0x6f55660, internal_6f55660, public_6f55660);
extern "C" NAKED register_t __cdecl internal_6f55660()
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
        je public_6f5568d
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f5568d : nop
        test eax, eax
        jge public_6f55693
        xor eax, eax
        public_6f55693 : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f556ca
        push edi
        nop 
        public_6f556b0 : nop
        test edx, edx
        je public_6f556bf
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6f556bf : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6f556b0
        pop edi
        public_6f556ca : nop
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f55660)
    }
}

#undef public_6f5568d
#undef public_6f55693
#undef public_6f556b0
#undef public_6f556bf
#undef public_6f556ca
