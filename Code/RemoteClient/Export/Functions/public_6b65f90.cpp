#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b65fd5 _public_6b65fd5
#define public_6b65fef _public_6b65fef
#define public_6b66015 _public_6b66015
#define public_6b66047 _public_6b66047
#define public_6b6604b _public_6b6604b
#define public_6b66060 _public_6b66060
#define public_6b660bd _public_6b660bd
#define public_6b660fc _public_6b660fc
#define public_6b66108 _public_6b66108

PROC_DECLARE(0x6b65f90, internal_6b65f90, public_6b65f90);
extern "C" NAKED register_t __cdecl internal_6b65f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[ebx+0x10]
        push edi
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b65fd5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b65fd5 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x17
        jbe public_6b65fef
        mov dword ptr ss : [ebp+0xC], edi
        public_6b65fef : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b66108
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ebx+0x24], edx
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, edx
        cmp eax, ecx
        jbe public_6b66015
        mov dword ptr ss : [ebp+0xC], edi
        public_6b66015 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b66108
        mov eax, dword ptr ds : [ebx+0x20]
        test eax, eax
        jne public_6b6604b
        mov ecx, dword ptr ds : [ebx+0x24]
        inc ecx
        push ecx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0x20], eax
        jne public_6b66047
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b66047 : nop
        mov byte ptr ds : [ebx+0x28], 1
        public_6b6604b : nop
        mov edx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b66060
        mov dword ptr ss : [ebp+0xC], edi
        public_6b66060 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b66108
        mov eax, dword ptr ds : [ebx+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+0x20]
        add ecx, eax
        lea eax, ds:[ebx+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        mov byte ptr ds : [edx+ecx], 0
        mov edx, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        push eax
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b660bd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b660bd : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ss : [ebp]
        add eax, 2
        add ebx, eax
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add edx, 2
        cmp ebp, edx
        jbe public_6b660fc
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b660fc : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b66108 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b65f90)
    }
}

#undef public_6b65fd5
#undef public_6b65fef
#undef public_6b66015
#undef public_6b66047
#undef public_6b6604b
#undef public_6b66060
#undef public_6b660bd
#undef public_6b660fc
#undef public_6b66108
