#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce37a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4270);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4330);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6039b);

#define public_6ce1230 _public_6ce1230
#define public_6ce1239 _public_6ce1239
#define public_6ce124f _public_6ce124f
#define public_6ce1257 _public_6ce1257

PROC_DECLARE(0x6ce1100, internal_6ce1100, public_6ce1100);
extern "C" NAKED register_t __cdecl internal_6ce1100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6039b @0x6ce1102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6039b
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
        call public_6d60012
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
        call public_6d60012
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
        call public_6ce37a0
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
        call public_6d60012
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
        call public_6d60012
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
        call public_6ce4270
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edx
        je public_6ce124f
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x11], bl
        jne public_6ce1239
        lea ebx, ds:[ebx]
        public_6ce1230 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x11], bl
        je public_6ce1230
        public_6ce1239 : nop
        mov dword ptr ds : [eax], ecx
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ce4330
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_6ce1257
        public_6ce124f : nop
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6ce1257 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], offset public_6d64ee8
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ce1100)
    }
}

#undef public_6ce1230
#undef public_6ce1239
#undef public_6ce124f
#undef public_6ce1257
