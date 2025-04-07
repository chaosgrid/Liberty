#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb10e2 _public_6eb10e2
#define public_6eb1102 _public_6eb1102
#define public_6eb1106 _public_6eb1106
#define public_6eb110b _public_6eb110b
#define public_6eb1195 _public_6eb1195
#define public_6eb11ac _public_6eb11ac
#define public_6eb11c4 _public_6eb11c4
#define public_6eb11cb _public_6eb11cb
#define public_6eb11dd _public_6eb11dd
#define public_6eb11ef _public_6eb11ef

PROC_DECLARE(0x6eb10c0, internal_6eb10c0, public_6eb10c0);
extern "C" NAKED register_t __cdecl internal_6eb10c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6eb11dd
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6eb10e2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6eb1106
        cmp al, bl
        je public_6eb1102
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6eb1106
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6eb10e2
        public_6eb1102 : nop
        xor eax, eax
        jmp public_6eb110b
        public_6eb1106 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb110b : nop
        cmp eax, ebx
        jne public_6eb11dd
        push 0x88
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6eb11cb
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        lea eax, ds:[esi+0x7C]
        mov dword ptr ds : [eax], offset public_6ed1264
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed11f0
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x78], ecx
        jne public_6eb11c4
        mov dword ptr ds : [esi+0x78], eax
        public_6eb1195 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6eb11ef
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6eb11ac
        mov dword ptr ds : [eax], ebx
        public_6eb11ac : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6eb11c4 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6eb1195
        public_6eb11cb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6eb11dd : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6eb11ef : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb10c0)
    }
}

#undef public_6eb10e2
#undef public_6eb1102
#undef public_6eb1106
#undef public_6eb110b
#undef public_6eb1195
#undef public_6eb11ac
#undef public_6eb11c4
#undef public_6eb11cb
#undef public_6eb11dd
#undef public_6eb11ef
