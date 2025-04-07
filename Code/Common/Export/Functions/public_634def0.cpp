#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634def0);
CLANG_FORWARD_PROC_SYMBOL(public_634e070);
CLANG_FORWARD_PROC_SYMBOL(public_634e090);
CLANG_FORWARD_PROC_SYMBOL(public_634e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_634eb00);

#define public_634df1b _public_634df1b
#define public_634df2f _public_634df2f
#define public_634df35 _public_634df35
#define public_634df4d _public_634df4d
#define public_634df93 _public_634df93
#define public_634df97 _public_634df97
#define public_634dfae _public_634dfae
#define public_634dfc9 _public_634dfc9
#define public_634e009 _public_634e009
#define public_634e00d _public_634e00d
#define public_634e04d _public_634e04d

PROC_DECLARE(0x634def0, internal_634def0, public_634def0);
extern "C" NAKED register_t __cdecl internal_634def0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 2
        push edi
        lea edi, ds:[esi+0x18]
        lea ebx, ds:[esi+0x34]
        je public_634df4d
        dec ecx
        je public_634df1b
        mov dword ptr ds : [0], 0
        jmp public_634df97
        public_634df1b : nop
        cmp dword ptr ss : [ebp+4], 3
        jne public_634df2f
        mov ecx, dword ptr ss : [ebp+0xA4]
        cmp ecx, dword ptr ds : [eax+0xA4]
        jae public_634df35
        public_634df2f : nop
        mov ecx, edi
        mov edi, ebx
        mov ebx, ecx
        public_634df35 : nop
        push eax
        push esi
        mov ecx, ebx
        call public_634e070
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx+0x14], edx
        mov word ptr ds : [ebx+0x1A], 3
        jmp public_634df93
        public_634df4d : nop
        push eax
        push esi
        mov ecx, ebx
        call public_634e070
        mov eax, dword ptr ss : [esp+0x20]
        push 0
        push eax
        mov ecx, ebx
        call public_634e090
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x20]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x80]
        call dword ptr ds : [edx+0x1C]
        public_634df93 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_634df97 : nop
        mov ecx, dword ptr ss : [ebp+4]
        sub ecx, 2
        je public_634dfc9
        dec ecx
        je public_634dfae
        mov dword ptr ds : [0], 0
        jmp public_634e00d
        public_634dfae : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, esi
        sub ecx, edi
        mov word ptr ds : [edi+0x18], cx
        push 3
        push edx
        mov ecx, edi
        mov dword ptr ds : [edi+0x10], ebp
        call public_634e090
        jmp public_634e009
        public_634dfc9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        push 0
        sub eax, edi
        push ecx
        mov word ptr ds : [edi+0x18], ax
        mov ecx, edi
        mov dword ptr ds : [edi+0x10], ebp
        call public_634e090
        mov ecx, dword ptr ss : [ebp+0x80]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x1C]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+0x80]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_634e009 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_634e00d : nop
        mov edx, esi
        sub edx, edi
        mov word ptr ds : [edi+0x18], dx
        mov ecx, esi
        sub ecx, ebx
        mov word ptr ds : [ebx+0x18], cx
        fld dword ptr ss : [ebp+0x94]
        fadd dword ptr ds : [eax+0x94]
        fstp dword ptr ds : [esi+0x50]
        mov edx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [edx+0x10]
        mov edx, dword ptr ss : [ebp+0x1C]
        test edx, edx
        jne public_634e04d
        mov edx, dword ptr ds : [eax+0x1C]
        test edx, edx
        jne public_634e04d
        push esi
        call public_634e9f0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_634e04d : nop
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xFFFFDFFF
        or eax, 0x1000
        push esi
        mov dword ptr ds : [esi+0x14], eax
        call public_634eb00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x634def0)
    }
}

#undef public_634df1b
#undef public_634df2f
#undef public_634df35
#undef public_634df4d
#undef public_634df93
#undef public_634df97
#undef public_634dfae
#undef public_634dfc9
#undef public_634e009
#undef public_634e00d
#undef public_634e04d
