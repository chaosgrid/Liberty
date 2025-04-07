#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a2baf _public_62a2baf
#define public_62a2bb7 _public_62a2bb7
#define public_62a2bbd _public_62a2bbd
#define public_62a2be0 _public_62a2be0
#define public_62a2be8 _public_62a2be8
#define public_62a2bf3 _public_62a2bf3

PROC_DECLARE(0x62a2b90, internal_62a2b90, public_62a2b90);
extern "C" NAKED register_t __cdecl internal_62a2b90()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_639dcf0
        mov al, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        jne public_62a2baf
        xor eax, eax
        jmp public_62a2bb7
        public_62a2baf : nop
        mov eax, dword ptr ds : [edi+0xC]
        sub eax, ecx
        sar eax, 2
        public_62a2bb7 : nop
        test eax, eax
        jge public_62a2bbd
        xor eax, eax
        public_62a2bbd : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp eax, edx
        je public_62a2bf3
        push ebx
        lea ecx, ds:[ecx]
        public_62a2be0 : nop
        test ecx, ecx
        je public_62a2be8
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_62a2be8 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_62a2be0
        pop ebx
        public_62a2bf3 : nop
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], eax
        pop edi
        mov dword ptr ds : [esi], offset public_639dce0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a2b90)
    }
}

#undef public_62a2baf
#undef public_62a2bb7
#undef public_62a2bbd
#undef public_62a2be0
#undef public_62a2be8
#undef public_62a2bf3
