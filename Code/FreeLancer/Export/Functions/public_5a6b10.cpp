#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a6b10);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a6b40 _public_5a6b40
#define public_5a6b46 _public_5a6b46
#define public_5a6b61 _public_5a6b61
#define public_5a6b75 _public_5a6b75

PROC_DECLARE(0x5a6b10, internal_5a6b10, public_5a6b10);
extern "C" NAKED register_t __cdecl internal_5a6b10()
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
        je public_5a6b40
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
        public_5a6b40 : nop
        test eax, eax
        jge public_5a6b46
        xor eax, eax
        public_5a6b46 : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_5a6b75
        public_5a6b61 : nop
        push esi
        push edi
        call public_5a7c80
        add esi, 0x1C
        add esp, 8
        add edi, 0x1C
        cmp esi, ebx
        jne public_5a6b61
        public_5a6b75 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a6b10)
    }
}

#undef public_5a6b40
#undef public_5a6b46
#undef public_5a6b61
#undef public_5a6b75
