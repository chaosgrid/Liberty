#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40910);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62cca);

#define public_6d4097b _public_6d4097b
#define public_6d40989 _public_6d40989
#define public_6d4099c _public_6d4099c
#define public_6d409d6 _public_6d409d6
#define public_6d409e7 _public_6d409e7
#define public_6d409fb _public_6d409fb
#define public_6d40a17 _public_6d40a17
#define public_6d40a2b _public_6d40a2b
#define public_6d40a47 _public_6d40a47
#define public_6d40a50 _public_6d40a50
#define public_6d40a5f _public_6d40a5f
#define public_6d40a6b _public_6d40a6b
#define public_6d40a7b _public_6d40a7b

PROC_DECLARE(0x6d40910, internal_6d40910, public_6d40910);
extern "C" NAKED register_t __cdecl internal_6d40910()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62cca @0x6d40912*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62cca
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0xC], edx
        je public_6d40a7b
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        lea esi, ds:[eax+4]
        mov al, byte ptr ss : [esp+0x20]
        push edi
        lea ebp, ds:[ecx+4]
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov ecx, dword ptr ds : [public_6d64b64]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [ecx]
        mov edi, eax
        cmp ebx, edi
        mov byte ptr ss : [esp+0x1C], 1
        jae public_6d4097b
        mov edi, ebx
        public_6d4097b : nop
        cmp esi, ebp
        jne public_6d409e7
        cmp edi, edx
        jbe public_6d40989
        call dword ptr ds : [public_6d64b04]
        public_6d40989 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_6d4099c
        mov ebx, eax
        public_6d4099c : nop
        test ebx, ebx
        jbe public_6d409d6
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d409d6
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d409d6 : nop
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64b50]
        jmp public_6d40a6b
        public_6d409e7 : nop
        cmp edi, edx
        jbe public_6d40a2b
        cmp edi, eax
        jne public_6d40a2b
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        jne public_6d409fb
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d409fb : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d40a2b
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6d40a17
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d40a17 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6d40a6b
        public_6d40a2b : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d40a6b
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6d40a47
        mov ecx, dword ptr ds : [public_6d64b54]
        public_6d40a47 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6d40a5f
        mov edx, edi
        public_6d40a50 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d40a50
        public_6d40a5f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6d40a6b : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], ecx
        pop esi
        pop ebp
        pop ebx
        public_6d40a7b : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d40910)
    }
}

#undef public_6d4097b
#undef public_6d40989
#undef public_6d4099c
#undef public_6d409d6
#undef public_6d409e7
#undef public_6d409fb
#undef public_6d40a17
#undef public_6d40a2b
#undef public_6d40a47
#undef public_6d40a50
#undef public_6d40a5f
#undef public_6d40a6b
#undef public_6d40a7b
