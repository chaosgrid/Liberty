#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614e20);
CLANG_FORWARD_PROC_SYMBOL(public_6616090);
CLANG_FORWARD_PROC_SYMBOL(public_6617220);
CLANG_FORWARD_PROC_SYMBOL(public_66172c0);
CLANG_FORWARD_PROC_SYMBOL(public_6618880);
CLANG_FORWARD_PROC_SYMBOL(public_6618fa0);
CLANG_FORWARD_PROC_SYMBOL(public_661d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661613b _public_661613b
#define public_661614b _public_661614b
#define public_6616159 _public_6616159
#define public_6616160 _public_6616160
#define public_66161b4 _public_66161b4
#define public_66161c5 _public_66161c5
#define public_66161d1 _public_66161d1
#define public_66161d8 _public_66161d8
#define public_66161e1 _public_66161e1
#define public_6616202 _public_6616202
#define public_6616229 _public_6616229
#define public_661622b _public_661622b
#define public_6616239 _public_6616239
#define public_661623c _public_661623c
#define public_661624f _public_661624f
#define public_6616258 _public_6616258
#define public_661625a _public_661625a
#define public_6616268 _public_6616268
#define public_661626b _public_661626b
#define public_66162cf _public_66162cf
#define public_66162d1 _public_66162d1
#define public_66162dd _public_66162dd
#define public_66162eb _public_66162eb
#define public_66162ee _public_66162ee
#define public_66163f2 _public_66163f2

PROC_DECLARE(0x6616090, internal_6616090, public_6616090);
extern "C" NAKED register_t __cdecl internal_6616090()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x5C]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        call public_6614e20
        mov esi, eax
        xor ebx, ebx
        cmp esi, ebx
        je public_66163f2
        lea edi, ss:[ebp+8]
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        mov ecx, esi
        call public_6618fa0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, eax
        jne public_661613b
        mov ebp, dword ptr ds : [edi]
        xor eax, eax
        mov dword ptr ss : [esp+0x40], ebp
        xor ecx, ecx
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x50], eax
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x34], ecx
        xor edx, edx
        mov dword ptr ss : [esp+0x54], ecx
        mov edi, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x40]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x64], edx
        call public_6618880
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x14], edx
        call public_66172c0
        lea ecx, ss:[esp+0x30]
        call public_66172c0
        mov ebp, dword ptr ss : [esp+0x64]
        public_661613b : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x1C]
        lea edi, ds:[eax+0x1C]
        mov eax, ecx
        cmp eax, ebx
        je public_6616160
        public_661614b : nop
        cmp dword ptr ds : [eax+4], ebx
        jne public_6616159
        cmp dword ptr ds : [eax+0x14], ebp
        je public_66163f2
        public_6616159 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        jne public_661614b
        public_6616160 : nop
        fld dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_66291e0]
        mov dword ptr ss : [esp+0x18], ebx
        fnstsw ax
        and eax, 0x4100
        jne public_66161b4
        mov eax, dword ptr ds : [edi+8]
        mov byte ptr ss : [esp+0x13], 1
        cmp eax, ebx
        jne public_661624f
        mov eax, dword ptr ss : [esp+0x6C]
        push 0x34
        and al, 0x7F
        mov dword ptr ss : [esp+0x70], eax
        call public_66281dc
        add esp, 4
        cmp eax, ebx
        je public_6616229
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 0xC
        push ecx
        mov ecx, eax
        call public_661d5b0
        jmp public_661622b
        public_66161b4 : nop
        mov eax, dword ptr ds : [edi+8]
        mov byte ptr ss : [esp+0x13], bl
        cmp eax, ebx
        je public_6616202
        mov eax, ecx
        cmp eax, ebx
        je public_66161d8
        public_66161c5 : nop
        cmp dword ptr ds : [eax+4], ebx
        jne public_66161d1
        mov ecx, dword ptr ds : [eax+0x14]
        or dword ptr ds : [ecx+0x34], 2
        public_66161d1 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        jne public_66161c5
        public_66161d8 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi]
        cmp eax, ebx
        je public_6616202
        public_66161e1 : nop
        mov ebp, dword ptr ds : [esi+0xC]
        push esi
        mov ecx, edi
        call public_6617220
        push esi
        call public_66281d0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp eax, ebx
        mov esi, ebp
        jne public_66161e1
        mov ebp, dword ptr ss : [esp+0x64]
        public_6616202 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        cmp eax, ebx
        je public_6616258
        mov dword ptr ds : [eax+0x14], ebp
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov byte ptr ds : [eax+0x10], bl
        mov dword ptr ds : [eax], offset public_6629228
        mov dword ptr ds : [eax+4], ebx
        mov ebp, eax
        jmp public_661625a
        public_6616229 : nop
        xor eax, eax
        public_661622b : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], eax
        cmp ecx, ebx
        jne public_6616239
        mov dword ptr ds : [edi], eax
        jmp public_661623c
        public_6616239 : nop
        mov dword ptr ds : [ecx+0xC], eax
        public_661623c : nop
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], eax
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        jmp public_6616202
        public_661624f : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_6616202
        public_6616258 : nop
        xor ebp, ebp
        public_661625a : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], ebp
        cmp eax, ebx
        jne public_6616268
        mov dword ptr ds : [edi], ebp
        jmp public_661626b
        public_6616268 : nop
        mov dword ptr ds : [eax+0xC], ebp
        public_661626b : nop
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+8], eax
        mov ecx, dword ptr ds : [edi+8]
        mov al, byte ptr ss : [esp+0x13]
        inc ecx
        cmp al, bl
        mov dword ptr ds : [edi+8], ecx
        je public_66163f2
        push 0x48
        call public_66281dc
        add esp, 4
        cmp eax, ebx
        je public_66162cf
        fld dword ptr ss : [esp+0x68]
        fdivr qword ptr ds : [public_6629220]
        mov dl, byte ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x68]
        and dl, 0xFD
        mov dword ptr ds : [eax+0xC], ebx
        or dl, 1
        mov dword ptr ds : [eax+8], ebx
        mov byte ptr ds : [eax+0x10], bl
        mov dword ptr ds : [eax], offset public_6629210
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x18], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov esi, eax
        fstp dword ptr ds : [eax+0x1C]
        jmp public_66162d1
        public_66162cf : nop
        xor esi, esi
        public_66162d1 : nop
        mov cl, byte ptr ss : [esp+0x6C]
        test cl, cl
        jns public_66162dd
        and byte ptr ds : [esi+0x20], 0xFE
        public_66162dd : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], esi
        cmp eax, ebx
        jne public_66162eb
        mov dword ptr ds : [edi], esi
        jmp public_66162ee
        public_66162eb : nop
        mov dword ptr ds : [eax+0xC], esi
        public_66162ee : nop
        fld dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], eax
        mov ebx, dword ptr ds : [edi+8]
        inc ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+0x28]
        lea eax, ds:[edx+8]
        mov edx, dword ptr ds : [edx+8]
        cmp edx, 1
        jne public_66163f2
        test cl, 0x38
        je public_66163f2
        mov edi, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x24]
        push edi
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0xC]
        mov al, byte ptr ds : [esi+0x20]
        mov ecx, dword ptr ss : [esp+0x64]
        or al, 2
        mov byte ptr ds : [esi+0x20], al
        mov eax, dword ptr ds : [public_662acec]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], eax
        lea eax, ss:[esp+0x34]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x30]
        fld dword ptr ds : [esi+0x1C]
        mov edx, ecx
        add esi, 0x3C
        fld st(0)
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ds : [esi-0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        public_66163f2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 0xC
        UNREACHABLE_TRAP(0x6616090)
    }
}

#undef public_661613b
#undef public_661614b
#undef public_6616159
#undef public_6616160
#undef public_66161b4
#undef public_66161c5
#undef public_66161d1
#undef public_66161d8
#undef public_66161e1
#undef public_6616202
#undef public_6616229
#undef public_661622b
#undef public_6616239
#undef public_661623c
#undef public_661624f
#undef public_6616258
#undef public_661625a
#undef public_6616268
#undef public_661626b
#undef public_66162cf
#undef public_66162d1
#undef public_66162dd
#undef public_66162eb
#undef public_66162ee
#undef public_66163f2
