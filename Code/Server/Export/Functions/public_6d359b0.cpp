#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d35a11 _public_6d35a11
#define public_6d35a21 _public_6d35a21
#define public_6d35a3d _public_6d35a3d
#define public_6d35a57 _public_6d35a57
#define public_6d35a5c _public_6d35a5c
#define public_6d35a83 _public_6d35a83
#define public_6d35ac5 _public_6d35ac5
#define public_6d35b06 _public_6d35b06
#define public_6d35b1e _public_6d35b1e
#define public_6d35b2e _public_6d35b2e
#define public_6d35b4a _public_6d35b4a
#define public_6d35b64 _public_6d35b64
#define public_6d35b69 _public_6d35b69
#define public_6d35b7e _public_6d35b7e
#define public_6d35b80 _public_6d35b80
#define public_6d35b8d _public_6d35b8d
#define public_6d35b9f _public_6d35b9f

PROC_DECLARE(0x6d359b0, internal_6d359b0, public_6d359b0);
extern "C" NAKED register_t __cdecl internal_6d359b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d35a83
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp edx, ecx
        je public_6d35a83
        mov ebx, dword ptr ds : [eax+8]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        cmp si, 0xFF
        ja public_6d35a21
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d35a57
        public_6d35a11 : nop
        push esi
        mov ecx, ebx
        call public_6d3ea70
        test al, al
        jne public_6d35a57
        xor eax, eax
        jmp public_6d35a5c
        public_6d35a21 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d35a3d
        push esi
        mov ecx, ebx
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d35a57
        public_6d35a3d : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d35a11
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d35a11
        public_6d35a57 : nop
        mov eax, 1
        public_6d35a5c : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d35a83
        mov esi, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 2
        mov eax, esi
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], esi
        jne public_6d35ac5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d35a83 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, dword ptr ss : [ebp+0xC]
        jb public_6d35b9f
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebx, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d35b7e
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d35b80
        public_6d35ac5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d35a83
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp dword ptr ds : [edi+0xC], ecx
        je public_6d35a83
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [eax+8]
        ja public_6d35b2e
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d35b06
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d35b06 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d35b64
        public_6d35b1e : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d35b64
        xor eax, eax
        jmp public_6d35b69
        public_6d35b2e : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d35b4a
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d35b64
        public_6d35b4a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d35b1e
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d35b1e
        public_6d35b64 : nop
        mov eax, 1
        public_6d35b69 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d35a83
        add dword ptr ds : [edi+0x10], 2
        jmp public_6d35ac5
        public_6d35b7e : nop
        mov eax, edx
        public_6d35b80 : nop
        test eax, eax
        je public_6d35b8d
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], esi
        public_6d35b8d : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d35b9f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d359b0)
    }
}

#undef public_6d35a11
#undef public_6d35a21
#undef public_6d35a3d
#undef public_6d35a57
#undef public_6d35a5c
#undef public_6d35a83
#undef public_6d35ac5
#undef public_6d35b06
#undef public_6d35b1e
#undef public_6d35b2e
#undef public_6d35b4a
#undef public_6d35b64
#undef public_6d35b69
#undef public_6d35b7e
#undef public_6d35b80
#undef public_6d35b8d
#undef public_6d35b9f
