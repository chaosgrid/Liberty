#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b44ef3 _public_6b44ef3
#define public_6b44f0b _public_6b44f0b
#define public_6b44f37 _public_6b44f37
#define public_6b44f63 _public_6b44f63
#define public_6b44f8f _public_6b44f8f
#define public_6b44fbd _public_6b44fbd
#define public_6b45005 _public_6b45005
#define public_6b4501f _public_6b4501f
#define public_6b45046 _public_6b45046
#define public_6b4505c _public_6b4505c
#define public_6b450a2 _public_6b450a2
#define public_6b450a6 _public_6b450a6
#define public_6b450be _public_6b450be
#define public_6b450eb _public_6b450eb
#define public_6b4511d _public_6b4511d
#define public_6b45161 _public_6b45161
#define public_6b45179 _public_6b45179
#define public_6b45188 _public_6b45188
#define public_6b451bb _public_6b451bb
#define public_6b451c7 _public_6b451c7

PROC_DECLARE(0x6b44ea0, internal_6b44ea0, public_6b44ea0);
extern "C" NAKED register_t __cdecl internal_6b44ea0()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b44ef3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6b44ef3 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov eax, 0x16
        jbe public_6b44f0b
        mov dword ptr ds : [ebx+0xC], eax
        public_6b44f0b : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b451c7
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
        jbe public_6b44f37
        mov dword ptr ds : [ebx+0xC], eax
        public_6b44f37 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b451c7
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
        jbe public_6b44f63
        mov dword ptr ds : [ebx+0xC], eax
        public_6b44f63 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b451c7
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
        jbe public_6b44f8f
        mov dword ptr ds : [ebx+0xC], eax
        public_6b44f8f : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b451c7
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
        jbe public_6b44fbd
        mov dword ptr ds : [ebx+0xC], eax
        public_6b44fbd : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b451c7
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
        jbe public_6b45005
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b45005 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6b4501f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6b4501f : nop
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
        jbe public_6b45046
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b45046 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6b4505c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6b4505c : nop
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
        jbe public_6b45161
        mov edx, dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6b45161
        jmp public_6b450a6
        public_6b450a2 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6b450a6 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6b450be
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b450be : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6b45179
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
        jbe public_6b450eb
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b450eb : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6b45179
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
        jbe public_6b4511d
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b4511d : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6b45179
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
        jne public_6b450a2
        public_6b45161 : nop
        mov edx, dword ptr ds : [eax+0x14]
        push ebx
        push edx
        push ebp
        mov ecx, eax
        call public_6b4e790
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x1C], eax
        je public_6b45188
        public_6b45179 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6b45188 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0xC]
        push eax
        call public_6b4ecd0
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
        jbe public_6b451bb
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b451bb : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b451c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6b44ea0)
    }
}

#undef public_6b44ef3
#undef public_6b44f0b
#undef public_6b44f37
#undef public_6b44f63
#undef public_6b44f8f
#undef public_6b44fbd
#undef public_6b45005
#undef public_6b4501f
#undef public_6b45046
#undef public_6b4505c
#undef public_6b450a2
#undef public_6b450a6
#undef public_6b450be
#undef public_6b450eb
#undef public_6b4511d
#undef public_6b45161
#undef public_6b45179
#undef public_6b45188
#undef public_6b451bb
#undef public_6b451c7
