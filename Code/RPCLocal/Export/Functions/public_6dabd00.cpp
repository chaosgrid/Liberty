#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1620);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dabd42 _public_6dabd42
#define public_6dabd59 _public_6dabd59
#define public_6dabd94 _public_6dabd94
#define public_6dabdd0 _public_6dabdd0
#define public_6dabddc _public_6dabddc

PROC_DECLARE(0x6dabd00, internal_6dabd00, public_6dabd00);
extern "C" NAKED register_t __cdecl internal_6dabd00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dabd42
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dabd42 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dabd59
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dabd59 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dabddc
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x20]
        mov dword ptr ds : [edi+0x28], ecx
        add eax, 4
        push edx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da1620
        push esi
        push ebp
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dabd94
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dabd94 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6dabdd0
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dabdd0 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dabddc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dabd00)
    }
}

#undef public_6dabd42
#undef public_6dabd59
#undef public_6dabd94
#undef public_6dabdd0
#undef public_6dabddc
