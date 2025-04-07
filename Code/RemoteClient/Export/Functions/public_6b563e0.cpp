#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b56425 _public_6b56425
#define public_6b5643e _public_6b5643e
#define public_6b56465 _public_6b56465
#define public_6b56482 _public_6b56482
#define public_6b564d7 _public_6b564d7
#define public_6b56516 _public_6b56516
#define public_6b56522 _public_6b56522

PROC_DECLARE(0x6b563e0, internal_6b563e0, public_6b563e0);
extern "C" NAKED register_t __cdecl internal_6b563e0()
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
        je public_6b56425
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b56425 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b5643e
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b5643e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56522
        mov ecx, dword ptr ds : [esi]
        mov ax, word ptr ds : [ecx]
        add ecx, 2
        cmp ax, 0x200
        mov dword ptr ds : [esi], ecx
        jb public_6b56465
        pop edi
        pop esi
        pop ebp
        mov eax, 0x4A
        pop ebx
        ret 0xC
        public_6b56465 : nop
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        xor edx, edx
        mov dx, ax
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp], edi
        jbe public_6b56482
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b56482 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56522
        mov esi, dword ptr ds : [esi]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        lea edi, ds:[ebx+0x20]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, edx
        lea eax, ds:[ebx+0x18]
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [edx+ebx+0x20], 0
        mov edx, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        push eax
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b564d7
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b564d7 : nop
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
        jbe public_6b56516
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b56516 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b56522 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b563e0)
    }
}

#undef public_6b56425
#undef public_6b5643e
#undef public_6b56465
#undef public_6b56482
#undef public_6b564d7
#undef public_6b56516
#undef public_6b56522
