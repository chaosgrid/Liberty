#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2a305 _public_6f2a305
#define public_6f2a310 _public_6f2a310
#define public_6f2a324 _public_6f2a324
#define public_6f2a341 _public_6f2a341
#define public_6f2a353 _public_6f2a353
#define public_6f2a360 _public_6f2a360
#define public_6f2a38f _public_6f2a38f
#define public_6f2a393 _public_6f2a393
#define public_6f2a3a8 _public_6f2a3a8
#define public_6f2a3bf _public_6f2a3bf
#define public_6f2a3d4 _public_6f2a3d4
#define public_6f2a3d8 _public_6f2a3d8
#define public_6f2a3ef _public_6f2a3ef

PROC_DECLARE(0x6f2a2e0, internal_6f2a2e0, public_6f2a2e0);
extern "C" NAKED register_t __cdecl internal_6f2a2e0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        or eax, 0xFFFFFFFF
        cmp edx, ecx
        mov dword ptr ss : [esp], edx
        je public_6f2a3ef
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        jmp public_6f2a310
        public_6f2a305 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6f2a310 : nop
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f2a324
        cmp eax, ecx
        jle public_6f2a3d8
        public_6f2a324 : nop
        lea ecx, ds:[edx+8]
        cmp ebp, ecx
        je public_6f2a3d4
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x20], ecx
        je public_6f2a353
        public_6f2a341 : nop
        cmp ebx, ecx
        je public_6f2a353
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6f2a341
        public_6f2a353 : nop
        cmp eax, esi
        mov edi, eax
        je public_6f2a38f
        lea esp, ss:[esp]
        public_6f2a360 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6f2a360
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        public_6f2a38f : nop
        cmp ebx, ecx
        je public_6f2a3d4
        public_6f2a393 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f2a3a8
        mov edi, eax
        public_6f2a3a8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6f2a3bf
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_6f2a3bf : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f2a393
        mov edx, dword ptr ss : [esp+0x10]
        public_6f2a3d4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6f2a3d8 : nop
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f2a305
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f2a3ef : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f2a2e0)
    }
}

#undef public_6f2a305
#undef public_6f2a310
#undef public_6f2a324
#undef public_6f2a341
#undef public_6f2a353
#undef public_6f2a360
#undef public_6f2a38f
#undef public_6f2a393
#undef public_6f2a3a8
#undef public_6f2a3bf
#undef public_6f2a3d4
#undef public_6f2a3d8
#undef public_6f2a3ef
