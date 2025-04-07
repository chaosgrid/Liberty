#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41ade0);
CLANG_FORWARD_PROC_SYMBOL(public_470c90);
CLANG_FORWARD_PROC_SYMBOL(public_59e980);
CLANG_FORWARD_PROC_SYMBOL(public_59ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_59f5b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4e78);

#define public_59e9de _public_59e9de
#define public_59e9f3 _public_59e9f3
#define public_59ea00 _public_59ea00
#define public_59ea0c _public_59ea0c
#define public_59ea31 _public_59ea31
#define public_59ea47 _public_59ea47
#define public_59eb19 _public_59eb19
#define public_59eb2e _public_59eb2e
#define public_59eb40 _public_59eb40
#define public_59eb4d _public_59eb4d
#define public_59eb6b _public_59eb6b
#define public_59eb76 _public_59eb76
#define public_59eb8b _public_59eb8b
#define public_59eb91 _public_59eb91
#define public_59ebac _public_59ebac
#define public_59ebb2 _public_59ebb2
#define public_59ebb4 _public_59ebb4
#define public_59ebca _public_59ebca
#define public_59ebcc _public_59ebcc

PROC_DECLARE(0x59e980, internal_59e980, public_59e980);
extern "C" NAKED register_t __cdecl internal_59e980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4e78 @0x59e982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4e78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x6C]
        push esi
        push edi
        push ebp
        mov esi, ecx
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [public_5c6d14]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x74], ebx
        je public_59ea47
        mov edi, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp edi, ebp
        jne public_59e9de
        xor edx, edx
        jmp public_59e9f3
        public_59e9de : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_59e9f3 : nop
        xor eax, eax
        cmp edx, ebp
        jle public_59ea0c
        mov ecx, edi
        nop 
        lea esp, ss:[esp]
        public_59ea00 : nop
        cmp dword ptr ds : [ecx], ebx
        je public_59ea31
        inc eax
        add ecx, 0xC
        cmp eax, edx
        jl public_59ea00
        public_59ea0c : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        call public_470c90
        mov al, 1
        jmp public_59ebcc
        public_59ea31 : nop
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov al, 1
        jmp public_59ebcc
        public_59ea47 : nop
        xor eax, eax
        xor bl, bl
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [public_5c6dd8]
        mov dword ptr ss : [esp+0x34], offset public_5c7388
        mov ecx, 0xB
        lea edi, ss:[esp+0x38]
        rep stosd
        mov dword ptr ss : [esp+0x40], 0x80000000
        mov dword ptr ss : [esp+0x44], 1
        mov dword ptr ss : [esp+0x4C], 3
        mov dword ptr ss : [esp+0x50], 0x8000080
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x30], 0x34
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_59ebb4
        mov eax, dword ptr ss : [esp+0x10]
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        call public_41ade0
        mov ecx, dword ptr ss : [esp+0x88]
        push 0xFFFFFFFF
        push 1
        push ecx
        mov ebp, eax
        call public_41aa50
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x94], eax
        push edx
        lea eax, ss:[esp+0x94]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6078]
        add esp, 0x28
        test al, al
        je public_59ebb4
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        jne public_59eb19
        xor edx, edx
        jmp public_59eb2e
        public_59eb19 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_59eb2e : nop
        mov ebx, dword ptr ss : [esp+0x74]
        xor eax, eax
        test edx, edx
        jle public_59eb4d
        xor ecx, ecx
        lea ebx, ds:[ebx]
        public_59eb40 : nop
        cmp dword ptr ds : [ecx+edi], ebx
        je public_59eb6b
        inc eax
        add ecx, 0xC
        cmp eax, edx
        jl public_59eb40
        public_59eb4d : nop
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_59ebf0
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        mov ecx, esi
        call public_59f5b0
        mov ebx, dword ptr ss : [esp+0x74]
        public_59eb6b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_59eb76
        xor edx, edx
        jmp public_59eb8b
        public_59eb76 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_59eb8b : nop
        test edx, edx
        jle public_59ebb2
        xor eax, eax
        public_59eb91 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [eax+ecx], ebx
        jne public_59ebac
        mov edi, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [eax+ecx+4], ebp
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+ecx+8], edi
        mov ebx, dword ptr ss : [esp+0x74]
        public_59ebac : nop
        add eax, 0xC
        dec edx
        jne public_59eb91
        public_59ebb2 : nop
        mov bl, 1
        public_59ebb4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        je public_59ebca
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_59ebca : nop
        mov al, bl
        public_59ebcc : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x59e980)
    }
}

#undef public_59e9de
#undef public_59e9f3
#undef public_59ea00
#undef public_59ea0c
#undef public_59ea31
#undef public_59ea47
#undef public_59eb19
#undef public_59eb2e
#undef public_59eb40
#undef public_59eb4d
#undef public_59eb6b
#undef public_59eb76
#undef public_59eb8b
#undef public_59eb91
#undef public_59ebac
#undef public_59ebb2
#undef public_59ebb4
#undef public_59ebca
#undef public_59ebcc
