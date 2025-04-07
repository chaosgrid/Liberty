#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c021df _public_6c021df
#define public_6c021f6 _public_6c021f6
#define public_6c0220c _public_6c0220c
#define public_6c0222f _public_6c0222f
#define public_6c02245 _public_6c02245
#define public_6c02285 _public_6c02285
#define public_6c02298 _public_6c02298
#define public_6c022b7 _public_6c022b7
#define public_6c022ca _public_6c022ca
#define public_6c022e9 _public_6c022e9
#define public_6c022fc _public_6c022fc
#define public_6c02328 _public_6c02328
#define public_6c02359 _public_6c02359

PROC_DECLARE(0x6c02190, internal_6c02190, public_6c02190);
extern "C" NAKED register_t __cdecl internal_6c02190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
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
        je public_6c021df
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c021df : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c021f6
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c021f6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c0220c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c0220c : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c0222f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0222f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c02245
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c02245 : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6c02285
        mov dword ptr ds : [esi+0xC], ebp
        public_6c02285 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c02298
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c02298 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c022b7
        mov dword ptr ds : [esi+0xC], ebp
        public_6c022b7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c022ca
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c022ca : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c022e9
        mov dword ptr ds : [esi+0xC], ebp
        public_6c022e9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c022fc
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c022fc : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c02328
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c02328 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6c02359
        mov dword ptr ds : [ecx+0x10], esi
        public_6c02359 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6c02190)
    }
}

#undef public_6c021df
#undef public_6c021f6
#undef public_6c0220c
#undef public_6c0222f
#undef public_6c02245
#undef public_6c02285
#undef public_6c02298
#undef public_6c022b7
#undef public_6c022ca
#undef public_6c022e9
#undef public_6c022fc
#undef public_6c02328
#undef public_6c02359
