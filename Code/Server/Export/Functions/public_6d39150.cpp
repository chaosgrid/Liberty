#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ffd0);

#define public_6d391bb _public_6d391bb
#define public_6d391d3 _public_6d391d3
#define public_6d391e2 _public_6d391e2
#define public_6d39216 _public_6d39216
#define public_6d3922d _public_6d3922d
#define public_6d39235 _public_6d39235
#define public_6d39240 _public_6d39240
#define public_6d39259 _public_6d39259
#define public_6d39278 _public_6d39278
#define public_6d39286 _public_6d39286
#define public_6d39292 _public_6d39292

PROC_DECLARE(0x6d39150, internal_6d39150, public_6d39150);
extern "C" NAKED register_t __cdecl internal_6d39150()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        xor eax, eax
        cmp ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6d39235
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x20]
        push eax
        push ebp
        call public_6d2ffd0
        test al, al
        mov edi, dword ptr ss : [esp+0x20]
        je public_6d39235
        mov eax, edi
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d391e2
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d391bb
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d391bb : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d391d3
        cmp dword ptr ss : [ebp+8], edi
        jne public_6d391d3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d391d3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d391e2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jae public_6d39235
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov cl, byte ptr ds : [eax+edx+8]
        add eax, edx
        test cl, cl
        je public_6d39235
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp ecx, eax
        mov edx, edi
        je public_6d3922d
        public_6d39216 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d39235
        cmp si, word ptr ds : [ecx]
        jne public_6d39235
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6d39216
        public_6d3922d : nop
        mov edi, edx
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6d391e2
        public_6d39235 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [ebx+0xC], eax
        ja public_6d39292
        mov edi, edi
        public_6d39240 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d39278
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d39286
        mov edi, dword ptr ss : [esp+0x20]
        public_6d39259 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6d39292
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        dec eax
        lea edi, ds:[edi+ecx*2]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6d39240
        public_6d39278 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d39286
        cmp dword ptr ss : [ebp+8], edi
        jne public_6d39286
        jmp public_6d39259
        public_6d39286 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d39292 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d39150)
    }
}

#undef public_6d391bb
#undef public_6d391d3
#undef public_6d391e2
#undef public_6d39216
#undef public_6d3922d
#undef public_6d39235
#undef public_6d39240
#undef public_6d39259
#undef public_6d39278
#undef public_6d39286
#undef public_6d39292
