#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285f0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_4bdd40);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59d580);
CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5a43bf _public_5a43bf
#define public_5a4448 _public_5a4448
#define public_5a44e4 _public_5a44e4
#define public_5a44f3 _public_5a44f3
#define public_5a451b _public_5a451b
#define public_5a457a _public_5a457a
#define public_5a4590 _public_5a4590
#define public_5a45b9 _public_5a45b9
#define public_5a45c0 _public_5a45c0
#define public_5a45cb _public_5a45cb
#define public_5a45e5 _public_5a45e5
#define public_5a45ee _public_5a45ee
#define public_5a45f0 _public_5a45f0
#define public_5a461f _public_5a461f
#define public_5a466e _public_5a466e
#define public_5a4682 _public_5a4682

PROC_DECLARE(0x5a4380, internal_5a4380, public_5a4380);
extern "C" NAKED register_t __cdecl internal_5a4380()
{
    __asm
    {
        sub esp, 0x48
        push ebp
        mov ebp, ecx
        test byte ptr ss : [ebp+0x388], 4
        push esi
        push edi
        je public_5a4682
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_5a43bf
        call public_59e6a0
        test al, al
        je public_5a43bf
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_5a43bf
        mov cl, byte ptr ds : [eax+0x2D0]
        test cl, cl
        je public_5a4682
        public_5a43bf : nop
        mov al, byte ptr ss : [ebp+0x388]
        test al, 1
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        je public_5a45cb
        cmp edx, 0xFFFFFFFF
        jne public_5a4682
        cmp dword ptr ds : [ecx+4], 1
        jne public_5a4682
        mov cl, byte ptr ss : [ebp+0x35C]
        and cl, 0xFB
        and al, 0xFE
        push ebp
        mov byte ptr ss : [ebp+0x35C], cl
        mov byte ptr ss : [ebp+0x388], al
        call public_59d960
        fild dword ptr ds : [public_616844]
        fstp dword ptr ss : [esp]
        fild dword ptr ds : [public_616840]
        push ecx
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, offset public_67dbf8
        call public_4bdd40
        mov eax, dword ptr ds : [public_67de48]
        test eax, eax
        mov ecx, 9
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x30]
        rep movsd
        jne public_5a4448
        call public_5b73e0
        mov dword ptr ds : [public_67de48], eax
        public_5a4448 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [ebp]
        faddp 
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        fmul dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_5a4590
        mov eax, dword ptr ss : [ebp+0x380]
        cmp eax, 0xFFFFFFFF
        je public_5a44e4
        push eax
        call public_5645c0
        add esp, 4
        jmp public_5a451b
        public_5a44e4 : nop
        mov eax, dword ptr ss : [ebp+0x36C]
        test eax, eax
        jne public_5a44f3
        mov eax, dword ptr ds : [public_5c7078]
        public_5a44f3 : nop
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x5C]
        push 0
        push ecx
        mov dword ptr ss : [esp+0x64], eax
        call public_42ae40
        add esp, 4
        push eax
        call public_4285f0
        add esp, 0xC
        public_5a451b : nop
        test byte ptr ss : [ebp+0x388], 2
        je public_5a457a
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_5a45c0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a45c0
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x27
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        test eax, eax
        jne public_5a45c0
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        push eax
        push 0x26
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x48
        ret 4
        public_5a457a : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0xB4]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x48
        ret 4
        public_5a4590 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_5a45b9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a45b9
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x29
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_5a45b9 : nop
        and byte ptr ss : [ebp+0x35C], 0xFE
        public_5a45c0 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x48
        ret 4
        public_5a45cb : nop
        cmp edx, 0xFFFFFFFF
        jne public_5a4682
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, 2
        je public_5a45e5
        cmp ecx, 3
        jne public_5a4682
        public_5a45e5 : nop
        cmp ecx, 3
        jne public_5a45ee
        or al, 2
        jmp public_5a45f0
        public_5a45ee : nop
        and al, 0xFD
        public_5a45f0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov byte ptr ss : [ebp+0x388], al
        je public_5a461f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a461f
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x28
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_5a461f : nop
        mov dl, byte ptr ss : [ebp+0x35C]
        mov cl, byte ptr ss : [ebp+0x388]
        mov eax, dword ptr ss : [ebp+4]
        or dl, 4
        or cl, 1
        test eax, eax
        mov byte ptr ss : [ebp+0x35C], dl
        mov byte ptr ss : [ebp+0x388], cl
        je public_5a466e
        call public_59d580
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a466e
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x2C
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_5a466e : nop
        push ebp
        call public_59d8d0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x48
        ret 4
        public_5a4682 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x5a4380)
    }
}

#undef public_5a43bf
#undef public_5a4448
#undef public_5a44e4
#undef public_5a44f3
#undef public_5a451b
#undef public_5a457a
#undef public_5a4590
#undef public_5a45b9
#undef public_5a45c0
#undef public_5a45cb
#undef public_5a45e5
#undef public_5a45ee
#undef public_5a45f0
#undef public_5a461f
#undef public_5a466e
#undef public_5a4682
