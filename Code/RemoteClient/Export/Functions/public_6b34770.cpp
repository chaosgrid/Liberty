#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b34782 _public_6b34782
#define public_6b3479e _public_6b3479e
#define public_6b347a9 _public_6b347a9
#define public_6b347b1 _public_6b347b1

PROC_DECLARE(0x6b34770, internal_6b34770, public_6b34770);
extern "C" NAKED register_t __cdecl internal_6b34770()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        push edi
        mov edi, 6
        je public_6b347b1
        public_6b34782 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b3479e
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b347a9
        public_6b3479e : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b347a9 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b34782
        public_6b347b1 : nop
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov dword ptr ds : [esi], edi
        call public_6b6a134
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push edx
        push eax
        mov ecx, ebx
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6b6b090]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b34770)
    }
}

#undef public_6b34782
#undef public_6b3479e
#undef public_6b347a9
#undef public_6b347b1
