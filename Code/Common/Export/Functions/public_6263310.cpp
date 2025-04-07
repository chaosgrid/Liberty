#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63923f9);

#define public_626336f _public_626336f
#define public_6263378 _public_6263378
#define public_62633ae _public_62633ae
#define public_62633b0 _public_62633b0
#define public_62633d9 _public_62633d9
#define public_62633e2 _public_62633e2
#define public_62633eb _public_62633eb
#define public_6263402 _public_6263402
#define public_626341f _public_626341f
#define public_6263428 _public_6263428

PROC_DECLARE(0x6263310, internal_6263310, public_6263310);
extern "C" NAKED register_t __cdecl internal_6263310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63923f9 @0x6263312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63923f9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_63991c0]
        mov ebp, dword ptr ds : [eax]
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_626336f
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_626336f
        cmp al, 0xFF
        je public_626336f
        push 1
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_63991a4]
        xor edi, edi
        public_626336f : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_6263378
        mov ebp, eax
        public_6263378 : nop
        cmp ebp, edi
        jbe public_62633b0
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62633ae
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        public_62633ae : nop
        xor edi, edi
        public_62633b0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_62633eb
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_639913c]
        je public_62633e2
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_62633d9
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_62633d9 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_62633e2 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call ebx
        mov dword ptr ds : [esi+0x10], ebp
        public_62633eb : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_6263402
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_6263402 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov dword ptr ds : [esi+0x20], edi
        je public_6263428
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_626341f
        cmp cl, 0xFF
        je public_626341f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6263428
        public_626341f : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6263428 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6263310)
    }
}

#undef public_626336f
#undef public_6263378
#undef public_62633ae
#undef public_62633b0
#undef public_62633d9
#undef public_62633e2
#undef public_62633eb
#undef public_6263402
#undef public_626341f
#undef public_6263428
