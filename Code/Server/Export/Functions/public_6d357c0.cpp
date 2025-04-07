#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d3583c _public_6d3583c
#define public_6d35854 _public_6d35854
#define public_6d35863 _public_6d35863
#define public_6d358a7 _public_6d358a7
#define public_6d358bf _public_6d358bf
#define public_6d358cf _public_6d358cf
#define public_6d35910 _public_6d35910
#define public_6d3592a _public_6d3592a
#define public_6d3592f _public_6d3592f
#define public_6d3593f _public_6d3593f
#define public_6d35943 _public_6d35943
#define public_6d35950 _public_6d35950
#define public_6d35963 _public_6d35963
#define public_6d3597e _public_6d3597e
#define public_6d3598a _public_6d3598a
#define public_6d35996 _public_6d35996

PROC_DECLARE(0x6d357c0, internal_6d357c0, public_6d357c0);
extern "C" NAKED register_t __cdecl internal_6d357c0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        xor eax, eax
        cmp ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], ebp
        mov esi, edi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6d35943
        cmp dword ptr ds : [ebx+0xC], edi
        je public_6d35943
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        push eax
        call public_6d3e580
        test al, al
        je public_6d3593f
        add edi, 2
        mov eax, edi
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d35863
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, ebx
        je public_6d3583c
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3583c : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d35854
        cmp dword ptr ds : [eax+8], edi
        jne public_6d35854
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_6d35854 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d35863 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jae public_6d3593f
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [ecx+0xC], edi
        je public_6d3593f
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov edx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edx+8]
        ja public_6d358cf
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d358a7
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d358a7 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d3592a
        public_6d358bf : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d3592a
        xor eax, eax
        jmp public_6d3592f
        public_6d358cf : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d35910
        mov ebp, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d358de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d317a0
        push eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebp
        push eax
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test al, al
        jne public_6d3592a
        public_6d35910 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d358bf
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d358bf
        public_6d3592a : nop
        mov eax, 1
        public_6d3592f : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3593f
        add edi, 2
        jmp public_6d35863
        public_6d3593f : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_6d35943 : nop
        mov edx, dword ptr ss : [esp+0x28]
        cmp dword ptr ss : [ebp+0xC], edx
        ja public_6d35996
        lea esp, ss:[esp]
        public_6d35950 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d3597e
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d35963 : nop
        jne public_6d3598a
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x28]
        cmp ecx, eax
        je public_6d35996
        mov edx, dword ptr ss : [esp+0x18]
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        lea edi, ds:[edi+edx*2]
        jmp public_6d35950
        public_6d3597e : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d3598a
        cmp dword ptr ds : [ebx+8], edi
        jmp public_6d35963
        public_6d3598a : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d35996 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d357c0)
    }
}

#undef public_6d3583c
#undef public_6d35854
#undef public_6d35863
#undef public_6d358a7
#undef public_6d358bf
#undef public_6d358cf
#undef public_6d35910
#undef public_6d3592a
#undef public_6d3592f
#undef public_6d3593f
#undef public_6d35943
#undef public_6d35950
#undef public_6d35963
#undef public_6d3597e
#undef public_6d3598a
#undef public_6d35996
