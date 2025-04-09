#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437420);
CLANG_FORWARD_PROC_SYMBOL(public_43d560);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_54bd30);
CLANG_FORWARD_PROC_SYMBOL(public_575430);
CLANG_FORWARD_PROC_SYMBOL(public_579280);
CLANG_FORWARD_PROC_SYMBOL(public_579290);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5a8960);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5ab1f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2a30);

#define public_5b2a53 _public_5b2a53
#define public_5b2a6d _public_5b2a6d
#define public_5b2ade _public_5b2ade
#define public_5b2b08 _public_5b2b08
#define public_5b2b22 _public_5b2b22
#define public_5b2b29 _public_5b2b29
#define public_5b2b43 _public_5b2b43
#define public_5b2b48 _public_5b2b48
#define public_5b2b64 _public_5b2b64
#define public_5b2b8b _public_5b2b8b
#define public_5b2ba0 _public_5b2ba0
#define public_5b2ba7 _public_5b2ba7
#define public_5b2bc7 _public_5b2bc7
#define public_5b2bd2 _public_5b2bd2
#define public_5b2be9 _public_5b2be9
#define public_5b2bfc _public_5b2bfc
#define public_5b2c0f _public_5b2c0f
#define public_5b2c1a _public_5b2c1a
#define public_5b2c23 _public_5b2c23

PROC_DECLARE(0x5b2a30, internal_5b2a30, public_5b2a30);
extern "C" NAKED register_t __cdecl internal_5b2a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_5c60f8]
        call edi
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        cmp eax, 7
        ja public_5b2c23
/*FIXUP jmp dword ptr ds : [eax*4+public_5b2c2c] @0x5b2a4c*/
  JMPTB cmp eax, 0
  JMPTB je public_5b2c0f
  JMPTB cmp eax, 1
  JMPTB je public_5b2b29
  JMPTB cmp eax, 2
  JMPTB je public_5b2b64
  JMPTB cmp eax, 3
  JMPTB je public_5b2bfc
  JMPTB cmp eax, 4
  JMPTB je public_5b2be9
  JMPTB cmp eax, 5
  JMPTB je public_5b2bc7
  JMPTB cmp eax, 6
  JMPTB je public_5b2a53
  JMPTB cmp eax, 7
  JMPTB je public_5b2b08
  JMPTB int 3
        public_5b2a53 : nop
        push 1
        call public_579280
        add esp, 4
        call public_579290
        test esi, esi
        je public_5b2a6d
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        public_5b2a6d : nop
        call public_5a8260
/*FIXUP push offset public_679d04 @0x5b2a72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679d04
        call public_5a8960
        add esp, 4
        test al, al
        je public_5b2c23
        mov ecx, offset public_67e7b8
        call public_5aa680
        test eax, eax
        je public_5b2c23
/*FIXUP push offset public_67ea78 @0x5b2a99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ea78
        mov ecx, offset public_67e7b8
        call public_5ab1f0
        test al, al
        jne public_5b2ade
/*FIXUP push offset public_67ea78 @0x5b2aac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ea78
        push 0x6FD
/*FIXUP push offset public_5e6a08 @0x5b2ab6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a08
        mov eax, 0x100002
/*FIXUP push offset public_5e6d30 @0x5b2ac0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6d30
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov byte ptr ds : [public_67ecbd], 1
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2ade : nop
        call public_4c4810
        test al, al
        je public_5b2b43
        call public_437420
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        test al, al
        jne public_5b2c23
        xor esi, esi
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2b08 : nop
        push 1
        call public_579280
        add esp, 4
        call public_579290
        test esi, esi
        je public_5b2b22
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        public_5b2b22 : nop
        call public_43d560
        jmp public_5b2b48
        public_5b2b29 : nop
        push 1
        call public_579280
        add esp, 4
        call public_579290
        test esi, esi
        je public_5b2b43
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        public_5b2b43 : nop
        call public_54bd30
        public_5b2b48 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        test al, al
        jne public_5b2c23
        xor esi, esi
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2b64 : nop
        push 1
        call public_579280
        call public_579290
/*FIXUP push offset public_5d4764 @0x5b2b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4764
        mov byte ptr ss : [esp+0x18], 1
        call public_59da10
        add esp, 8
        test eax, eax
        jne public_5b2b8b
        mov byte ptr ds : [public_67dcc8], al
        public_5b2b8b : nop
        test esi, esi
        je public_5b2ba7
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        cmp eax, 2
        je public_5b2ba0
        mov byte ptr ss : [esp+0x10], 0
        public_5b2ba0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        public_5b2ba7 : nop
        call public_437420
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        test al, al
        jne public_5b2c23
        xor esi, esi
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2bc7 : nop
        test esi, esi
        je public_5b2bd2
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        public_5b2bd2 : nop
        call public_575430
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2be9 : nop
        call public_54bd30
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2bfc : nop
        call public_437420
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b2c0f : nop
        test esi, esi
        je public_5b2c1a
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        public_5b2c1a : nop
        xor esi, esi
        push esi
        call dword ptr ds : [public_5c727c]
        public_5b2c23 : nop
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5b2a30)
        ASM_EXPORT_ENTRY_SINGLE(0x5b2b08, public_5b2b08)
    }
}

#undef public_5b2a53
#undef public_5b2a6d
#undef public_5b2ade
#undef public_5b2b08
#undef public_5b2b22
#undef public_5b2b29
#undef public_5b2b43
#undef public_5b2b48
#undef public_5b2b64
#undef public_5b2b8b
#undef public_5b2ba0
#undef public_5b2ba7
#undef public_5b2bc7
#undef public_5b2bd2
#undef public_5b2be9
#undef public_5b2bfc
#undef public_5b2c0f
#undef public_5b2c1a
#undef public_5b2c23

#pragma init_seg(compiler)
extern "C" void const* const public_5b2b08 = __AsmFindLabelExport(&internal_5b2a30, 0x5b2b08);
