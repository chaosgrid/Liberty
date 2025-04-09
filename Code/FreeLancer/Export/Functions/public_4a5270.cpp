#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145a0);
CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_4a5270);
CLANG_FORWARD_PROC_SYMBOL(public_58a5d0);

#define public_4a52b6 _public_4a52b6
#define public_4a52c0 _public_4a52c0
#define public_4a5370 _public_4a5370
#define public_4a53e8 _public_4a53e8
#define public_4a5406 _public_4a5406
#define public_4a5436 _public_4a5436
#define public_4a5444 _public_4a5444
#define public_4a5493 _public_4a5493
#define public_4a54a1 _public_4a54a1
#define public_4a556a _public_4a556a

PROC_DECLARE(0x4a5270, internal_4a5270, public_4a5270);
extern "C" NAKED register_t __cdecl internal_4a5270()
{
    __asm
    {
        sub esp, 0x828
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x578]
        mov edx, dword ptr ds : [ebx+0x588]
        push ebp
        xor ecx, ecx
        cmp eax, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jge public_4a5493
        lea eax, ds:[eax+eax*2]
        shl eax, 5
        lea ecx, ds:[ebx+0x60C]
        mov dword ptr ss : [esp+0x14], eax
        lea esi, ds:[ebx+0x5F8]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_4a52c0
        public_4a52b6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ebx]
        public_4a52c0 : nop
        mov ecx, dword ptr ds : [esi-0x3C]
        mov edi, dword ptr ds : [ebx+0x584]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        add edi, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x3C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, dword ptr ds : [ebx+0x590]
        mov ecx, dword ptr ds : [ebx+0x58C]
        mov edx, dword ptr ds : [ecx]
        mov ebp, 0x42B
        jae public_4a5370
        mov edx, dword ptr ds : [ecx+eax*4]
        mov ebp, dword ptr ds : [ebx+eax*4+0x594]
        public_4a5370 : nop
        mov ecx, dword ptr ds : [esi-0x3C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 4
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push ebp
        push 3
        call dword ptr ds : [edx+0xA8]
        push 0x400
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ds:[edi+0x28]
        call public_41c970
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        call public_58a5d0
        mov ecx, eax
        call public_4145a0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        cmp eax, 2
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push 0
        jb public_4a53e8
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x38], ecx
        lea eax, ss:[esp+0x30]
        jmp public_4a5406
        public_4a53e8 : nop
        mov dword ptr ss : [esp+0x28], eax
        fld dword ptr ss : [esp+0x28]
        fsub qword ptr ds : [public_5d4310]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x2C], ecx
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        public_4a5406 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, dword ptr ds : [ebx+0x580]
        mov ecx, dword ptr ds : [esi-0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        jne public_4a5436
        push 1
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push 0
        push 1
        jmp public_4a5444
        public_4a5436 : nop
        push 0
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        public_4a5444 : nop
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, dword ptr ds : [ecx]
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x10]
        inc eax
        add ebp, 0xC
        add esi, 4
        cmp eax, 5
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], ebp
        jge public_4a556a
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x588]
        inc edi
        add ecx, 0x60
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], ecx
        jl public_4a52b6
        mov ecx, dword ptr ss : [esp+0x18]
        public_4a5493 : nop
        mov edi, 5
        lea esi, ds:[ebx+ecx*4+0x5BC]
        sub edi, ecx
        public_4a54a1 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [ebx+0x58C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        add esi, 4
        dec edi
        jne public_4a54a1
        public_4a556a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x828
        ret 
        UNREACHABLE_TRAP(0x4a5270)
    }
}

#undef public_4a52b6
#undef public_4a52c0
#undef public_4a5370
#undef public_4a53e8
#undef public_4a5406
#undef public_4a5436
#undef public_4a5444
#undef public_4a5493
#undef public_4a54a1
#undef public_4a556a
