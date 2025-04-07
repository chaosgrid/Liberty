#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bdcfe9 _public_6bdcfe9
#define public_6bdd001 _public_6bdd001
#define public_6bdd011 _public_6bdd011
#define public_6bdd036 _public_6bdd036
#define public_6bdd046 _public_6bdd046
#define public_6bdd070 _public_6bdd070
#define public_6bdd080 _public_6bdd080
#define public_6bdd09a _public_6bdd09a
#define public_6bdd0c5 _public_6bdd0c5
#define public_6bdd0dc _public_6bdd0dc
#define public_6bdd0e3 _public_6bdd0e3
#define public_6bdd0fa _public_6bdd0fa
#define public_6bdd103 _public_6bdd103
#define public_6bdd136 _public_6bdd136

PROC_DECLARE(0x6bdcfa0, internal_6bdcfa0, public_6bdcfa0);
extern "C" NAKED register_t __cdecl internal_6bdcfa0()
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
        je public_6bdcfe9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdcfe9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6bdd001
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdd001 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bdd011
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd011 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6bdd070
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bdd036
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdd036 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bdd046
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd046 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6bdd070 : nop
        cmp word ptr ss : [ebp+0x30], 0
        jbe public_6bdd0e3
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6bdd0e3
        public_6bdd080 : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6bdd0dc
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bdd09a
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdd09a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd0fa
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bdd0c5
        mov dword ptr ds : [ebx+0xC], edi
        public_6bdd0c5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd0fa
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6bdd0dc : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ss : [ebp+0x2C]
        jne public_6bdd080
        public_6bdd0e3 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bdd103
        public_6bdd0fa : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd103 : nop
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
        jbe public_6bdd136
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bdd136 : nop
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
        UNREACHABLE_TRAP(0x6bdcfa0)
    }
}

#undef public_6bdcfe9
#undef public_6bdd001
#undef public_6bdd011
#undef public_6bdd036
#undef public_6bdd046
#undef public_6bdd070
#undef public_6bdd080
#undef public_6bdd09a
#undef public_6bdd0c5
#undef public_6bdd0dc
#undef public_6bdd0e3
#undef public_6bdd0fa
#undef public_6bdd103
#undef public_6bdd136
