#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8200);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b5f);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc4a);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc75);
CLANG_FORWARD_PROC_SYMBOL(public_65dbf9e);
CLANG_FORWARD_PROC_SYMBOL(public_65dc453);
CLANG_FORWARD_PROC_SYMBOL(public_65dc9a5);
CLANG_FORWARD_PROC_SYMBOL(public_65dc9fc);
CLANG_FORWARD_PROC_SYMBOL(public_65dca41);
CLANG_FORWARD_PROC_SYMBOL(public_65dcd6d);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd1e8);

#define public_65d9b99 _public_65d9b99
#define public_65d9bac _public_65d9bac
#define public_65d9bba _public_65d9bba
#define public_65d9bff _public_65d9bff
#define public_65d9c1a _public_65d9c1a
#define public_65d9c30 _public_65d9c30
#define public_65d9c3f _public_65d9c3f
#define public_65d9c6a _public_65d9c6a
#define public_65d9c80 _public_65d9c80
#define public_65d9c95 _public_65d9c95
#define public_65d9cb0 _public_65d9cb0
#define public_65d9cdb _public_65d9cdb
#define public_65d9ce3 _public_65d9ce3
#define public_65d9cec _public_65d9cec
#define public_65d9d06 _public_65d9d06
#define public_65d9d09 _public_65d9d09
#define public_65d9d0c _public_65d9d0c
#define public_65d9d6e _public_65d9d6e
#define public_65d9d8b _public_65d9d8b
#define public_65d9da6 _public_65d9da6
#define public_65d9da9 _public_65d9da9
#define public_65d9dd4 _public_65d9dd4
#define public_65d9def _public_65d9def
#define public_65d9e02 _public_65d9e02
#define public_65d9e0b _public_65d9e0b
#define public_65d9e2b _public_65d9e2b
#define public_65d9e31 _public_65d9e31
#define public_65d9e3c _public_65d9e3c
#define public_65d9e4a _public_65d9e4a
#define public_65d9e5f _public_65d9e5f
#define public_65d9e76 _public_65d9e76
#define public_65d9e78 _public_65d9e78

PROC_DECLARE(0x65d9b5f, internal_65d9b5f, public_65d9b5f);
extern "C" NAKED register_t __cdecl internal_65d9b5f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1728 @0x65d9b64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1728
/*FIXUP push offset _public_65dcf2c @0x65d9b69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov ebx, dword ptr ss : [ebp+8]
        xor edi, edi
        cmp ebx, edi
        jne public_65d9b99
        push dword ptr ss : [ebp+0xC]
        call public_65d8535
        pop ecx
        jmp public_65d9e78
        public_65d9b99 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        cmp esi, edi
        jne public_65d9bac
        push ebx
        call public_65d7f23
        pop ecx
        jmp public_65d9e76
        public_65d9bac : nop
        mov eax, dword ptr ds : [public_65e7924]
        cmp eax, 3
        jne public_65d9cec
        public_65d9bba : nop
        mov dword ptr ss : [ebp-0x24], edi
        cmp esi, 0xFFFFFFE0
        ja public_65d9cb0
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], edi
        push ebx
        call public_65dbc4a
        pop ecx
        mov dword ptr ss : [ebp-0x28], eax
        cmp eax, edi
        je public_65d9c80
        cmp esi, dword ptr ds : [public_65e791c]
        ja public_65d9c30
        push esi
        push ebx
        push eax
        call public_65dc453
        add esp, 0xC
        test eax, eax
        je public_65d9bff
        mov dword ptr ss : [ebp-0x24], ebx
        jmp public_65d9c30
        public_65d9bff : nop
        push esi
        call public_65dbf9e
        pop ecx
        mov dword ptr ss : [ebp-0x24], eax
        cmp eax, edi
        je public_65d9c30
        mov eax, dword ptr ds : [ebx-4]
        dec eax
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, esi
        jb public_65d9c1a
        mov eax, esi
        public_65d9c1a : nop
        push eax
        push ebx
        push dword ptr ss : [ebp-0x24]
        call public_65d8200
        push ebx
        push dword ptr ss : [ebp-0x28]
        call public_65dbc75
        add esp, 0x14
        public_65d9c30 : nop
        cmp dword ptr ss : [ebp-0x24], edi
        jne public_65d9c80
        cmp esi, edi
        jne public_65d9c3f
        push 1
        pop esi
        mov dword ptr ss : [ebp+0xC], esi
        public_65d9c3f : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        mov dword ptr ss : [ebp+0xC], esi
        push esi
        push edi
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1060]
        mov dword ptr ss : [ebp-0x24], eax
        cmp eax, edi
        je public_65d9c80
        mov eax, dword ptr ds : [ebx-4]
        dec eax
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, esi
        jb public_65d9c6a
        mov eax, esi
        public_65d9c6a : nop
        push eax
        push ebx
        push dword ptr ss : [ebp-0x24]
        call public_65d8200
        push ebx
        push dword ptr ss : [ebp-0x28]
        call public_65dbc75
        add esp, 0x14
        public_65d9c80 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d9ce3
        cmp dword ptr ss : [ebp-0x28], edi
        jne public_65d9cb0
        cmp esi, edi
        jne public_65d9c95
        push 1
        pop esi
        public_65d9c95 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        mov dword ptr ss : [ebp+0xC], esi
        push esi
        push ebx
        push edi
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e108c]
        mov dword ptr ss : [ebp-0x24], eax
        public_65d9cb0 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, edi
        jne public_65d9e78
        cmp dword ptr ds : [public_65e63d4], edi
        je public_65d9e78
        push esi
        call public_65dd1e8
        pop ecx
        test eax, eax
        jne public_65d9bba
        jmp public_65d9e76
        public_65d9cdb : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        xor edi, edi
        public_65d9ce3 : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65d9cec : nop
        cmp eax, 2
        jne public_65d9e3c
        cmp esi, 0xFFFFFFE0
        ja public_65d9d0c
        cmp esi, edi
        jbe public_65d9d06
        add esi, 0xF
        and esi, 0xFFFFFFF0
        jmp public_65d9d09
        public_65d9d06 : nop
        push 0x10
        pop esi
        public_65d9d09 : nop
        mov dword ptr ss : [ebp+0xC], esi
        public_65d9d0c : nop
        mov dword ptr ss : [ebp-0x24], edi
        cmp esi, 0xFFFFFFE0
        ja public_65d9e0b
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        lea eax, ss:[ebp-0x2C]
        push eax
        lea eax, ss:[ebp-0x38]
        push eax
        push ebx
        call public_65dc9a5
        add esp, 0xC
        mov edi, eax
        mov dword ptr ss : [ebp-0x30], edi
        test edi, edi
        je public_65d9def
        cmp esi, dword ptr ds : [public_65e55ec]
        jae public_65d9da9
        mov ebx, esi
        shr ebx, 4
        push ebx
        push edi
        push dword ptr ss : [ebp-0x2C]
        push dword ptr ss : [ebp-0x38]
        call public_65dcd6d
        add esp, 0x10
        test eax, eax
        je public_65d9d6e
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x24], eax
        jmp public_65d9da6
        public_65d9d6e : nop
        push ebx
        call public_65dca41
        pop ecx
        mov dword ptr ss : [ebp-0x24], eax
        test eax, eax
        je public_65d9da6
        movzx eax, byte ptr ds : [edi]
        shl eax, 4
        mov dword ptr ss : [ebp-0x34], eax
        cmp eax, esi
        jb public_65d9d8b
        mov eax, esi
        public_65d9d8b : nop
        push eax
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp-0x24]
        call public_65d8200
        push edi
        push dword ptr ss : [ebp-0x2C]
        push dword ptr ss : [ebp-0x38]
        call public_65dc9fc
        add esp, 0x18
        public_65d9da6 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_65d9da9 : nop
        cmp dword ptr ss : [ebp-0x24], 0
        jne public_65d9e02
        push esi
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1060]
        mov dword ptr ss : [ebp-0x24], eax
        test eax, eax
        je public_65d9e02
        movzx eax, byte ptr ds : [edi]
        shl eax, 4
        mov dword ptr ss : [ebp-0x34], eax
        cmp eax, esi
        jb public_65d9dd4
        mov eax, esi
        public_65d9dd4 : nop
        push eax
        push ebx
        push dword ptr ss : [ebp-0x24]
        call public_65d8200
        push edi
        push dword ptr ss : [ebp-0x2C]
        push dword ptr ss : [ebp-0x38]
        call public_65dc9fc
        add esp, 0x18
        jmp public_65d9e02
        public_65d9def : nop
        push esi
        push ebx
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e108c]
        mov dword ptr ss : [ebp-0x24], eax
        public_65d9e02 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d9e31
        public_65d9e0b : nop
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, edi
        jne public_65d9e78
        cmp dword ptr ds : [public_65e63d4], edi
        je public_65d9e78
        push esi
        call public_65dd1e8
        pop ecx
        test eax, eax
        jne public_65d9d0c
        jmp public_65d9e76
        public_65d9e2b : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        public_65d9e31 : nop
        push 9
        call public_65dcf0c
        pop ecx
        xor edi, edi
        ret 
        public_65d9e3c : nop
        xor eax, eax
        cmp esi, 0xFFFFFFE0
        ja public_65d9e5f
        cmp esi, edi
        jne public_65d9e4a
        push 1
        pop esi
        public_65d9e4a : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        push esi
        push ebx
        push edi
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e108c]
        public_65d9e5f : nop
        cmp eax, edi
        jne public_65d9e78
        cmp dword ptr ds : [public_65e63d4], edi
        je public_65d9e78
        push esi
        call public_65dd1e8
        pop ecx
        test eax, eax
        jne public_65d9e3c
        public_65d9e76 : nop
        xor eax, eax
        public_65d9e78 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d9b5f)
        ASM_EXPORT_ENTRY_FIRST(0x65d9cdb, public_65d9cdb)
        ASM_EXPORT_ENTRY_LAST(0x65d9e2b, public_65d9e2b)
    }
}

#undef public_65d9b99
#undef public_65d9bac
#undef public_65d9bba
#undef public_65d9bff
#undef public_65d9c1a
#undef public_65d9c30
#undef public_65d9c3f
#undef public_65d9c6a
#undef public_65d9c80
#undef public_65d9c95
#undef public_65d9cb0
#undef public_65d9cdb
#undef public_65d9ce3
#undef public_65d9cec
#undef public_65d9d06
#undef public_65d9d09
#undef public_65d9d0c
#undef public_65d9d6e
#undef public_65d9d8b
#undef public_65d9da6
#undef public_65d9da9
#undef public_65d9dd4
#undef public_65d9def
#undef public_65d9e02
#undef public_65d9e0b
#undef public_65d9e2b
#undef public_65d9e31
#undef public_65d9e3c
#undef public_65d9e4a
#undef public_65d9e5f
#undef public_65d9e76
#undef public_65d9e78

#pragma init_seg(compiler)
extern "C" void const* const public_65d9cdb = __AsmFindLabelExport(&internal_65d9b5f, 0x65d9cdb);
extern "C" void const* const public_65d9e2b = __AsmFindLabelExport(&internal_65d9b5f, 0x65d9e2b);
