#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c380);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_JUMP_SYMBOL(public_41a039);

#define public_40c3df _public_40c3df
#define public_40c3e8 _public_40c3e8
#define public_40c41e _public_40c41e
#define public_40c420 _public_40c420
#define public_40c449 _public_40c449
#define public_40c452 _public_40c452
#define public_40c45b _public_40c45b
#define public_40c472 _public_40c472
#define public_40c48f _public_40c48f
#define public_40c498 _public_40c498

PROC_DECLARE(0x40c380, internal_40c380, public_40c380);
extern "C" NAKED register_t __cdecl internal_40c380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a039 @0x40c382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a039
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
        mov eax, dword ptr ds : [public_41b8ac]
        mov ebp, dword ptr ds : [eax]
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_40c3df
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_40c3df
        cmp al, 0xFF
        je public_40c3df
        push 1
        call dword ptr ds : [public_41b870]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_41b8d4]
        xor edi, edi
        public_40c3df : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_40c3e8
        mov ebp, eax
        public_40c3e8 : nop
        cmp ebp, edi
        jbe public_40c420
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_41b96c]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_41b874]
        test al, al
        je public_40c41e
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        public_40c41e : nop
        xor edi, edi
        public_40c420 : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_40c45b
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_41b1bc]
        je public_40c452
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_40c449
        push eax
        call dword ptr ds : [public_41b1a8]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_40c449 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_40c452 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call ebx
        mov dword ptr ds : [esi+0x10], ebp
        public_40c45b : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_40c472
        push eax
        call dword ptr ds : [public_41b9a4]
        add esp, 4
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_40c472 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov dword ptr ds : [esi+0x20], edi
        je public_40c498
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_40c48f
        cmp cl, 0xFF
        je public_40c48f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40c498
        public_40c48f : nop
        push eax
        call public_418978
        add esp, 4
        public_40c498 : nop
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
        UNREACHABLE_TRAP(0x40c380)
    }
}

#undef public_40c3df
#undef public_40c3e8
#undef public_40c41e
#undef public_40c420
#undef public_40c449
#undef public_40c452
#undef public_40c45b
#undef public_40c472
#undef public_40c48f
#undef public_40c498
