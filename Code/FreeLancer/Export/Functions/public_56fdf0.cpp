#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_570040);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_599980);
CLANG_FORWARD_PROC_SYMBOL(public_5aca40);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3098);

#define public_56fe49 _public_56fe49
#define public_56fe50 _public_56fe50
#define public_56fe83 _public_56fe83
#define public_56fe8c _public_56fe8c
#define public_56feab _public_56feab
#define public_56feb7 _public_56feb7
#define public_56ff2b _public_56ff2b
#define public_56ff34 _public_56ff34
#define public_56ff37 _public_56ff37
#define public_56ff44 _public_56ff44
#define public_56ff7f _public_56ff7f
#define public_56ff85 _public_56ff85
#define public_56ff91 _public_56ff91
#define public_56ffa8 _public_56ffa8
#define public_56ffcb _public_56ffcb
#define public_56fff0 _public_56fff0
#define public_570018 _public_570018

PROC_DECLARE(0x56fdf0, internal_56fdf0, public_56fdf0);
extern "C" NAKED register_t __cdecl internal_56fdf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3098 @0x56fdf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3098
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov esi, ecx
        mov byte ptr ss : [esp+0x1C], al
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov eax, dword ptr ds : [esi+0x298]
        xor ecx, ecx
        cmp eax, 8
        mov dword ptr ss : [esp+0x34], ebp
        jae public_56fe50
        mov cl, byte ptr ds : [eax+esi+0x29C]
        test cl, cl
        je public_56fe49
        mov ecx, dword ptr ds : [eax*4+public_614aa0]
        jmp public_56fe50
        public_56fe49 : nop
        mov ecx, dword ptr ds : [eax*4+public_614ac0]
        public_56fe50 : nop
        lea edx, ds:[esi+0x2A4]
        push edx
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, offset public_67e7b8
        call public_5aca40
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_58d4a0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        mov edi, 1
        jne public_56fe83
        xor ebx, ebx
        jmp public_56fe8c
        public_56fe83 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        sub ebx, eax
        sar ebx, 2
        public_56fe8c : nop
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [eax+0x4A4]
        add eax, 0x4A0
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        jne public_56feab
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_56feb7
        public_56feab : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x14], eax
        public_56feb7 : nop
        fild dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        fstp dword ptr ss : [esp]
        push ebp
        call public_595d60
        mov ecx, dword ptr ss : [esp+0x14]
        lea ebp, ds:[ecx-1]
        mov dword ptr ss : [esp+0x18], ebp
        fild dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xC8]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0xC8]
        call public_595dd0
        call public_5b7ec0
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x118], eax
        jle public_56ff2b
        mov al, byte ptr ds : [esi+0x110]
        test al, al
        mov eax, dword ptr ds : [esi+0xC8]
        mov cl, byte ptr ds : [eax+0x6C]
        jne public_56ff34
        or cl, 3
        jmp public_56ff37
        public_56ff2b : nop
        mov eax, dword ptr ds : [esi+0xC8]
        mov cl, byte ptr ds : [eax+0x6C]
        public_56ff34 : nop
        and cl, 0xFC
        public_56ff37 : nop
        mov byte ptr ds : [eax+0x6C], cl
        mov ebp, dword ptr ds : [esi+0x118]
        cmp ebp, ebx
        jge public_56ff85
        public_56ff44 : nop
        cmp edi, dword ptr ss : [esp+0x14]
        jge public_570018
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+ebp*4]
        push eax
        push edi
        mov ecx, esi
        call public_570040
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx+ebp*4]
        mov eax, dword ptr ds : [edx+0x90]
        cmp eax, dword ptr ds : [esi+0x2C8]
        jne public_56ff7f
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d4b0
        public_56ff7f : nop
        inc edi
        inc ebp
        cmp ebp, ebx
        jl public_56ff44
        public_56ff85 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        cmp edi, ebx
        jge public_570018
        public_56ff91 : nop
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4B0]
        xor ebp, ebp
        call public_5ad970
        test eax, eax
        jbe public_56ffcb
        public_56ffa8 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebp
        push edi
        call public_58cbf0
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4B0]
        inc ebp
        call public_5ad970
        cmp ebp, eax
        jb public_56ffa8
        public_56ffcb : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d0b0
        mov ebp, eax
        test ebp, ebp
        je public_56fff0
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_56fff0
        call public_599980
        mov dword ptr ss : [ebp+8], 0
        public_56fff0 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d0b0
        mov byte ptr ds : [eax+1], 0
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d0b0
        inc edi
        cmp edi, ebx
        mov byte ptr ds : [eax], 0
        jl public_56ff91
        public_570018 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x56fdf0)
    }
}

#undef public_56fe49
#undef public_56fe50
#undef public_56fe83
#undef public_56fe8c
#undef public_56feab
#undef public_56feb7
#undef public_56ff2b
#undef public_56ff34
#undef public_56ff37
#undef public_56ff44
#undef public_56ff7f
#undef public_56ff85
#undef public_56ff91
#undef public_56ffa8
#undef public_56ffcb
#undef public_56fff0
#undef public_570018
