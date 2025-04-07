#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c07ad7 _public_6c07ad7
#define public_6c07aee _public_6c07aee
#define public_6c07b00 _public_6c07b00
#define public_6c07b2b _public_6c07b2b
#define public_6c07b5e _public_6c07b5e

PROC_DECLARE(0x6c07a90, internal_6c07a90, public_6c07a90);
extern "C" NAKED register_t __cdecl internal_6c07a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c07ad7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c07ad7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c07aee
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c07aee : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c07b00
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c07b00 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x20]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c07b2b
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c07b2b : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6c07b5e
        mov dword ptr ds : [ecx+0x10], esi
        public_6c07b5e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c07a90)
    }
}

#undef public_6c07ad7
#undef public_6c07aee
#undef public_6c07b00
#undef public_6c07b2b
#undef public_6c07b5e
