#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4049b0);
CLANG_FORWARD_PROC_SYMBOL(public_404a70);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_JUMP_SYMBOL(public_419b2b);

#define public_402a50 _public_402a50
#define public_402a59 _public_402a59
#define public_402a6f _public_402a6f
#define public_402a77 _public_402a77

PROC_DECLARE(0x402920, internal_402920, public_402920);
extern "C" NAKED register_t __cdecl internal_402920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419b2b @0x402922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419b2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], eax
        lea esi, ds:[ecx+8]
        lea ebp, ds:[edi+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ss : [ebp+0xC]
        push 0x14
        mov byte ptr ds : [esi+0xC], al
        call public_418a9e
        mov byte ptr ds : [eax+0x10], 1
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [esi+8]
        push 0x14
        mov dword ptr ss : [esp+0x2C], edx
        call public_418a9e
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        push ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebx
        call public_403ef0
        mov edx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi+0x1C]
        lea esi, ds:[edx+0x1C]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+0x1D]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0x28]
        push 0x14
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0xC], dl
        call public_418a9e
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov ebp, dword ptr ds : [esi+8]
        push 0x14
        call public_418a9e
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ebp, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [esi+0x10], ebx
        mov edx, dword ptr ds : [edi+0x20]
        push ebp
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, esi
        call public_4049b0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edx
        je public_402a6f
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x11], bl
        jne public_402a59
        lea ebx, ds:[ebx]
        public_402a50 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x11], bl
        je public_402a50
        public_402a59 : nop
        mov dword ptr ds : [eax], ecx
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_404a70
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_402a77
        public_402a6f : nop
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_402a77 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], offset public_41c3e8
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x402920)
    }
}

#undef public_402a50
#undef public_402a59
#undef public_402a6f
#undef public_402a77
