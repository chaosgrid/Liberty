#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2faf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2fb1f _public_6f2fb1f
#define public_6f2fb25 _public_6f2fb25
#define public_6f2fb41 _public_6f2fb41
#define public_6f2fb50 _public_6f2fb50
#define public_6f2fb5b _public_6f2fb5b

PROC_DECLARE(0x6f2faf0, internal_6f2faf0, public_6f2faf0);
extern "C" NAKED register_t __cdecl internal_6f2faf0()
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
        je public_6f2fb1f
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f2fb1f : nop
        test eax, eax
        jge public_6f2fb25
        xor eax, eax
        public_6f2fb25 : nop
        imul eax, 0x1C
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f2fb5b
        push edi
        public_6f2fb41 : nop
        test edx, edx
        je public_6f2fb50
        mov ecx, 7
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6f2fb50 : nop
        add eax, 0x1C
        add edx, 0x1C
        cmp eax, ebx
        jne public_6f2fb41
        pop edi
        public_6f2fb5b : nop
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2faf0)
    }
}

#undef public_6f2fb1f
#undef public_6f2fb25
#undef public_6f2fb41
#undef public_6f2fb50
#undef public_6f2fb5b
