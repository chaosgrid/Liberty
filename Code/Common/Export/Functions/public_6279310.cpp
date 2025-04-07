#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279310);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627931d _public_627931d
#define public_6279378 _public_6279378
#define public_62793c5 _public_62793c5
#define public_62793d5 _public_62793d5
#define public_62793e1 _public_62793e1
#define public_62793ef _public_62793ef

PROC_DECLARE(0x6279310, internal_6279310, public_6279310);
extern "C" NAKED register_t __cdecl internal_6279310()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        xor edx, edx
        push edi
        public_627931d : nop
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        mov dword ptr ss : [esp+0x14], edx
        je public_62793d5
        mov eax, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 2
        cmp edx, eax
        jae public_62793d5
        mov esi, dword ptr ds : [esi+edx*4]
        test esi, esi
        je public_62793c5
        push esi
        call public_6334430
        lea ebp, ds:[esi+4]
        push ebp
        call public_6334430
        lea eax, ds:[esi+8]
        push eax
        call public_6334430
        lea eax, ds:[esi+0xC]
        push eax
        call public_6334430
        lea edi, ds:[esi+0x1C]
        add esp, 0x10
        mov ebx, edi
        mov dword ptr ss : [esp+0x10], 4
        public_6279378 : nop
        push ebx
        call public_6334430
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        add ebx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6279378
        xor eax, eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        push esi
        mov dword ptr ds : [edi+0xC], eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        public_62793c5 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+edx*4], 0
        inc edx
        jmp public_627931d
        public_62793d5 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, esi
        cmp eax, esi
        je public_62793ef
        public_62793e1 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, esi
        jne public_62793e1
        public_62793ef : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6279310)
    }
}

#undef public_627931d
#undef public_6279378
#undef public_62793c5
#undef public_62793d5
#undef public_62793e1
#undef public_62793ef
