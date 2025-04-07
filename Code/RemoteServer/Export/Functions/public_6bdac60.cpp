#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bdacb3 _public_6bdacb3
#define public_6bdaccb _public_6bdaccb
#define public_6bdacf7 _public_6bdacf7
#define public_6bdad23 _public_6bdad23
#define public_6bdad4f _public_6bdad4f
#define public_6bdad7d _public_6bdad7d
#define public_6bdadc5 _public_6bdadc5
#define public_6bdaddf _public_6bdaddf
#define public_6bdae06 _public_6bdae06
#define public_6bdae1c _public_6bdae1c
#define public_6bdae62 _public_6bdae62
#define public_6bdae66 _public_6bdae66
#define public_6bdae7e _public_6bdae7e
#define public_6bdaeab _public_6bdaeab
#define public_6bdaedd _public_6bdaedd
#define public_6bdaf21 _public_6bdaf21
#define public_6bdaf39 _public_6bdaf39
#define public_6bdaf48 _public_6bdaf48
#define public_6bdaf7b _public_6bdaf7b
#define public_6bdaf87 _public_6bdaf87

PROC_DECLARE(0x6bdac60, internal_6bdac60, public_6bdac60);
extern "C" NAKED register_t __cdecl internal_6bdac60()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea ebx, ds:[esi+0x10]
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ds : [esi+0x14]
        push ebx
        push eax
        lea ebp, ds:[esi+0x18]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bdacb3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6bdacb3 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov eax, 0x16
        jbe public_6bdaccb
        mov dword ptr ds : [ebx+0xC], eax
        public_6bdaccb : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6bdaf87
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6bdacf7
        mov dword ptr ds : [ebx+0xC], eax
        public_6bdacf7 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6bdaf87
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6bdad23
        mov dword ptr ds : [ebx+0xC], eax
        public_6bdad23 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6bdaf87
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6bdad4f
        mov dword ptr ds : [ebx+0xC], eax
        public_6bdad4f : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6bdaf87
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, ecx
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6bdad7d
        mov dword ptr ds : [ebx+0xC], eax
        public_6bdad7d : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6bdaf87
        mov eax, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [esi+0x2C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bdadc5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bdadc5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6bdaddf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6bdaddf : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, ecx
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bdae06
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bdae06 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6bdae1c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6bdae1c : nop
        mov ecx, dword ptr ds : [eax+0x30]
        mov edi, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, edx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [eax+0x38]
        test ecx, ecx
        jbe public_6bdaf21
        mov edx, dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6bdaf21
        jmp public_6bdae66
        public_6bdae62 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6bdae66 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6bdae7e
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bdae7e : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6bdaf39
        mov esi, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [edx]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ss : [ebp], esi
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6bdaeab
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bdaeab : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6bdaf39
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], esi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add edi, ecx
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6bdaedd
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bdaedd : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6bdaf39
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x1C], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, edx
        mov edx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6bdae62
        public_6bdaf21 : nop
        mov edx, dword ptr ds : [eax+0x14]
        push ebx
        push edx
        push ebp
        mov ecx, eax
        call public_6bebea0
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x1C], eax
        je public_6bdaf48
        public_6bdaf39 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6bdaf48 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0xC]
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
        jbe public_6bdaf7b
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bdaf7b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bdaf87 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6bdac60)
    }
}

#undef public_6bdacb3
#undef public_6bdaccb
#undef public_6bdacf7
#undef public_6bdad23
#undef public_6bdad4f
#undef public_6bdad7d
#undef public_6bdadc5
#undef public_6bdaddf
#undef public_6bdae06
#undef public_6bdae1c
#undef public_6bdae62
#undef public_6bdae66
#undef public_6bdae7e
#undef public_6bdaeab
#undef public_6bdaedd
#undef public_6bdaf21
#undef public_6bdaf39
#undef public_6bdaf48
#undef public_6bdaf7b
#undef public_6bdaf87
