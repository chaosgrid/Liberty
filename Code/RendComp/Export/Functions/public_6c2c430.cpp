#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c430);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c690);
CLANG_FORWARD_PROC_SYMBOL(public_6c34efc);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f02);

#define public_6c2c494 _public_6c2c494
#define public_6c2c49c _public_6c2c49c
#define public_6c2c4b1 _public_6c2c4b1
#define public_6c2c4e1 _public_6c2c4e1
#define public_6c2c4ea _public_6c2c4ea
#define public_6c2c5b4 _public_6c2c5b4

PROC_DECLARE(0x6c2c430, internal_6c2c430, public_6c2c430);
extern "C" NAKED register_t __cdecl internal_6c2c430()
{
    __asm
    {
        push ecx
        fld qword ptr ds : [public_6c36330]
        push ebx
        fmul qword ptr ds : [public_6c363c8]
        push esi
        mov esi, ecx
        push edi
        fst dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [esi+0xC]
        fsubr dword ptr ds : [public_6c361ec]
        call public_6c34f02
        fdivp 
        fldlg2 
        fxch 
        fyl2x 
        fldlg2 
        fld qword ptr ds : [public_6c363d8]
        fyl2x 
        fxch 
        fxch 
        fdivp 
        fadd st(0), st
        fadd dword ptr ds : [public_6c361f0]
        call public_6c34efc
        mov edi, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, edi
        lea edx, ds:[esi+0x20]
        mov eax, ecx
        jl public_6c2c494
        lea eax, ss:[esp+0x14]
        public_6c2c494 : nop
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax]
        jge public_6c2c49c
        mov eax, edx
        public_6c2c49c : nop
        mov ebx, dword ptr ds : [eax]
        cmp dword ptr ds : [esi+0x28], ebx
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6c2c4b1
        test byte ptr ds : [esi+8], 2
        je public_6c2c5b4
        public_6c2c4b1 : nop
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x28], ebx
        fmul dword ptr ds : [public_6c361f0]
        call public_6c34efc
        mov ecx, eax
        mov edx, 1
        shl edx, cl
        mov ecx, ebx
        lea eax, ds:[edx+1]
        imul eax, eax
        and ecx, 0x80000001
        jns public_6c2c4e1
        dec ecx
        or ecx, 0xFFFFFFFE
        inc ecx
        public_6c2c4e1 : nop
        je public_6c2c4ea
        mov ecx, edx
        imul ecx, edx
        add eax, ecx
        public_6c2c4ea : nop
        mov edi, dword ptr ds : [public_6c36058]
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        mov dword ptr ds : [esi+0xB4], eax
        mov eax, dword ptr ds : [esi+0x48]
        push edx
        push eax
        call edi
        mov edx, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [esi+0x48], eax
        mov eax, dword ptr ds : [esi+0xB4]
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        push edx
        call edi
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, dword ptr ds : [esi+0xB4]
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        push eax
        push ecx
        call edi
        mov ecx, dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [esi+0x30]
        add esp, 0x18
        mov dword ptr ds : [esi+0x84], eax
        lea eax, ds:[esi+0x44]
        push eax
        push ecx
        push 0
        mov dword ptr ds : [esi+0xB0], 0
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push 0
        push edx
        call public_6c2c690
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xB0], eax
        mov ecx, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [esi+0x58], eax
        mov eax, 0xC
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x60], eax
        mov eax, 8
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0x88], eax
        mov eax, dword ptr ds : [esi+8]
        and eax, 0xFFFFFFFD
        mov edx, ecx
        or eax, 1
        mov dword ptr ds : [esi+0x6C], ecx
        mov dword ptr ds : [esi+0x94], edx
        mov dword ptr ds : [esi+8], eax
        public_6c2c5b4 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6c2c430)
    }
}

#undef public_6c2c494
#undef public_6c2c49c
#undef public_6c2c4b1
#undef public_6c2c4e1
#undef public_6c2c4ea
#undef public_6c2c5b4
