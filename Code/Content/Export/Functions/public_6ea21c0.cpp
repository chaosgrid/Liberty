#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea2410);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8a20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ea2205 _public_6ea2205
#define public_6ea226e _public_6ea226e
#define public_6ea22cb _public_6ea22cb
#define public_6ea238e _public_6ea238e
#define public_6ea23d9 _public_6ea23d9
#define public_6ea23f6 _public_6ea23f6
#define public_6ea23fc _public_6ea23fc

PROC_DECLARE(0x6ea21c0, internal_6ea21c0, public_6ea21c0);
extern "C" NAKED register_t __cdecl internal_6ea21c0()
{
    __asm
    {
        sub esp, 0xCA0
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xCAC]
        mov eax, ecx
        dec eax
        push esi
        push edi
        je public_6ea22cb
        sub eax, 3
        je public_6ea226e
        dec eax
        je public_6ea2205
        mov eax, dword ptr ss : [esp+0xCB8]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb8f50
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xCA0
        ret 8
        public_6ea2205 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [esp+0xCB8]
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_6ea23fc
        push esi
        push 5
        mov ecx, ebp
        call public_6eb8f50
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0xA8]
        push eax
        call dword ptr ds : [public_6fb302c]
        mov ecx, dword ptr ds : [esi+4]
        call dword ptr ds : [public_6fb3028]
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, ebp
        call public_6ea2410
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0xA8]
        push edx
        call dword ptr ds : [public_6fb3010]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x32C], 1
        pop ebp
        pop ebx
        add esp, 0xCA0
        ret 8
        public_6ea226e : nop
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [esp+0xCB8]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jne public_6ea23fc
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6ea23fc
        push esi
        push 4
        mov ecx, ebp
        call public_6eb8f50
        mov esi, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb3a50 @0x6ea22a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3a50
        push esi
        call edi
        mov edx, dword ptr ss : [ebp+0x2A8]
        push edx
/*FIXUP push offset public_6fb3924 @0x6ea22b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3924
        push esi
        call edi
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xCA0
        ret 8
        public_6ea22cb : nop
        mov esi, dword ptr ss : [esp+0xCB8]
        push esi
        push 1
        mov ecx, ebp
        call public_6eb8f50
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ea23fc
        mov al, byte ptr ss : [ebp+0x32C]
        xor ebx, ebx
        cmp al, bl
        jne public_6ea23fc
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb3a40 @0x6ea22ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3a40
        push edx
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb3030]
        mov ecx, dword ptr ss : [ebp+4]
        push ebx
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6f488b0
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+0x2A4]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [ebp+0x2B8]
        push eax
        push 1
        call dword ptr ds : [edx]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [esp+0x9C], ecx
        mov byte ptr ds : [public_6fd1c78], 1
        mov edi, offset public_6fb3a14
        mov byte ptr ss : [ebp+0x32C], 1
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ss : [esp+0xA0], ebx
        mov byte ptr ss : [esp+0xA4], bl
        mov byte ptr ss : [esp+0xA5], bl
        jb public_6ea238e
        mov eax, 0x7F
        public_6ea238e : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb3a14
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x1C], bl
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_6eb8a20
        mov esi, dword ptr ss : [ebp+0x2F4]
        mov edi, dword ptr ds : [esi+4]
        push 0x98
        call public_6fa912a
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ea23d9
        mov edi, eax
        public_6ea23d9 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        cmp edi, ebx
        mov dword ptr ds : [ecx], eax
        je public_6ea23f6
        mov ecx, 0x24
        lea esi, ss:[esp+0x18]
        rep movsd
        public_6ea23f6 : nop
        inc dword ptr ss : [ebp+0x2F8]
        public_6ea23fc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xCA0
        ret 8
        UNREACHABLE_TRAP(0x6ea21c0)
    }
}

#undef public_6ea2205
#undef public_6ea226e
#undef public_6ea22cb
#undef public_6ea238e
#undef public_6ea23d9
#undef public_6ea23f6
#undef public_6ea23fc
