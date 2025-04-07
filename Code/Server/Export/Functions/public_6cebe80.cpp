#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cece90);

#define public_6cebf65 _public_6cebf65
#define public_6cebf67 _public_6cebf67
#define public_6cebf86 _public_6cebf86
#define public_6cebf90 _public_6cebf90
#define public_6cebfa2 _public_6cebfa2
#define public_6cebfbf _public_6cebfbf
#define public_6cebfec _public_6cebfec
#define public_6cebff0 _public_6cebff0
#define public_6cec00b _public_6cec00b
#define public_6cec02d _public_6cec02d
#define public_6cec23f _public_6cec23f
#define public_6cec250 _public_6cec250
#define public_6cec252 _public_6cec252

PROC_DECLARE(0x6cebe80, internal_6cebe80, public_6cebe80);
extern "C" NAKED register_t __cdecl internal_6cebe80()
{
    __asm
    {
        sub esp, 0xEC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xFC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor edi, edi
        push eax
        mov ebp, ecx
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_6d642fc]
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        je public_6cec250
        fld dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x58], edi
        mov byte ptr ss : [esp+0xA4], 1
        mov byte ptr ss : [esp+0xA5], 0
        mov dword ptr ss : [esp+0x48], ebx
        fmul dword ptr ds : [ebx+0x1C]
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+0x1C]
        mov dl, byte ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x40], eax
        mov ecx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0xA5], dl
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [ebp]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x74]
        rep movsd
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x100]
        mov dword ptr ss : [esp+0x68], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x6C], edx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], eax
        call dword ptr ds : [public_6d642f8]
        test al, al
        jne public_6cebfbf
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov cx, word ptr ds : [esi+2]
        je public_6cebf65
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6cebf67
        public_6cebf65 : nop
        xor eax, eax
        public_6cebf67 : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        test eax, eax
        je public_6cebfa2
        cmp dword ptr ds : [eax+0x14], 0x10000
        jne public_6cebf86
        mov eax, dword ptr ds : [eax+0x20]
        jmp public_6cebf90
        public_6cebf86 : nop
        push eax
        call dword ptr ds : [public_6d642f4]
        add esp, 4
        public_6cebf90 : nop
        test eax, eax
        je public_6cebfa2
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x70]
        jmp public_6cebfbf
        public_6cebfa2 : nop
        mov eax, dword ptr ds : [esi+8]
        push 0
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_6d642f0]
        add esp, 0x10
        public_6cebfbf : nop
        call dword ptr ds : [public_6d642ec]
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, eax
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x1C], ecx
        jle public_6cec23f
        mov ebx, dword ptr ss : [esp+0x104]
        mov edi, dword ptr ds : [public_6d64c7c]
        jmp public_6cebff0
        public_6cebfec : nop
        mov edx, dword ptr ss : [esp+0x38]
        public_6cebff0 : nop
        mov eax, dword ptr ss : [esp+0x100]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_6cec00b
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 5
        jg public_6cec252
        public_6cec00b : nop
        mov ecx, dword ptr ds : [edx+4]
        mov eax, ecx
        and eax, 0x3FFFFFFF
        inc ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x1C]
        cmp esi, eax
        mov dword ptr ss : [esp+0x50], eax
        ja public_6cec02d
        mov dword ptr ss : [esp+0x50], esi
        public_6cec02d : nop
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0xF0]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x5C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x60], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x64], eax
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xE4]
        push ecx
        fmul dword ptr ds : [public_6d656b8]
        fstp qword ptr ss : [esp+0x14]
        call dword ptr ds : [public_6d642e8]
        fld qword ptr ss : [esp+0x14]
        sub esp, 8
        fadd st(0), st
        lea ecx, ss:[esp+0xB4]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ds : [public_6d651a8]
        sub esp, 0xC
        fld dword ptr ss : [esp+0xBC]
        lea ecx, ss:[esp+0xCC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xB4]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6ce7c10
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0xC4]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0xC8]
        fstp dword ptr ss : [esp+0x64]
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0xD4]
        fxch 
        fmul qword ptr ds : [public_6d656b0]
        fsub qword ptr ds : [public_6d656a8]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xD0]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0xD4]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0xB8]
        fld dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp+0xBC]
        fxch 
        fmul qword ptr ds : [public_6d656b0]
        fsub qword ptr ds : [public_6d656a8]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xB8]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xE0]
        fxch 
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x98], edx
        lea edx, ss:[esp+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0xE4]
        mov eax, dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ds : [ebx+8]
        push 1
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xA8], ecx
        push eax
        mov ecx, ebx
        call public_6cece90
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x50]
        inc edx
        sub esi, ecx
        test esi, esi
        mov dword ptr ss : [esp+0x18], edx
        jg public_6cebfec
        public_6cec23f : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xEC
        ret 8
        public_6cec250 : nop
        mov eax, edi
        public_6cec252 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xEC
        ret 8
        UNREACHABLE_TRAP(0x6cebe80)
    }
}

#undef public_6cebf65
#undef public_6cebf67
#undef public_6cebf86
#undef public_6cebf90
#undef public_6cebfa2
#undef public_6cebfbf
#undef public_6cebfec
#undef public_6cebff0
#undef public_6cec00b
#undef public_6cec02d
#undef public_6cec23f
#undef public_6cec250
#undef public_6cec252
