#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f840);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f990);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58ec9);

#define public_6f3f8b8 _public_6f3f8b8
#define public_6f3f8e5 _public_6f3f8e5
#define public_6f3f8fb _public_6f3f8fb
#define public_6f3f916 _public_6f3f916
#define public_6f3f940 _public_6f3f940
#define public_6f3f95e _public_6f3f95e
#define public_6f3f97a _public_6f3f97a

PROC_DECLARE(0x6f3f840, internal_6f3f840, public_6f3f840);
extern "C" NAKED register_t __cdecl internal_6f3f840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58ec9 @0x6f3f842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58ec9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6f3f97a
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        push 0xFFFFFFFF
        push ebp
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call public_6f3f990
        mov cl, byte ptr ds : [edi+0x10]
        add edi, 0x10
        lea ebx, ds:[esi+0x10]
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+0xC], ebp
        mov byte ptr ds : [ebx], cl
        mov edx, dword ptr ds : [public_6f5a038]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx]
        mov ebp, ecx
        cmp eax, ebp
        mov byte ptr ss : [esp+0x1C], 1
        jae public_6f3f8b8
        mov ebp, eax
        public_6f3f8b8 : nop
        cmp ebx, edi
        jne public_6f3f8e5
        push eax
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a04c]
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6f5a04c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f3f8e5 : nop
        xor edx, edx
        cmp ebp, edx
        jbe public_6f3f940
        cmp ebp, ecx
        jne public_6f3f940
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f3f8fb
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f3f8fb : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f3f940
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f3f916
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f3f916 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f3f940 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f3f97a
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6f5a020]
        je public_6f3f95e
        mov esi, edi
        public_6f3f95e : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a024]
        public_6f3f97a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f3f840)
    }
}

#undef public_6f3f8b8
#undef public_6f3f8e5
#undef public_6f3f8fb
#undef public_6f3f916
#undef public_6f3f940
#undef public_6f3f95e
#undef public_6f3f97a
