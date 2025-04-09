#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_542350);
CLANG_FORWARD_PROC_SYMBOL(public_5b732c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0d0b);

#define public_540c72 _public_540c72
#define public_540c74 _public_540c74
#define public_540c88 _public_540c88
#define public_540c98 _public_540c98
#define public_540ca8 _public_540ca8
#define public_540cb8 _public_540cb8
#define public_540cc8 _public_540cc8
#define public_540cd8 _public_540cd8
#define public_540ce8 _public_540ce8
#define public_540cf8 _public_540cf8
#define public_540d08 _public_540d08
#define public_540d18 _public_540d18
#define public_540d64 _public_540d64
#define public_540db1 _public_540db1
#define public_540de2 _public_540de2
#define public_540de4 _public_540de4
#define public_540e0b _public_540e0b
#define public_540e0d _public_540e0d
#define public_540e35 _public_540e35
#define public_540e49 _public_540e49
#define public_540e4f _public_540e4f

PROC_DECLARE(0x540c30, internal_540c30, public_540c30);
extern "C" NAKED register_t __cdecl internal_540c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0d0b @0x540c38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0d0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        je public_540c72
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_540c72
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_540c72
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_540c72
        mov edi, eax
        jmp public_540c74
        public_540c72 : nop
        xor edi, edi
        public_540c74 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        dec eax
        cmp eax, 9
        ja public_540db1
/*FIXUP jmp dword ptr ds : [eax*4+public_540e64] @0x540c81*/
  JMPTB cmp eax, 0
  JMPTB je public_540ce8
  JMPTB cmp eax, 1
  JMPTB je public_540d18
  JMPTB cmp eax, 2
  JMPTB je public_540c88
  JMPTB cmp eax, 3
  JMPTB je public_540c98
  JMPTB cmp eax, 4
  JMPTB je public_540ca8
  JMPTB cmp eax, 5
  JMPTB je public_540cb8
  JMPTB cmp eax, 6
  JMPTB je public_540cd8
  JMPTB cmp eax, 7
  JMPTB je public_540cf8
  JMPTB cmp eax, 8
  JMPTB je public_540d08
  JMPTB cmp eax, 9
  JMPTB je public_540cc8
  JMPTB int 3
        public_540c88 : nop
        push esi
        mov ecx, offset public_678a90
        call public_542350
        jmp public_540db1
        public_540c98 : nop
        push esi
        mov ecx, offset public_678a9c
        call public_542350
        jmp public_540db1
        public_540ca8 : nop
        push esi
        mov ecx, offset public_678a84
        call public_542350
        jmp public_540db1
        public_540cb8 : nop
        push esi
        mov ecx, offset public_678a78
        call public_542350
        jmp public_540db1
        public_540cc8 : nop
        push esi
        mov ecx, offset public_678a6c
        call public_542350
        jmp public_540db1
        public_540cd8 : nop
        push esi
        mov ecx, offset public_678a60
        call public_542350
        jmp public_540db1
        public_540ce8 : nop
        push esi
        mov ecx, offset public_678aa8
        call public_542350
        jmp public_540db1
        public_540cf8 : nop
        push esi
        mov ecx, offset public_678a48
        call public_542350
        jmp public_540db1
        public_540d08 : nop
        push esi
        mov ecx, offset public_678a3c
        call public_542350
        jmp public_540db1
        public_540d18 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        fld dword ptr ds : [eax+0x38]
        fcomp dword ptr ds : [public_613ec4]
        fnstsw ax
        test ah, 0x41
        jne public_540d64
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        js public_540d64
        mov eax, dword ptr ds : [public_678ac8]
        lea edx, ss:[esp+0x30]
        push edx
        push 1
        push eax
        mov ecx, offset public_678ac0
        mov dword ptr ss : [esp+0x3C], esi
        call public_537260
        public_540d64 : nop
        push esi
        mov ecx, offset public_678ab4
        call public_542350
        mov ecx, dword ptr ds : [public_678ae0]
        cmp ecx, ebx
        je public_540db1
        test dword ptr ds : [edi+0xE0], 0xFDFF
        je public_540db1
        fld dword ptr ds : [edi+0x38]
        add edi, 0x2C
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], edx
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [eax+0x10]
        public_540db1 : nop
        mov al, byte ptr ss : [esp+0x34]
        test al, al
        je public_540e4f
        push 0x2F8
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_540de2
        lea ecx, ds:[edi+0x10]
        call public_5b732c
        jmp public_540de4
        public_540de2 : nop
        xor edi, edi
        public_540de4 : nop
        add esi, 0xC
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_540e0b
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_540e0b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_540e0d
        public_540e0b : nop
        xor eax, eax
        public_540e0d : nop
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [public_678a34]
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_540e35
        mov ebp, eax
        public_540e35 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        pop ebp
        je public_540e49
        mov dword ptr ds : [eax], edi
        public_540e49 : nop
        inc dword ptr ds : [public_678a38]
        public_540e4f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x540c30)
        ASM_EXPORT_ENTRY_SINGLE(0x540cc8, public_540cc8)
    }
}

#undef public_540c72
#undef public_540c74
#undef public_540c88
#undef public_540c98
#undef public_540ca8
#undef public_540cb8
#undef public_540cc8
#undef public_540cd8
#undef public_540ce8
#undef public_540cf8
#undef public_540d08
#undef public_540d18
#undef public_540d64
#undef public_540db1
#undef public_540de2
#undef public_540de4
#undef public_540e0b
#undef public_540e0d
#undef public_540e35
#undef public_540e49
#undef public_540e4f

#pragma init_seg(compiler)
extern "C" void const* const public_540cc8 = __AsmFindLabelExport(&internal_540c30, 0x540cc8);
