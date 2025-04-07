#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaed70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2060);
CLANG_FORWARD_PROC_SYMBOL(public_6eb20d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eaedc2 _public_6eaedc2
#define public_6eaedc4 _public_6eaedc4
#define public_6eaedcc _public_6eaedcc
#define public_6eaeddf _public_6eaeddf
#define public_6eaedec _public_6eaedec
#define public_6eaee10 _public_6eaee10
#define public_6eaee23 _public_6eaee23
#define public_6eaee31 _public_6eaee31
#define public_6eaee40 _public_6eaee40
#define public_6eaee55 _public_6eaee55
#define public_6eaee5b _public_6eaee5b
#define public_6eaee80 _public_6eaee80
#define public_6eaee97 _public_6eaee97
#define public_6eaeea1 _public_6eaeea1
#define public_6eaeee0 _public_6eaeee0
#define public_6eaef0f _public_6eaef0f
#define public_6eaef46 _public_6eaef46
#define public_6eaef61 _public_6eaef61
#define public_6eaef6b _public_6eaef6b
#define public_6eaef90 _public_6eaef90
#define public_6eaefab _public_6eaefab
#define public_6eaefb1 _public_6eaefb1
#define public_6eaefb8 _public_6eaefb8
#define public_6eaefd1 _public_6eaefd1
#define public_6eaefe3 _public_6eaefe3
#define public_6eaf000 _public_6eaf000
#define public_6eaf024 _public_6eaf024
#define public_6eaf030 _public_6eaf030
#define public_6eaf046 _public_6eaf046
#define public_6eaf051 _public_6eaf051
#define public_6eaf064 _public_6eaf064
#define public_6eaf067 _public_6eaf067

PROC_DECLARE(0x6eaed70, internal_6eaed70, public_6eaed70);
extern "C" NAKED register_t __cdecl internal_6eaed70()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 4
        mov eax, edx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6eaef0f
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        je public_6eaedc2
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6eaedc4
        public_6eaedc2 : nop
        mov ecx, ebp
        public_6eaedc4 : nop
        test esi, esi
        jne public_6eaedcc
        xor edx, edx
        jmp public_6eaeddf
        public_6eaedcc : nop
        sub ebx, esi
        mov eax, 0x66666667
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eaeddf : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6eaedec
        xor eax, eax
        public_6eaedec : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        je public_6eaee31
        public_6eaee10 : nop
        test edx, edx
        je public_6eaee23
        mov ecx, 0xA
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6eaee23 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x28
        add edx, 0x28
        cmp eax, ecx
        jne public_6eaee10
        public_6eaee31 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6eaee5b
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6eaee40 : nop
        test eax, eax
        je public_6eaee55
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 0xA
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6eaee55 : nop
        add eax, 0x28
        dec ebx
        jne public_6eaee40
        public_6eaee5b : nop
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 3
        cmp eax, edi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], edi
        je public_6eaeea1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6eaee80 : nop
        test ebx, ebx
        je public_6eaee97
        mov ecx, 0xA
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x24]
        public_6eaee97 : nop
        add eax, 0x28
        add ebx, 0x28
        cmp eax, edi
        jne public_6eaee80
        public_6eaeea1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[edi+eax*8]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6eaeee0
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[edi+ecx*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6eaeee0 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[edi+ecx*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6eaef0f : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, ebx
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6eaefe3
        lea esi, ss:[ebp+ebp*4]
        shl esi, 3
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], esi
        lea eax, ds:[esi+edi]
        je public_6eaef6b
        mov edx, eax
        sub edx, esi
        public_6eaef46 : nop
        test eax, eax
        je public_6eaef61
        mov ecx, 0xA
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaef61 : nop
        add edx, 0x28
        add eax, 0x28
        cmp edx, ebx
        jne public_6eaef46
        public_6eaef6b : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov edx, ebx
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6eaefb1
        lea ecx, ds:[ecx]
        public_6eaef90 : nop
        test ebx, ebx
        je public_6eaefab
        mov ecx, 0xA
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaefab : nop
        add ebx, 0x28
        dec eax
        jne public_6eaef90
        public_6eaefb1 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp edi, ebx
        je public_6eaefd1
        public_6eaefb8 : nop
        push ebp
        mov ecx, edi
        call public_6eb2060
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [edi+0x24], ecx
        add edi, 0x28
        cmp edi, ebx
        jne public_6eaefb8
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaefd1 : nop
        mov eax, dword ptr ds : [ecx+8]
        pop edi
        add eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6eaefe3 : nop
        test ebp, ebp
        jbe public_6eaf067
        lea ebp, ss:[ebp+ebp*4]
        shl ebp, 3
        mov esi, ebx
        sub esi, ebp
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6eaf024
        mov edi, edi
        public_6eaf000 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        push edx
        call public_6eb1810
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 0x28
        add esi, 0x28
        add esp, 8
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6eaf000
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf024 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6eaf046
        nop 
        public_6eaf030 : nop
        sub esi, 0x28
        sub ebx, 0x28
        push esi
        mov ecx, ebx
        call public_6eb20d0
        cmp esi, edi
        jne public_6eaf030
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf046 : nop
        lea esi, ds:[edi+ebp]
        cmp edi, esi
        je public_6eaf064
        mov ebx, dword ptr ss : [esp+0x24]
        public_6eaf051 : nop
        push ebx
        mov ecx, edi
        call public_6eb20d0
        add edi, 0x28
        cmp edi, esi
        jne public_6eaf051
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf064 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6eaf067 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6eaed70)
    }
}

#undef public_6eaedc2
#undef public_6eaedc4
#undef public_6eaedcc
#undef public_6eaeddf
#undef public_6eaedec
#undef public_6eaee10
#undef public_6eaee23
#undef public_6eaee31
#undef public_6eaee40
#undef public_6eaee55
#undef public_6eaee5b
#undef public_6eaee80
#undef public_6eaee97
#undef public_6eaeea1
#undef public_6eaeee0
#undef public_6eaef0f
#undef public_6eaef46
#undef public_6eaef61
#undef public_6eaef6b
#undef public_6eaef90
#undef public_6eaefab
#undef public_6eaefb1
#undef public_6eaefb8
#undef public_6eaefd1
#undef public_6eaefe3
#undef public_6eaf000
#undef public_6eaf024
#undef public_6eaf030
#undef public_6eaf046
#undef public_6eaf051
#undef public_6eaf064
#undef public_6eaf067
