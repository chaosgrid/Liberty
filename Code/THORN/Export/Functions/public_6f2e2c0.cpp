#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e2c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f586b1);

#define public_6f2e315 _public_6f2e315
#define public_6f2e323 _public_6f2e323
#define public_6f2e336 _public_6f2e336
#define public_6f2e36d _public_6f2e36d
#define public_6f2e37a _public_6f2e37a
#define public_6f2e38e _public_6f2e38e
#define public_6f2e3aa _public_6f2e3aa
#define public_6f2e3be _public_6f2e3be
#define public_6f2e3dc _public_6f2e3dc
#define public_6f2e3fd _public_6f2e3fd
#define public_6f2e406 _public_6f2e406

PROC_DECLARE(0x6f2e2c0, internal_6f2e2c0, public_6f2e2c0);
extern "C" NAKED register_t __cdecl internal_6f2e2c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f586b1 @0x6f2e2c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f586b1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f2e406
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_6f5a038]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_6f2e315
        mov ebx, esi
        public_6f2e315 : nop
        cmp ebp, edi
        jne public_6f2e37a
        cmp ebx, ecx
        jbe public_6f2e323
        call dword ptr ds : [public_6f5a044]
        public_6f2e323 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6f5a040]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6f2e336
        mov esi, eax
        public_6f2e336 : nop
        test esi, esi
        jbe public_6f2e36d
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6f5a078]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f2e36d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6f5a024]
        public_6f2e36d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6f5a040]
        jmp public_6f2e3fd
        public_6f2e37a : nop
        cmp ebx, ecx
        jbe public_6f2e3be
        cmp ebx, eax
        jne public_6f2e3be
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6f2e38e
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f2e38e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f2e3be
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6f5a02c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f2e3aa
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f2e3aa : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6f2e3fd
        public_6f2e3be : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f2e3fd
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6f5a020]
        je public_6f2e3dc
        mov esi, edi
        public_6f2e3dc : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6f2e3fd : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_6f2e406 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2e2c0)
    }
}

#undef public_6f2e315
#undef public_6f2e323
#undef public_6f2e336
#undef public_6f2e36d
#undef public_6f2e37a
#undef public_6f2e38e
#undef public_6f2e3aa
#undef public_6f2e3be
#undef public_6f2e3dc
#undef public_6f2e3fd
#undef public_6f2e406
