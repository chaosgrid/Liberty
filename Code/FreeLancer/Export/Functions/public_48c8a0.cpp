#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_48c8a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc43c);

#define public_48c8f3 _public_48c8f3
#define public_48c8f7 _public_48c8f7
#define public_48c9d6 _public_48c9d6
#define public_48cabf _public_48cabf
#define public_48caca _public_48caca
#define public_48cb1d _public_48cb1d
#define public_48cb28 _public_48cb28
#define public_48cb7b _public_48cb7b
#define public_48cb81 _public_48cb81
#define public_48cb90 _public_48cb90
#define public_48cba0 _public_48cba0
#define public_48ccba _public_48ccba

PROC_DECLARE(0x48c8a0, internal_48c8a0, public_48c8a0);
extern "C" NAKED register_t __cdecl internal_48c8a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc43c @0x48c8a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc43c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x828
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x370]
        mov edx, dword ptr ss : [ebp+0x398]
        xor ecx, ecx
        push esi
        xor ebx, ebx
        cmp eax, edx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x34], eax
        jge public_48cb90
        lea eax, ds:[eax+eax*2]
        shl eax, 5
        mov dword ptr ss : [esp+0x14], eax
        lea esi, ss:[ebp+0x3EC]
        jmp public_48c8f7
        public_48c8f3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_48c8f7 : nop
        mov edi, dword ptr ss : [ebp+0x394]
        mov ecx, dword ptr ds : [esi-0x3C]
        push ebx
        push ebx
        add edi, eax
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x28]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x3C]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x28]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, dword ptr ss : [ebp+0x3A0]
        mov ecx, dword ptr ss : [ebp+0x39C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x30], ebx
        jae public_48c9d6
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [eax*4+public_611bf0]
        mov dword ptr ss : [esp+0x30], eax
        public_48c9d6 : nop
        mov ecx, dword ptr ds : [esi-0x3C]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        push 4
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi-0x28]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 3
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi-0x14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 3
        call dword ptr ds : [edx+0xA8]
        push 0x400
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ds:[edi+0x14]
        call public_41c970
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x3C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 0x400
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ds:[edi+0x2C]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x3C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        cmp dword ptr ds : [edi+0x5C], ebx
        mov dword ptr ss : [esp+0x840], ebx
        lea ecx, ss:[esp+0x18]
        je public_48cabf
        push 0x732
        call dword ptr ds : [public_5c633c]
        mov ecx, dword ptr ds : [edi+0x5C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c63d4]
        jmp public_48caca
        public_48cabf : nop
        push 0x741
        call dword ptr ds : [public_5c633c]
        public_48caca : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6338]
        push 0x400
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [ebp+0x378]
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi-0x28]
        cmp edi, eax
        mov eax, dword ptr ds : [ecx]
        push ebx
        jne public_48cb1d
        push 1
        push 0xC
        call dword ptr ds : [eax+0xA8]
        push ebx
        push 1
        jmp public_48cb28
        public_48cb1d : nop
        push ebx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        push ebx
        push ebx
        public_48cb28 : nop
        mov ecx, dword ptr ds : [esi-0x14]
        mov edx, dword ptr ds : [ecx]
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        add esi, 4
        cmp eax, 5
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x840], 0xFFFFFFFF
        jge public_48cb7b
        call dword ptr ds : [public_5c6098]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x398]
        inc edi
        add ecx, 0x60
        cmp edi, eax
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x14], ecx
        jl public_48c8f3
        jmp public_48cb81
        public_48cb7b : nop
        call dword ptr ds : [public_5c6098]
        public_48cb81 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 5
        jge public_48ccba
        mov ecx, eax
        public_48cb90 : nop
        mov edi, 5
        lea esi, ss:[ebp+ecx*4+0x3B0]
        sub edi, ecx
        mov edi, edi
        public_48cba0 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [ebp+0x39C]
        mov edx, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        push 4
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        add esi, 4
        dec edi
        jne public_48cba0
        public_48ccba : nop
        mov ecx, dword ptr ss : [esp+0x838]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x834
        ret 
        UNREACHABLE_TRAP(0x48c8a0)
    }
}

#undef public_48c8f3
#undef public_48c8f7
#undef public_48c9d6
#undef public_48cabf
#undef public_48caca
#undef public_48cb1d
#undef public_48cb28
#undef public_48cb7b
#undef public_48cb81
#undef public_48cb90
#undef public_48cba0
#undef public_48ccba
