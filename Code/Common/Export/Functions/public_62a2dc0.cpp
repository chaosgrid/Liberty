#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a2ddf _public_62a2ddf
#define public_62a2de7 _public_62a2de7
#define public_62a2ded _public_62a2ded
#define public_62a2e10 _public_62a2e10
#define public_62a2e18 _public_62a2e18
#define public_62a2e23 _public_62a2e23

PROC_DECLARE(0x62a2dc0, internal_62a2dc0, public_62a2dc0);
extern "C" NAKED register_t __cdecl internal_62a2dc0()
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
        jne public_62a2ddf
        xor eax, eax
        jmp public_62a2de7
        public_62a2ddf : nop
        mov eax, dword ptr ds : [edi+0xC]
        sub eax, ecx
        sar eax, 2
        public_62a2de7 : nop
        test eax, eax
        jge public_62a2ded
        xor eax, eax
        public_62a2ded : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp eax, edx
        je public_62a2e23
        push ebx
        lea ecx, ds:[ecx]
        public_62a2e10 : nop
        test ecx, ecx
        je public_62a2e18
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_62a2e18 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_62a2e10
        pop ebx
        public_62a2e23 : nop
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi], offset public_639dd00
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a2dc0)
    }
}

#undef public_62a2ddf
#undef public_62a2de7
#undef public_62a2ded
#undef public_62a2e10
#undef public_62a2e18
#undef public_62a2e23
