#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e8f0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_6372880);
CLANG_FORWARD_PROC_SYMBOL(public_6372920);
CLANG_FORWARD_PROC_SYMBOL(public_6374170);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6384610);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_637e70e _public_637e70e
#define public_637e725 _public_637e725
#define public_637e732 _public_637e732
#define public_637e734 _public_637e734
#define public_637e74f _public_637e74f
#define public_637e76a _public_637e76a
#define public_637e78e _public_637e78e
#define public_637e7d2 _public_637e7d2
#define public_637e7e6 _public_637e7e6
#define public_637e800 _public_637e800
#define public_637e815 _public_637e815
#define public_637e836 _public_637e836
#define public_637e83d _public_637e83d
#define public_637e888 _public_637e888
#define public_637e8a6 _public_637e8a6
#define public_637e8a8 _public_637e8a8
#define public_637e8b7 _public_637e8b7
#define public_637e8bd _public_637e8bd
#define public_637e8c4 _public_637e8c4
#define public_637e8f4 _public_637e8f4
#define public_637e908 _public_637e908
#define public_637e91f _public_637e91f
#define public_637e937 _public_637e937
#define public_637e942 _public_637e942

PROC_DECLARE(0x637e6f0, internal_637e6f0, public_637e6f0);
extern "C" NAKED register_t __cdecl internal_637e6f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        mov eax, dword ptr ds : [public_658b814]
        push esi
        mov esi, dword ptr ds : [public_658b818]
        cmp esi, eax
        push edi
        je public_637e942
        public_637e70e : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea edi, ds:[esi+0x40]
        jne public_637e725
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [public_658b818], eax
        jmp public_637e7e6
        public_637e725 : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+ecx*4+4]
        test eax, eax
        je public_637e732
        dec eax
        jmp public_637e734
        public_637e732 : nop
        mov eax, ecx
        public_637e734 : nop
        test eax, eax
        jne public_637e74f
        push edi
        call public_636e740
        mov ecx, dword ptr ds : [esi+0x30]
        add esp, 4
        mov dword ptr ds : [public_658b818], ecx
        jmp public_637e7e6
        public_637e74f : nop
        mov eax, dword ptr ds : [public_658b6f0]
        test eax, eax
        je public_637e78e
        test dword ptr ds : [esi+0x50], 0x20000
        je public_637e76a
        push esi
        call public_6372920
        add esp, 4
        public_637e76a : nop
        mov edx, dword ptr ds : [edi]
        push edx
        call public_636e8f0
        fld qword ptr ds : [esi]
        fcomp qword ptr ds : [public_658b020]
        add esp, 4
        fnstsw ax
        test ah, 1
        je public_637e78e
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [public_658b818], eax
        jmp public_637e7e6
        public_637e78e : nop
        mov eax, dword ptr ds : [public_658b1c8]
        test eax, eax
        jne public_637e800
        mov eax, dword ptr ds : [public_658b224]
        test eax, eax
        je public_637e8f4
        mov edx, dword ptr ds : [public_658b814]
        mov esi, dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x40]
        lea edi, ds:[esi+0x40]
        push eax
        call public_636e460
        add esp, 4
        test eax, eax
        jne public_637e937
        cmp dword ptr ds : [edi], 0
        je public_637e7d2
        push edi
        call public_636e740
        add esp, 4
        public_637e7d2 : nop
        push esi
        call public_63705e0
/*FIXUP push offset public_658b810 @0x637e7d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b810
        push esi
        call public_6374170
        add esp, 0xC
        public_637e7e6 : nop
        mov esi, dword ptr ds : [public_658b818]
        cmp esi, dword ptr ds : [public_658b814]
        jne public_637e70e
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_637e800 : nop
        mov eax, dword ptr ds : [public_658b6f0]
        xor edi, edi
        test eax, eax
        je public_637e83d
        mov esi, dword ptr ds : [public_658b810]
        test esi, esi
        je public_637e83d
        public_637e815 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_637e83d
        cmp esi, dword ptr ds : [public_658b818]
        je public_637e83d
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_637e836
        push eax
        call public_636ec10
        add esp, 4
        add edi, eax
        public_637e836 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_637e815
        public_637e83d : nop
        call public_6384610
        mov ecx, dword ptr ds : [public_658b84c]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        sub ecx, edi
        mov dword ptr ss : [esp+0xC], ecx
        sub esp, 8
        fmul qword ptr ds : [public_63a5950]
        fstp qword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        add esp, 8
        call public_6391dae
        mov esi, dword ptr ds : [public_658b818]
        test esi, esi
        mov edi, eax
        je public_637e8c4
        public_637e888 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_637e8c4
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea edx, ds:[esi+0x40]
        je public_637e8bd
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+ecx*4+4]
        test eax, eax
        je public_637e8a6
        dec eax
        jmp public_637e8a8
        public_637e8a6 : nop
        mov eax, ecx
        public_637e8a8 : nop
        test eax, eax
        jne public_637e8b7
        push edx
        call public_636e740
        add esp, 4
        jmp public_637e8bd
        public_637e8b7 : nop
        cmp eax, edi
        jg public_637e91f
        sub edi, eax
        public_637e8bd : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_637e888
        public_637e8c4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_658b84c]
        push edx
        push eax
        inc edi
        push edi
        push ecx
/*FIXUP push offset public_63f59c0 @0x637e8d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f59c0
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        jmp public_637e7e6
        public_637e8f4 : nop
        mov eax, dword ptr ds : [public_658b0e0]
        test eax, eax
        je public_637e908
        call public_6372880
        mov esi, dword ptr ds : [public_658b818]
        public_637e908 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [esi+0x40]
        push edx
        call public_636e460
        add esp, 4
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_637e91f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], esi
        mov ecx, dword ptr ds : [esi+0x40]
        push edi
        push ecx
        call public_636e4a0
        add esp, 8
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_637e937 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], esi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_637e942 : nop
        pop edi
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637e6f0)
    }
}

#undef public_637e70e
#undef public_637e725
#undef public_637e732
#undef public_637e734
#undef public_637e74f
#undef public_637e76a
#undef public_637e78e
#undef public_637e7d2
#undef public_637e7e6
#undef public_637e800
#undef public_637e815
#undef public_637e836
#undef public_637e83d
#undef public_637e888
#undef public_637e8a6
#undef public_637e8a8
#undef public_637e8b7
#undef public_637e8bd
#undef public_637e8c4
#undef public_637e8f4
#undef public_637e908
#undef public_637e91f
#undef public_637e937
#undef public_637e942
