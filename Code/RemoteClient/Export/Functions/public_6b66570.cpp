#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b665b5 _public_6b665b5
#define public_6b665cf _public_6b665cf
#define public_6b665f5 _public_6b665f5
#define public_6b66626 _public_6b66626
#define public_6b6662a _public_6b6662a
#define public_6b6663f _public_6b6663f
#define public_6b66692 _public_6b66692
#define public_6b666d1 _public_6b666d1
#define public_6b666dd _public_6b666dd

PROC_DECLARE(0x6b66570, internal_6b66570, public_6b66570);
extern "C" NAKED register_t __cdecl internal_6b66570()
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
        je public_6b665b5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b665b5 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x17
        jbe public_6b665cf
        mov dword ptr ss : [ebp+0xC], edi
        public_6b665cf : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b666dd
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ebx+0x24], edx
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, edx
        cmp eax, ecx
        jbe public_6b665f5
        mov dword ptr ss : [ebp+0xC], edi
        public_6b665f5 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b666dd
        mov eax, dword ptr ds : [ebx+0x20]
        test eax, eax
        jne public_6b6662a
        mov ecx, dword ptr ds : [ebx+0x24]
        push ecx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0x20], eax
        jne public_6b66626
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b66626 : nop
        mov byte ptr ds : [ebx+0x28], 1
        public_6b6662a : nop
        mov edx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b6663f
        mov dword ptr ss : [ebp+0xC], edi
        public_6b6663f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b666dd
        mov eax, dword ptr ds : [ebx+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx+0x20]
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
        push ebp
        lea eax, ds:[ebx+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b66692
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b66692 : nop
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
        jbe public_6b666d1
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b666d1 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b666dd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b66570)
    }
}

#undef public_6b665b5
#undef public_6b665cf
#undef public_6b665f5
#undef public_6b66626
#undef public_6b6662a
#undef public_6b6663f
#undef public_6b66692
#undef public_6b666d1
#undef public_6b666dd
