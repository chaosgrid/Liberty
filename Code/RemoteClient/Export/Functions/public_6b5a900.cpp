#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a230);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5a942 _public_6b5a942
#define public_6b5a975 _public_6b5a975
#define public_6b5a9b1 _public_6b5a9b1
#define public_6b5a9bd _public_6b5a9bd

PROC_DECLARE(0x6b5a900, internal_6b5a900, public_6b5a900);
extern "C" NAKED register_t __cdecl internal_6b5a900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebx
        lea ebp, ds:[edi+0x18]
        push ebp
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5a942
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5a942 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        push edx
        mov ecx, edi
        call public_6b3a230
        test eax, eax
        jne public_6b5a9bd
        push esi
        push ebx
        push ebp
        mov ecx, edi
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5a975
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5a975 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b5a9b1
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b5a9b1 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b5a9bd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b5a900)
    }
}

#undef public_6b5a942
#undef public_6b5a975
#undef public_6b5a9b1
#undef public_6b5a9bd
