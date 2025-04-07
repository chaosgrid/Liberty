#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bfd9e3 _public_6bfd9e3
#define public_6bfd9fc _public_6bfd9fc
#define public_6bfda2c _public_6bfda2c
#define public_6bfda47 _public_6bfda47
#define public_6bfda9b _public_6bfda9b
#define public_6bfdada _public_6bfdada
#define public_6bfdae6 _public_6bfdae6

PROC_DECLARE(0x6bfd9a0, internal_6bfd9a0, public_6bfd9a0);
extern "C" NAKED register_t __cdecl internal_6bfd9a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea ebp, ds:[ebx+0x10]
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bfd9e3
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfd9e3 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfd9fc
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfd9fc : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bfdae6
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx+0x20]
        test eax, eax
        mov dword ptr ds : [ebx+0x24], edx
        jne public_6bfda2c
        mov eax, edx
        push eax
        call public_6c09d26
        add esp, 4
        mov dword ptr ds : [ebx+0x20], eax
        mov byte ptr ds : [ebx+0x28], 1
        public_6bfda2c : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ss : [ebp]
        add edx, ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfda47
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfda47 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bfdae6
        mov eax, dword ptr ds : [ebx+0x24]
        mov esi, dword ptr ds : [esi]
        push edi
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
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        pop edi
        je public_6bfda9b
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfda9b : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bfdada
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6bfdada : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfdae6 : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfd9a0)
    }
}

#undef public_6bfd9e3
#undef public_6bfd9fc
#undef public_6bfda2c
#undef public_6bfda47
#undef public_6bfda9b
#undef public_6bfdada
#undef public_6bfdae6
