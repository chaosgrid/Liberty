#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdbe34 _public_6bdbe34
#define public_6bdbe4c _public_6bdbe4c
#define public_6bdbe76 _public_6bdbe76
#define public_6bdbeb1 _public_6bdbeb1
#define public_6bdbf04 _public_6bdbf04
#define public_6bdbf40 _public_6bdbf40
#define public_6bdbf4c _public_6bdbf4c

PROC_DECLARE(0x6bdbdf0, internal_6bdbdf0, public_6bdbdf0);
extern "C" NAKED register_t __cdecl internal_6bdbdf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bdbe34
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bdbe34 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6bdbe4c
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdbe4c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdbf4c
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x24], edx
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bdbe76
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdbe76 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdbf4c
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x24]
        add eax, 4
        push edx
        mov dword ptr ss : [ebp+0x28], ecx
        mov dword ptr ds : [esi], eax
        call public_6c09d26
        mov dword ptr ss : [ebp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bdbeb1
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdbeb1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdbf4c
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bdbf04
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bdbf04 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6bdbf40
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6bdbf40 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bdbf4c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bdbdf0)
    }
}

#undef public_6bdbe34
#undef public_6bdbe4c
#undef public_6bdbe76
#undef public_6bdbeb1
#undef public_6bdbf04
#undef public_6bdbf40
#undef public_6bdbf4c
