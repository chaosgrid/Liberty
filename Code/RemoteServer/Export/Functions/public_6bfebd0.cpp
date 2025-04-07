#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfec19 _public_6bfec19
#define public_6bfec30 _public_6bfec30
#define public_6bfec43 _public_6bfec43
#define public_6bfec68 _public_6bfec68
#define public_6bfec7b _public_6bfec7b
#define public_6bfecb9 _public_6bfecb9
#define public_6bfeccc _public_6bfeccc
#define public_6bfecef _public_6bfecef
#define public_6bfed02 _public_6bfed02
#define public_6bfed2e _public_6bfed2e
#define public_6bfed61 _public_6bfed61

PROC_DECLARE(0x6bfebd0, internal_6bfebd0, public_6bfebd0);
extern "C" NAKED register_t __cdecl internal_6bfebd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfec19
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfec19 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfec30
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfec30 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfec43
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfec43 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6bfec68
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfec68 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfec7b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfec7b : nop
        mov edx, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x2C]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add edx, ecx
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bfecb9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfecb9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfeccc
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfeccc : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bfecef
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfecef : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfed02
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfed02 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        push ecx
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfed2e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfed2e : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6bfed61
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bfed61 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bfebd0)
    }
}

#undef public_6bfec19
#undef public_6bfec30
#undef public_6bfec43
#undef public_6bfec68
#undef public_6bfec7b
#undef public_6bfecb9
#undef public_6bfeccc
#undef public_6bfecef
#undef public_6bfed02
#undef public_6bfed2e
#undef public_6bfed61
