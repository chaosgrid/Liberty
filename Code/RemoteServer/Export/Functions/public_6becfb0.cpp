#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc830);
CLANG_FORWARD_PROC_SYMBOL(public_6becfb0);

#define public_6becfcf _public_6becfcf
#define public_6becfd1 _public_6becfd1
#define public_6becfef _public_6becfef
#define public_6becff6 _public_6becff6
#define public_6bed002 _public_6bed002
#define public_6bed03e _public_6bed03e
#define public_6bed050 _public_6bed050
#define public_6bed06a _public_6bed06a
#define public_6bed091 _public_6bed091
#define public_6bed0be _public_6bed0be
#define public_6bed0ea _public_6bed0ea
#define public_6bed118 _public_6bed118
#define public_6bed142 _public_6bed142
#define public_6bed16d _public_6bed16d
#define public_6bed1a0 _public_6bed1a0
#define public_6bed1e3 _public_6bed1e3

PROC_DECLARE(0x6becfb0, internal_6becfb0, public_6becfb0);
extern "C" NAKED register_t __cdecl internal_6becfb0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        test ecx, ecx
        push esi
        push edi
        je public_6becfcf
        call public_6bdc830
        test eax, eax
        je public_6becfcf
        mov cx, word ptr ds : [eax+8]
        jmp public_6becfd1
        public_6becfcf : nop
        xor ecx, ecx
        public_6becfd1 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0x14]
        mov ebp, 2
        add esi, ebp
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx+0x10], esi
        mov edi, 0x16
        jbe public_6becfef
        mov dword ptr ds : [ebx+0x1C], edi
        public_6becfef : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bed002
        public_6becff6 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6bed002 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        test cx, cx
        mov dword ptr ds : [ebx+0x18], eax
        jbe public_6bed1e3
        mov ecx, dword ptr ds : [ebx+0x20]
        call public_6bdc830
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6bed1e3
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6bed1e3
        jmp public_6bed050
        public_6bed03e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, 0x16
        mov ebp, 2
        lea esp, ss:[esp]
        public_6bed050 : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0x14]
        mov ecx, 4
        add eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x10], eax
        jbe public_6bed06a
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed06a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        mov eax, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax], esi
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0x14]
        add eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x10], eax
        jbe public_6bed091
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed091 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        fld dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx+0x18]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        add esi, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6bed0be
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed0be : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, ebp
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6bed0ea
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed0ea : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        mov eax, dword ptr ds : [ebx+0x18]
        mov cx, word ptr ds : [edx+0xC]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6bed118
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed118 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        mov esi, dword ptr ds : [ebx+0x18]
        mov al, byte ptr ds : [edx+0xE]
        mov byte ptr ds : [esi], al
        inc esi
        mov dword ptr ds : [ebx+0x18], esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6bed142
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed142 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        mov esi, dword ptr ds : [ebx+0x18]
        mov cl, byte ptr ds : [edx+0xF]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ds : [ebx+0x18], esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, ebp
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6bed16d
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed16d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        mov eax, dword ptr ds : [ebx+0x18]
        mov cx, word ptr ds : [edx+0x10]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx+0x18], eax
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6bed1a0
        mov dword ptr ds : [ebx+0x1C], edi
        public_6bed1a0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6becff6
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [edx+0x14]
        mov ebp, dword ptr ds : [ebx+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x18], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6bed03e
        public_6bed1e3 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6becfb0)
    }
}

#undef public_6becfcf
#undef public_6becfd1
#undef public_6becfef
#undef public_6becff6
#undef public_6bed002
#undef public_6bed03e
#undef public_6bed050
#undef public_6bed06a
#undef public_6bed091
#undef public_6bed0be
#undef public_6bed0ea
#undef public_6bed118
#undef public_6bed142
#undef public_6bed16d
#undef public_6bed1a0
#undef public_6bed1e3
