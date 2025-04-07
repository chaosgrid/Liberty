#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec62b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

#define public_6ec636c _public_6ec636c
#define public_6ec63a8 _public_6ec63a8

PROC_DECLARE(0x6ec62b0, internal_6ec62b0, public_6ec62b0);
extern "C" NAKED register_t __cdecl internal_6ec62b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6ec62b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaea8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ds : [public_6fb3030]
        push edi
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+4], eax
        call esi
        mov dword ptr ss : [ebp], offset public_6fb5a90
        xor ebx, ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x94], eax
        mov dword ptr ss : [ebp+0x84], eax
        mov dword ptr ss : [ebp+0x74], eax
        mov dword ptr ss : [ebp+0x90], ebx
        mov dword ptr ss : [ebp+0x8C], ebx
        mov dword ptr ss : [ebp+0x88], ebx
        mov dword ptr ss : [ebp+0x80], ebx
        mov dword ptr ss : [ebp+0x7C], ebx
        mov dword ptr ss : [ebp+0x78], ebx
        lea ecx, ss:[ebp+0xA8]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [ebp+0xA0], ebx
        mov dword ptr ss : [ebp+0x9C], ebx
        mov dword ptr ss : [ebp+0x98], ebx
        call esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        mov dword ptr ss : [ebp], offset public_6fb5b40
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec636c
        mov eax, 0x2F
        public_6ec636c : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x10], bl
        mov dword ptr ss : [ebp+0xC], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec63a8
        mov eax, 0x2F
        public_6ec63a8 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+ebp+0x44], bl
        mov dword ptr ss : [ebp+0x40], eax
        pop edi
        mov byte ptr ss : [ebp+0xA4], bl
        mov byte ptr ss : [ebp+0xA5], bl
        mov byte ptr ss : [ebp+0xA6], bl
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec62b0)
    }
}

#undef public_6ec636c
#undef public_6ec63a8
