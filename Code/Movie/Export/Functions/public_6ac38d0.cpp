#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac38d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);

#define public_6ac391d _public_6ac391d
#define public_6ac3959 _public_6ac3959
#define public_6ac3991 _public_6ac3991
#define public_6ac3a0a _public_6ac3a0a
#define public_6ac3a31 _public_6ac3a31
#define public_6ac3a35 _public_6ac3a35
#define public_6ac3a93 _public_6ac3a93
#define public_6ac3a9f _public_6ac3a9f
#define public_6ac3b37 _public_6ac3b37
#define public_6ac3b51 _public_6ac3b51

PROC_DECLARE(0x6ac38d0, internal_6ac38d0, public_6ac38d0);
extern "C" NAKED register_t __cdecl internal_6ac38d0()
{
    __asm
    {
        sub esp, 0x490
        mov eax, dword ptr ss : [esp+0x4A0]
        push ebx
        mov ecx, 0x20
        push edi
        mov ebx, dword ptr ds : [eax+0x124]
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x1C]
        sub ecx, ebx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, 2
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x18], edx
        je public_6ac391d
        pop edi
        xor eax, eax
        pop ebx
        add esp, 0x490
        ret 0x10
        public_6ac391d : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x4A4]
        test edi, edi
        push esi
        je public_6ac3991
        mov esi, dword ptr ss : [esp+0x4A4]
        lea ecx, ss:[esp+0x38]
        sub ecx, ebp
        lea ebx, ss:[esp+0x26C]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x4AC]
        sub esi, ebp
        sub ebx, ebp
        sub ecx, ebp
        mov eax, ebp
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x10], edi
        public_6ac3959 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+eax]
        mov dword ptr ds : [eax+ebp], ecx
        mov dword ptr ds : [ebx+eax], edx
        and ecx, edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 4
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ac3959
        mov ebp, dword ptr ss : [esp+0x4A8]
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x4B0]
        public_6ac3991 : nop
        push eax
        mov eax, dword ptr ss : [esp+0x4B0]
        push eax
        push 1
        push eax
        call public_6ac36d0
        mov esi, eax
        lea eax, ss:[esp+edi*4+0x26C]
        neg esi
        sbb esi, esi
        push edi
        neg ebx
        push eax
        lea eax, ss:[esp+0x274]
        neg esi
        push ebx
        push eax
        mov dword ptr ss : [esp+0x40], esi
        call public_6ac8bd0
        push edi
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+edi*4+0x3C]
        push eax
        push ebx
        push ecx
        call public_6ac8bd0
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6ac3a0a
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+edi*4+0x268]
        shl edx, cl
        shl eax, cl
        mov ecx, dword ptr ss : [esp+edi*4+0x34]
        or ebx, edx
        or ecx, eax
        mov dword ptr ss : [esp+edi*4+0x268], ebx
        mov dword ptr ss : [esp+edi*4+0x34], ecx
        public_6ac3a0a : nop
        cmp dword ptr ss : [esp+0x4A4], ebp
        je public_6ac3b51
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6ac3b51
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        jmp public_6ac3a35
        public_6ac3a31 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6ac3a35 : nop
        xor eax, eax
        xor ecx, ecx
        mov ax, word ptr ds : [edx]
        mov cx, word ptr ds : [edx+2]
        mov edx, eax
        mov ebx, ecx
        and eax, 0x1F
        and ecx, 0x1F
        shr edx, 5
        shr ebx, 5
        mov ebp, eax
        mov dword ptr ss : [esp+0x28], ecx
        test edi, edi
        mov dword ptr ss : [esp+0x20], ebp
        je public_6ac3b37
        mov eax, dword ptr ss : [esp+0x4AC]
        mov esi, 0x1F
        sub esi, ecx
        mov ecx, 0x1F
        sub ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ds:[ebx*4]
        mov dword ptr ss : [esp+0x1C], edi
        shl edx, 2
        jmp public_6ac3a9f
        public_6ac3a93 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6ac3a9f : nop
        mov edi, dword ptr ss : [esp+edx+0x270]
        mov ebx, dword ptr ss : [esp+edx+0x26C]
        shl edi, 1
        shl edi, cl
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+eax+0x38]
        shr ebx, cl
        mov ecx, esi
        add eax, 4
        add edx, 4
        or edi, ebx
        mov ebx, dword ptr ss : [esp+eax+0x38]
        shl ebx, 1
        shl ebx, cl
        mov ecx, dword ptr ss : [esp+0x28]
        shr ebp, cl
        mov ecx, dword ptr ss : [esp+0x18]
        or ebx, ebp
        mov ebp, dword ptr ss : [esp+edx+0x34]
        and edi, ebx
        mov ebx, dword ptr ss : [esp+edx+0x38]
        shl ebx, 1
        shl ebx, cl
        mov ecx, dword ptr ss : [esp+0x20]
        shr ebp, cl
        mov ecx, esi
        mov esi, dword ptr ss : [esp+eax+0x268]
        or ebx, ebp
        mov ebp, dword ptr ss : [esp+eax+0x26C]
        shl ebp, 1
        shl ebp, cl
        mov ecx, dword ptr ss : [esp+0x28]
        shr esi, cl
        mov ecx, dword ptr ss : [esp+0x24]
        add ecx, 4
        mov dword ptr ss : [esp+0x24], ecx
        or ebp, esi
        and ebx, ebp
        mov ebp, dword ptr ds : [ecx-4]
        xor edi, ebx
        xor ebp, edi
        mov dword ptr ds : [ecx-4], ebp
        mov ecx, dword ptr ss : [esp+0x1C]
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6ac3a93
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        public_6ac3b37 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ac3a31
        public_6ac3b51 : nop
        mov ecx, dword ptr ss : [esp+0x4B0]
        mov eax, dword ptr ss : [esp+0x4AC]
        mov edx, dword ptr ds : [ecx+0x128]
        mov ecx, dword ptr ds : [eax+edi*4-4]
        and ecx, edx
        mov dword ptr ds : [eax+edi*4-4], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        add esp, 0x490
        ret 0x10
        UNREACHABLE_TRAP(0x6ac38d0)
    }
}

#undef public_6ac391d
#undef public_6ac3959
#undef public_6ac3991
#undef public_6ac3a0a
#undef public_6ac3a31
#undef public_6ac3a35
#undef public_6ac3a93
#undef public_6ac3a9f
#undef public_6ac3b37
#undef public_6ac3b51
