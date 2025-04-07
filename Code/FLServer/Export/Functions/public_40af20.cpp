#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40af20);
CLANG_FORWARD_PROC_SYMBOL(public_40c4d0);
CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_41859a);
CLANG_FORWARD_PROC_SYMBOL(public_4185a0);
CLANG_FORWARD_PROC_SYMBOL(public_4185a6);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418c9c);
CLANG_FORWARD_PROC_SYMBOL(public_418ca2);
CLANG_FORWARD_JUMP_SYMBOL(public_419f29);

#define public_40af60 _public_40af60
#define public_40afca _public_40afca
#define public_40afe6 _public_40afe6
#define public_40afe8 _public_40afe8
#define public_40b001 _public_40b001
#define public_40b033 _public_40b033
#define public_40b07e _public_40b07e
#define public_40b0a3 _public_40b0a3
#define public_40b0bb _public_40b0bb
#define public_40b0e0 _public_40b0e0
#define public_40b0f8 _public_40b0f8
#define public_40b11d _public_40b11d
#define public_40b13d _public_40b13d
#define public_40b14d _public_40b14d
#define public_40b172 _public_40b172
#define public_40b1aa _public_40b1aa
#define public_40b1cc _public_40b1cc
#define public_40b1e0 _public_40b1e0
#define public_40b20a _public_40b20a
#define public_40b214 _public_40b214
#define public_40b21a _public_40b21a

PROC_DECLARE(0x40af20, internal_40af20, public_40af20);
extern "C" NAKED register_t __cdecl internal_40af20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_419f29 @0x40af22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419f29
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80C
        push ebx
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_41bc2c]
        cmp dword ptr ds : [public_427824], ebx
        mov dword ptr ss : [esp+8], eax
        je public_40b20a
        push ebp
        mov ebp, dword ptr ds : [public_41b994]
        push esi
        push edi
        mov edi, edi
        public_40af60 : nop
        mov eax, dword ptr ds : [public_4277d8]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov ecx, dword ptr ds : [public_427828]
        mov edi, dword ptr ds : [ecx+0xC8]
        cmp edi, ebx
        jne public_40b001
        mov edx, dword ptr ds : [public_427830]
        push edx
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_4255bc @0x40af8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4255bc
        push eax
        call ebp
        push 0x28
        call public_418a9e
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x824], ebx
        je public_40afe6
        mov edx, dword ptr ds : [public_427828]
        mov ecx, dword ptr ds : [edx+0x808]
        cmp ecx, ebx
        mov esi, dword ptr ds : [edx+0x814]
        jne public_40afca
        mov ecx, dword ptr ds : [public_41b8b4]
        public_40afca : nop
        lea edi, ss:[esp+0x1C]
        push edi
        push esi
        push ecx
        add edx, 0x850
        push edx
/*FIXUP push offset public_4255a8 @0x40afd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4255a8
        mov ecx, eax
        call public_4185a6
        jmp public_40afe8
        public_40afe6 : nop
        xor eax, eax
        public_40afe8 : nop
        mov ecx, dword ptr ds : [public_427828]
        mov dword ptr ss : [esp+0x824], 0xFFFFFFFF
        mov edi, eax
        mov dword ptr ds : [ecx+0xC8], eax
        public_40b001 : nop
        mov edx, dword ptr ds : [public_427828]
        mov ecx, dword ptr ds : [edx+0xC8]
        cmp ecx, ebx
        je public_40b1e0
        call public_4185a0
        mov eax, dword ptr ds : [public_427828]
        mov ecx, dword ptr ds : [eax+0xC8]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, ebx
        je public_40b033
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        public_40b033 : nop
        mov eax, dword ptr ds : [public_427828]
        mov ecx, dword ptr ds : [eax+0xC8]
        call public_41859a
        mov esi, eax
        cmp esi, dword ptr ds : [public_427834]
        je public_40b1e0
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [public_427834], esi
        call public_418aaa
        lea eax, ds:[esi-1]
        cmp eax, 3
        mov dword ptr ss : [esp+0x824], 1
        ja public_40b1cc
/*FIXUP jmp dword ptr ds : [eax*4+public_40b230] @0x40b077*/
  JMPTB cmp eax, 0
  JMPTB je public_40b07e
  JMPTB cmp eax, 1
  JMPTB je public_40b14d
  JMPTB cmp eax, 2
  JMPTB je public_40b0f8
  JMPTB cmp eax, 3
  JMPTB je public_40b0bb
  JMPTB int 3
        public_40b07e : nop
        push 0xF008
        lea ecx, ss:[esp+0x14]
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40b0a3
/*FIXUP push offset public_42557c @0x40b095*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40b0a3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push ecx
        push eax
        call public_40e160
        add esp, 8
        jmp public_40b1cc
        public_40b0bb : nop
        push 0xF009
        lea ecx, ss:[esp+0x14]
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40b0e0
/*FIXUP push offset public_42557c @0x40b0d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40b0e0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push edx
        push eax
        call public_40e160
        add esp, 8
        jmp public_40b1cc
        public_40b0f8 : nop
        push 0xF00A
        lea ecx, ss:[esp+0x14]
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40b11d
/*FIXUP push offset public_42557c @0x40b10f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40b11d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push ecx
        push eax
        call public_40e160
        add esp, 8
        cmp edi, ebx
        je public_40b13d
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+4]
        public_40b13d : nop
        mov eax, dword ptr ds : [public_427828]
        mov dword ptr ds : [eax+0xC8], ebx
        jmp public_40b1cc
        public_40b14d : nop
        push 0xF00B
        lea ecx, ss:[esp+0x14]
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40b172
/*FIXUP push offset public_42557c @0x40b164*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40b172 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push ecx
        push eax
        call public_40e160
        add esp, 8
        push 0xF00C
        lea ecx, ss:[esp+0x14]
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40b1aa
/*FIXUP push offset public_42557c @0x40b19c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40b1aa : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push edx
        push eax
        call public_40e160
        mov ecx, dword ptr ds : [public_427828]
        add esp, 8
        cmp ecx, ebx
        je public_40b1cc
        call public_40c4d0
        public_40b1cc : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x824], 0xFFFFFFFF
        call public_418aa4
        public_40b1e0 : nop
        mov eax, dword ptr ds : [public_4277d8]
        push eax
        call dword ptr ds : [public_41b1a4]
        push 0x3E8
        call dword ptr ds : [public_41b174]
        cmp dword ptr ds : [public_427824], ebx
        jne public_40af60
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        public_40b20a : nop
        cmp eax, ebx
        pop ebx
        je public_40b214
        cmp eax, 1
        jne public_40b21a
        public_40b214 : nop
        call dword ptr ds : [public_41bc28]
        public_40b21a : nop
        mov ecx, dword ptr ss : [esp+0x80C]
        mov dword ptr fs : [0], ecx
        add esp, 0x818
        ret 
        UNREACHABLE_TRAP(0x40af20)
        ASM_EXPORT_ENTRY_SINGLE(0x40b0bb, public_40b0bb)
    }
}

#undef public_40af60
#undef public_40afca
#undef public_40afe6
#undef public_40afe8
#undef public_40b001
#undef public_40b033
#undef public_40b07e
#undef public_40b0a3
#undef public_40b0bb
#undef public_40b0e0
#undef public_40b0f8
#undef public_40b11d
#undef public_40b13d
#undef public_40b14d
#undef public_40b172
#undef public_40b1aa
#undef public_40b1cc
#undef public_40b1e0
#undef public_40b20a
#undef public_40b214
#undef public_40b21a

#pragma init_seg(compiler)
extern "C" void const* const public_40b0bb = __AsmFindLabelExport(&internal_40af20, 0x40b0bb);
